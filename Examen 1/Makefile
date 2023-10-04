CXX = g++
CXXFLAGS = -std=c++11

.PHONY: all clean

all: build/examen1 run

build/examen1: src/main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: build/examen1
	./$<

clean:
	rm -f build/examen1