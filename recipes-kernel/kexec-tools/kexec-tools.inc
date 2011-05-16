DESCRIPTION = "Kexec is a fast reboot feature that lets you reboot to a new Linux kernel"
AUTHOR = "Eric Biederman"
HOMEPAGE = "http://www.xmission.com/~ebiederm/files/kexec/"
SECTION = "kernel/userland"
LICENSE = "GPL"
DEPENDS = "virtual/kernel zlib"
INC_PR = "r4"
LIC_FILES_CHKSUM = "file://COPYING;md5=ea5bed2f60d357618ca161ad539f7c0a"

inherit autotools