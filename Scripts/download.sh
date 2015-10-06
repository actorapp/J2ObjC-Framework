#!/bin/bash
set -ev

j2objc_version=0.9.8.2.1
sha1_checksum=ba24a3cbae4f21e5f33f26b2db2bc3d4568cb198

echo "fetching j2objc.framework"
curl -OL https://github.com/actorapp/J2ObjC-Framework/releases/download/v${j2objc_version}/j2objc.framework.zip
echo "${sha1_checksum}  j2objc.framework.zip" | shasum -c
unzip -o -q j2objc.framework.zip
mkdir -p Frameworks
mv j2objc.framework Frameworks
rm j2objc.framework.zip
