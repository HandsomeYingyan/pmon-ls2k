#	$Id: Makefile,v 1.1.1.1 2006/09/14 01:59:06 root Exp $ */
#
#
# Copyright (c) 2001 Opsycon AB  (www.opsycon.se)
# Copyright (c) 2002 Patrik Lindergren  (www.lindergren.com)
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. All advertising materials mentioning features or use of this software
#    must display the following acknowledgement:
#	This product includes software developed by Opsycon AB, Sweden.
#	This product includes software developed by Patrik Lindergren.
# 4. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
# OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
# DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
#

LIB=z
NOPIC=

MACHINE=	${XMACHINE}
MACHINE_ARCH=	${XMACHINE_ARCH}
CURDIR=$(shell pwd)

M=	${CURDIR}/arch/${MACHINE_ARCH}

CPPFLAGS=	-I$M ${ZLIBCPPFLAGS} -U_KERNEL

VPATH+=	${M} ${ZLIBDIR}
 
include ${M}/Makefile.inc

# Files to clean up
CLEANFILES+= ${OBJDIR}/lib${LIB}.a

include ${PMONDIR}/tools/scripts/pmon.lib.gmk

${OBJDIR}/lib${LIB}.a: ${OBJS}
	@echo building standard ${LIB} library
	@rm -f $@
	@${AR} cq $@ ${OBJS}
	${RANLIB} $@
# DO NOT DELETE

adler32.o: zlib.h zconf.h
crc32.o: zlib.h zconf.h
infblock.o: zutil.h zlib.h zconf.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/string.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
infblock.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/errno.h
infblock.o: infblock.h inftrees.h infcodes.h infutil.h
infcodes.o: zutil.h zlib.h zconf.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/string.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
infcodes.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/errno.h
infcodes.o: inftrees.h infblock.h infcodes.h infutil.h inffast.h
inffast.o: zutil.h zlib.h zconf.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/string.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
inffast.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/errno.h inftrees.h
inffast.o: infblock.h infcodes.h infutil.h inffast.h
inflate.o: zutil.h zlib.h zconf.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/string.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
inflate.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/errno.h infblock.h
inftrees.o: zutil.h zlib.h zconf.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/string.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
inftrees.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/errno.h
inftrees.o: inftrees.h inffixed.h
infutil.o: zutil.h zlib.h zconf.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/string.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
infutil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/errno.h infblock.h
infutil.o: inftrees.h infcodes.h infutil.h
