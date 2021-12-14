SRC =	serial.cpp			\
	omp_parallel_101.cpp		\
	omp_parallel_tidy.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -fopenmp -std=c++11

EXE = $(SRC:.cpp=.x)

# eliminate default suffixes
.SUFFIXES:
SUFFIXES =

# just consider our own suffixes
.SUFFIXES: .cpp .x

all: $(EXE)

.PHONY: all

%.x: %.cpp 
	$(CXX) $< -o $@ $(CXXFLAGS)

clean:
	rm -f $(EXE) *~ *#* *.x

.PHONY: clean
