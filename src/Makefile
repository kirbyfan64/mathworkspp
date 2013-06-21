# -*- mode: Makefile; -*-
# -----------------------------------------
# project mathworkspp


export PATH := c:/tools/svn/bin;$(PATH)

_WX = c:/cfiles/editors/cb/wxWidgets-2.8.9
_WX.LIB = $(_WX)/lib
_WX.INCLUDE = $(_WX)/include

_CB = c:/cfiles/editors/cb/src
_CB.INCLUDE = $(_CB)/include
_CB.LIB = $(_CB)/devel

WX_SUFFIX = u



CFLAGS_C = $(CFLAGS)

SHELL = cmd
CREATE_DEF = -Wl,--output-def,$*.def
CREATE_LIB = -Wl,--out-implib,$(dir $@)lib$(notdir $(basename $@)).a
MKDIR = if not exist $(subst /,\,$1) mkdir $(subst /,\,$1)

# -----------------------------------------

# MAKE_DEP = -MMD -MT $@ -MF $(@:.o=.d)

CFLAGS = -std=gnu++11
INCLUDES = -I../include/ 
LDFLAGS =  -s -Wl,--allow-multiple-definition
RCFLAGS = 
LDLIBS = $(T_LDLIBS) ..\libmathworkspp.a  -lstdc++

LINK_exe = gcc -o $@ $^ $(LDFLAGS) $(LDLIBS) -mwindows
LINK_con = gcc -o $@ $^ $(LDFLAGS) $(LDLIBS)
LINK_dll = gcc -o $@ $^ $(LDFLAGS) $(LDLIBS) -mwindows -shared
LINK_lib = rm -f $@ && ar rcs $@ $^
COMPILE_c = gcc $(CFLAGS_C) -o $@ -c $< $(MAKEDEP) $(INCLUDES)
COMPILE_cpp = g++ $(CFLAGS) -o $@ -c $< $(MAKEDEP) $(INCLUDES)
COMPILE_rc = windres $(RCFLAGS) -J rc -O coff -i $< -o $@ -I$(dir $<)

%.o : %.c ; $(COMPILE_c)
%.o : %.cpp ; $(COMPILE_cpp)
%.o : %.cxx ; $(COMPILE_cpp)
%.o : %.rc ; $(COMPILE_rc)
.SUFFIXES: .o .d .c .cpp .cxx .rc

all: all.before all.targets all.after

all.before :
	-
all.after : $(FIRST_TARGET)
	
all.targets : Debug_target Release_target 

clean :
	rm -fv $(clean.OBJ)
	rm -fv $(DEP_FILES)

.PHONY: all clean distclean

# -----------------------------------------
# Debug_target

Debug_target.BIN = mathworkspp.a
Debug_target.OBJ = shapes.o 
DEP_FILES += shapes.d 
clean.OBJ += $(Debug_target.BIN) $(Debug_target.OBJ)

Debug_target : Debug_target.before $(Debug_target.BIN) Debug_target.after_always
Debug_target : CFLAGS += -Wall -g  -Os
Debug_target : INCLUDES += 
Debug_target : RCFLAGS += 
Debug_target : LDFLAGS +=   $(CREATE_DEF)
Debug_target : T_LDLIBS = 
ifdef LMAKE
Debug_target : CFLAGS -= -O1 -O2 -g -pipe
endif

Debug_target.before :
	
	
Debug_target.after_always : $(Debug_target.BIN)
	
$(Debug_target.BIN) : $(Debug_target.OBJ)
	$(call MKDIR,$(dir $@))
	$(LINK_lib)
	

# -----------------------------------------
# Release_target

Release_target.BIN = mathworkspp.dll
Release_target.OBJ = shapes.o 
DEP_FILES += shapes.d 
clean.OBJ += $(Release_target.BIN) $(Release_target.OBJ)

Release_target : Release_target.before $(Release_target.BIN) Release_target.after_always
Release_target : CFLAGS += -Wall -O2  -Os
Release_target : INCLUDES += 
Release_target : RCFLAGS += 
Release_target : LDFLAGS += -s   $(CREATE_DEF)
Release_target : T_LDLIBS = 
ifdef LMAKE
Release_target : CFLAGS -= -O1 -O2 -g -pipe
endif

Release_target.before :
	
	
Release_target.after_always : $(Release_target.BIN)
	
$(Release_target.BIN) : $(Release_target.OBJ)
	$(call MKDIR,$(dir $@))
	$(LINK_dll)
	

# -----------------------------------------
ifdef MAKE_DEP
-include $(DEP_FILES)
endif
