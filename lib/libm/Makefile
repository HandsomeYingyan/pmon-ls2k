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

LIB=m
NOPIC=

MACHINE=	${XMACHINE}
MACHINE_ARCH=	${XMACHINE_ARCH}
CURDIR=$(shell pwd)

M=	${CURDIR}/arch/${MACHINE_ARCH}

CPPFLAGS=	-I$M ${MLIBCPPFLAGS} -U_KERNEL

VPATH+=	${M} ${MLIBDIR}
 
include ${M}/Makefile.inc

# Files to clean up
CLEANFILES+= ${OBJDIR}/lib${LIB}.a

include ${PMONDIR}/tools/scripts/pmon.lib.gmk

${OBJDIR}/lib${LIB}.a: ${OBJS}
	@echo building standard ${LIB} library
	@rm -f $@
	@${AR} rcs $@ ${OBJS}
#	${RANLIB} $@

# DO NOT DELETE

gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/zlib.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stdlib.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
gunzip.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/ubi_uboot.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/div64.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/ubifs_pmon.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/stddef.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/linux/types.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/crc32.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/list.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/poison.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/rbtree.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/string.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/ubi.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/ubi-user.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/mtd/mtd.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/linux/types.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/mtd/compatmac.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/module.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/param.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/simplelock.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/syslimits.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/signal.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/signal.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cpu.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/psl.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/siginfo.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/time.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/time.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/param.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/limits.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/syslog.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/pio.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/intr.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/dev/pci/pcivar.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/bus.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/dev/pci/pcireg.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/pci/pci_machdep.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/target/pmon_target.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/target/bonito.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/nand.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/pmon.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/pmon_arch.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/progress.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/onenand_uboot.h
rbtree.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/mtd/errno.h
ctype.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/ctype.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/ctype.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
cfun.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/lzo.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/byteorder.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/unaligned.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/unaligned/le_byteshift.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/unaligned/be_byteshift.h
lzo1x_decompress.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/linux/unaligned/generic.h
lzo1x_decompress.o: lzodefs.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
div64.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_acos.o: math_private.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_asin.o: math_private.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_atan.o: math_private.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_atan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_atan2.o: math_private.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_ceil.o: math_private.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_ceil.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_cos.o: math_private.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_cosh.o: math_private.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_exp.o: math_private.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_expm1.o: math_private.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_expm1.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_fabs.o: math_private.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_fabs.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_floor.o: math_private.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_floor.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_fmod.o: math_private.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_frexp.o: math_private.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_frexp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_log.o: math_private.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_log10.o: math_private.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_modf.o: math_private.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_modf.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_pow.o: math_private.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_sin.o: math_private.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_sinh.o: math_private.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
w_sqrt.o: math_private.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
w_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_tan.o: math_private.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_tanh.o: math_private.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_tanh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_scalbn.o: math_private.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_scalbn.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
s_copysign.o: math_private.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
s_copysign.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_acos.o: math_private.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_acos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_asin.o: math_private.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_asin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_atan2.o: math_private.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_atan2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
k_cos.o: math_private.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
k_cos.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_cosh.o: math_private.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_cosh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_exp.o: math_private.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_exp.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_fmod.o: math_private.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_fmod.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_log.o: math_private.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_log.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_log10.o: math_private.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_log10.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_pow.o: math_private.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_pow.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
k_sin.o: math_private.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
k_sin.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_sinh.o: math_private.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_sinh.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_sqrt.o: math_private.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_sqrt.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
k_tan.o: math_private.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
k_tan.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
e_rem_pio2.o: math_private.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
e_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/include/math.h
k_rem_pio2.o: math_private.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/types.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/types.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/cdefs.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/cdefs.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/ansi.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/Targets/LS2K/compile/ls2k/machine/endian.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/sys/endian.h
k_rem_pio2.o: /sda4/2k_pai/new_pmon/ok/pmon-loongson3/sys/arch/mips/include/endian.h
