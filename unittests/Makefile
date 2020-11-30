SRC := $(shell find ../src/ -name '*.cpp')
MAIN := $(shell find ./ -name '*.cc')
HEADERS = $(shell find . -name '.h')
#OBJ= $(SRC:.cc=.o)

VALGRIND = valgrind --leak-check=yes --track-origins=yes #--tool=callgrind

N1 = ./$(EXEC_unittests)_Template
N2 = ./$(EXEC_unittests)_Resize
N3 = ./$(EXEC_unittests)_Fill
ifeq ($(DEBUG), yes)
	RUN1 = $(VALGRIND) $(N1)
	RUN2 = $(VALGRIND) $(N2)
	RUN3 = $(VALGRIND) $(N3)
else
	RUN1 = $(N1)
	RUN2 = $(N2)
	RUN3 = $(N3)
endif

all : gen1 run1 gen2 run2 gen3 run3
.PHONY: all
gen1:	TemplateTypeTest.cc $(SRC) #$(HEADERS)
	$(COMP) $(CXX_FLAGS) TemplateTypeTest.cc $(SRC) -o $(N1)
	@echo "DEBUG"=$(DEBUG)
	@echo "DEBUG"=$(N1)
run1:
	$(RUN1)
	@echo "DEBUG"=$(DEBUG)
	@echo "DEBUG"=$(RUN1)

gen2:	ResizeDENSEMATTest.cc $(SRC) #$(HEADERS)
	$(COMP) $(CXX_FLAGS) ResizeDENSEMATTest.cc $(SRC) -o $(N2)
	@echo "DEBUG"=$(DEBUG)
	@echo "DEBUG"=$(N2)
run2:
	$(RUN2)
	@echo "DEBUG"=$(DEBUG)
	@echo "DEBUG"=$(RUN2)

gen3:	FillDENSEMATTest.cc $(SRC) #$(HEADERS)
	$(COMP) $(CXX_FLAGS) FillDENSEMATTest.cc $(SRC) -o $(N3)
	@echo "DEBUG"=$(DEBUG)
	@echo "DEBUG"=$(N3)
run3:
	$(RUN3)
	@echo "DEBUG"=$(DEBUG)
	@echo "DEBUG"=$(RUN3)

clean:
	@rm -rf *.o *.out $(N1) $(N2) $(N3)
