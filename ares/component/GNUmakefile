ares.components := $(call unique,$(ares.components))

ares.objects += $(if $(findstring ay38910,$(ares.components)),ares-audio-ay38910)
ares.objects += $(if $(findstring msm5205,$(ares.components)),ares-audio-msm5205)
ares.objects += $(if $(findstring sn76489,$(ares.components)),ares-audio-sn76489)
ares.objects += $(if $(findstring t6w28,$(ares.components)),ares-audio-t6w28)
ares.objects += $(if $(findstring ym2149,$(ares.components)),ares-audio-ym2149)
ares.objects += $(if $(findstring ym2413,$(ares.components)),ares-audio-ym2413)
ares.objects += $(if $(findstring ym2610,$(ares.components)),ares-audio-ym2610)
ares.objects += $(if $(findstring ym2612,$(ares.components)),ares-audio-ym2612)

ares.objects += $(if $(findstring m24c,$(ares.components)),ares-eeprom-m24c)
ares.objects += $(if $(findstring m93lcx6,$(ares.components)),ares-eeprom-m93lcx6)

ares.objects += $(if $(findstring i8255,$(ares.components)),ares-io-i8255)

ares.objects += $(if $(findstring arm7tdmi,$(ares.components)),ares-processor-arm7tdmi)
ares.objects += $(if $(findstring gsu,$(ares.components)),ares-processor-gsu)
ares.objects += $(if $(findstring hg51b,$(ares.components)),ares-processor-hg51b)
ares.objects += $(if $(findstring huc6280,$(ares.components)),ares-processor-huc6280)
ares.objects += $(if $(findstring i8080,$(ares.components)),ares-processor-i8080)
ares.objects += $(if $(findstring m68hc05,$(ares.components)),ares-processor-m68hc05)
ares.objects += $(if $(findstring m68000,$(ares.components)),ares-processor-m68000)
ares.objects += $(if $(findstring mos6502,$(ares.components)),ares-processor-mos6502)
ares.objects += $(if $(findstring sh2,$(ares.components)),ares-processor-sh2)
ares.objects += $(if $(findstring sm5k,$(ares.components)),ares-processor-sm5k)
ares.objects += $(if $(findstring sm83,$(ares.components)),ares-processor-sm83)
ares.objects += $(if $(findstring spc700,$(ares.components)),ares-processor-spc700)
ares.objects += $(if $(findstring ssp1601,$(ares.components)),ares-processor-ssp1601)
ares.objects += $(if $(findstring tlcs900h,$(ares.components)),ares-processor-tlcs900h)
ares.objects += $(if $(findstring upd96050,$(ares.components)),ares-processor-upd96050)
ares.objects += $(if $(findstring v30mz,$(ares.components)),ares-processor-v30mz)
ares.objects += $(if $(findstring wdc65816,$(ares.components)),ares-processor-wdc65816)
ares.objects += $(if $(findstring z80,$(ares.components)),ares-processor-z80)

ares.objects += $(if $(findstring sst39sf0x0,$(ares.components)),ares-flash-sst39sf0x0)

ares.objects += $(if $(findstring tms9918,$(ares.components)),ares-video-tms9918)
ares.objects += $(if $(findstring v9938,$(ares.components)),ares-video-v9938)

$(object.path)/ares-audio-ay38910.o:      $(ares.path)/component/audio/ay38910/ay38910.cpp
$(object.path)/ares-audio-msm5205.o:      $(ares.path)/component/audio/msm5205/msm5205.cpp
$(object.path)/ares-audio-sn76489.o:      $(ares.path)/component/audio/sn76489/sn76489.cpp
$(object.path)/ares-audio-t6w28.o:        $(ares.path)/component/audio/t6w28/t6w28.cpp
$(object.path)/ares-audio-ym2149.o:       $(ares.path)/component/audio/ym2149/ym2149.cpp
$(object.path)/ares-audio-ym2413.o:       $(ares.path)/component/audio/ym2413/ym2413.cpp
$(object.path)/ares-audio-ym2612.o:       $(ares.path)/component/audio/ym2612/ym2612.cpp

$(object.path)/ares-eeprom-m24c.o:        $(ares.path)/component/eeprom/m24c/m24c.cpp
$(object.path)/ares-eeprom-m93lcx6.o:     $(ares.path)/component/eeprom/m93lcx6/m93lcx6.cpp

$(object.path)/ares-io-i8255.o:    		  $(ares.path)/component/io/i8255/i8255.cpp

$(object.path)/ares-processor-arm7tdmi.o: $(ares.path)/component/processor/arm7tdmi/arm7tdmi.cpp
$(object.path)/ares-processor-gsu.o:      $(ares.path)/component/processor/gsu/gsu.cpp
$(object.path)/ares-processor-hg51b.o:    $(ares.path)/component/processor/hg51b/hg51b.cpp
$(object.path)/ares-processor-huc6280.o:  $(ares.path)/component/processor/huc6280/huc6280.cpp
$(object.path)/ares-processor-i8080.o:    $(ares.path)/component/processor/i8080/i8080.cpp
$(object.path)/ares-processor-m68hc05.o:  $(ares.path)/component/processor/m68hc05/m68hc05.cpp
$(object.path)/ares-processor-m68000.o:   $(ares.path)/component/processor/m68000/m68000.cpp
$(object.path)/ares-processor-mos6502.o:  $(ares.path)/component/processor/mos6502/mos6502.cpp
$(object.path)/ares-processor-sh2.o:      $(ares.path)/component/processor/sh2/sh2.cpp
$(object.path)/ares-processor-sm5k.o:     $(ares.path)/component/processor/sm5k/sm5k.cpp
$(object.path)/ares-processor-sm83.o:     $(ares.path)/component/processor/sm83/sm83.cpp
$(object.path)/ares-processor-spc700.o:   $(ares.path)/component/processor/spc700/spc700.cpp
$(object.path)/ares-processor-ssp1601.o:  $(ares.path)/component/processor/ssp1601/ssp1601.cpp
$(object.path)/ares-processor-tlcs900h.o: $(ares.path)/component/processor/tlcs900h/tlcs900h.cpp
$(object.path)/ares-processor-upd96050.o: $(ares.path)/component/processor/upd96050/upd96050.cpp
$(object.path)/ares-processor-v30mz.o:    $(ares.path)/component/processor/v30mz/v30mz.cpp
$(object.path)/ares-processor-wdc65816.o: $(ares.path)/component/processor/wdc65816/wdc65816.cpp
$(object.path)/ares-processor-z80.o:      $(ares.path)/component/processor/z80/z80.cpp

$(object.path)/ares-flash-sst39sf0x0.o:   $(ares.path)/component/flash/sst39sf0x0/sst39sf0x0.cpp

$(object.path)/ares-video-tms9918.o:      $(ares.path)/component/video/tms9918/tms9918.cpp
$(object.path)/ares-video-v9938.o:        $(ares.path)/component/video/v9938/v9938.cpp
