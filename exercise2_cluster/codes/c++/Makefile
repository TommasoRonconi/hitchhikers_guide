NAMES =	serial			\
	omp_parallel_101	\
	omp_parallel_tidy

NAMES_MPI = mpi_parallel \
	    hybrid_parallel

CXX = g++
CXXFLAGS = -Wall -Wextra -fopenmp -std=c++11
MPICC = mpic++

EX = x
EXMPI = mpx
EXE = $(NAMES:=.x)
EXEMPI = $(NAMES_MPI:=.mpx)

# eliminate default suffixes
.SUFFIXES:
SUFFIXES =

# just consider our own suffixes
.SUFFIXES: .cpp .x

all: $(EXE) $(EXEMPI)

.PHONY: all

%.$(EX): %.cpp 
	$(CXX) $< -o $@ $(CXXFLAGS)

%.$(EXMPI): %.cpp
	$(MPICC) $< -o $@ $(CXXFLAGS)

clean:
	rm -f *~ *#* *.$(EX) *.$(EXMPI)

.PHONY: clean
