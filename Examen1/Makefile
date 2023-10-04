CXX = g++
CXXFLAGS = -std=c++11

.PHONY: all clean

all: build/programaExamen run

build/programaExamen: src/main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: build/programaExamen
	./$<

clean:
	rm -f build/programaExamen