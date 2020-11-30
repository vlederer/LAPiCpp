#--------------------------------------------------------------------------
# The compiler: g++ for C++ program:
export COMP = g++
#--------------------------------------------------------------------------
#--------------------------------------------------------------------------
# Version of g++:
export VER = -std=c++17
#--------------------------------------------------------------------------
#**************************************************************************
# Compiler flags:
#**************************************************************************
# -g    -> adds debugging informations to the executable file
# -pg   -> add valdrind
# -Wall -> turn on most compiler warnings
#**************************************************************************
#--------------------------------------------------------------------------
export DEBUG = no
# Options en mode optimis� - La variable NDEBUG est d�finie:
OPTIM_FLAG = -O3 -DNDEBUG -Wall
# Options en mode debig - La variable NDEBUG n'est pas d�finie:
DEBUG_FLAG = -pg -g -Og -Wall
ifeq ($(DEBUG), yes)
	OPTION_FLAG = $(DEBUG_FLAG)
else
	OPTION_FLAG = $(OPTIM_FLAG)
endif
#--------------------------------------------------------------------------
# On choisit comment on compile:
export CXX_FLAGS = $(VER) $(OPTION_FLAG)
#--------------------------------------------------------------------------
# unittests Directory, Le nom de l'ex�cutable et le full path:
# Probablement revoir le nom RUN_unittests??!!
export unittests_DIR = unittests
export EXEC_unittests = unittests.exe
export RUN_unittests = $(unittests_DIR)/$(EXEC_unittests)
# src Directory:
export src_DIR = src
# include Directory:
export include_DIR = include

all:	$(RUN_unittests) clean
.PHONY: all
$(RUN_unittests):
	@(cd $(unittests_DIR) && $(MAKE) all)
all3:
	@(cd $(unittests_DIR) && $(MAKE) gen3 && $(MAKE) run3)
clean:
	@echo $(MAKE) clean
	@(cd $(unittests_DIR) && $(MAKE) clean)


#ifeq ($(DEBUG), yes)
#	RUN_unittests = valgrind --leak-check=yes ./$(EXEC_unittests)
#else
#	RUN_unittests = ./$(EXEC_unittests)
#endif
