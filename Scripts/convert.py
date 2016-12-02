import sys
import os

added = set()
with open('include_framework/j2objc.h', 'w') as umbrella:
    for root, directories, filenames in os.walk('include/'):

        # print includedFile +" @" + str(count) 
        count = len(root.split("/")) - 1
        prefix = ""
        if count > 1:
            for i in range(0, count):
                prefix = prefix + "../"

        print root + " @ " + str(count) + " " + prefix

        for filename in filenames:
            
            if not filename.endswith(".h"):
                 continue

            path = os.path.join(root[8:], filename)
            dirName = os.path.split(os.path.join(root, filename))[0][8:] + '/'
            srcFile = os.path.join(root, filename)
            destFile = os.path.join('include_framework', path)

            # Excluding protobuf
            if not path.startswith('com/google/protobuf'):

                if not os.path.exists(os.path.dirname(destFile)):
                    os.makedirs(os.path.dirname(destFile))

                with open(srcFile, 'r') as f:

                    if path not in added:
                        added.add(path)
                        umbrella.write("#import \"" + path + "\"\n")

                    with open(destFile, 'w') as d:
                        for line in f:
                            if (line.startswith("#include") or line.startswith("#import")) and '\"' in line:

                                start = line.index('\"')
                                end = line.index('\"', start + 1)
                                includedFile = line[start + 1:end]

                                if includedFile != 'objc/runtime.h':

                                    # Hack for local include
                                    if "/" not in includedFile:
                                        if os.path.exists(os.path.join(root, includedFile)):
                                            if dirName != '/':
                                                includedFile = dirName + includedFile

                                    line = line[0:start] + "\""+ prefix + includedFile + "\"" + line[end+1:]

                            d.write(line)
