name := sourcery
build := stable
flags += -I../../ -DNALL_HEADER_ONLY

nall.path := ../../nall
include $(nall.path)/GNUmakefile

objects := $(object.path)/sourcery.o

$(object.path)/sourcery.o: sourcery.cpp

$(objects): | $(object.path)

all: $(objects) | $(output.path)
	$(info Linking $(output.path)/$(name)$(extension) ...)
	+@$(compiler) -o $(output.path)/$(name)$(extension) $(objects) $(options)

verbose: nall.verbose all;

clean:
	$(call delete,$(object.path)/*)
	$(call delete,$(output.path)/*)

install: all
ifneq ($(filter $(platform),linux bsd),)
	cp $(output.path)/$(name) $(prefix)/bin/$(name)
endif

uninstall:
ifneq ($(filter $(platform),linux bsd),)
	rm -f $(prefix)/bin/$(name)
endif
