#!/bin/bash
set -ev

j2objc_version=0.9.8.2.3
sha1_checksum=2962ab080bf08ed89f9222b0b9c5b3d19e21d78e

rm -fr Frameworks

echo "fetching j2objc.framework"
curl -OL https://github.com/actorapp/J2ObjC-Framework/releases/download/v${j2objc_version}/j2objc.framework.zip
echo "${sha1_checksum}  j2objc.framework.zip" | shasum -c
unzip -o -q j2objc.framework.zip
mkdir -p Frameworks
mv j2objc.framework Frameworks
rm j2objc.framework.zip
