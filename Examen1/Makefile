CXX = g++
CXXFLAGS = -std=c++11

.PHONY: all clean

all: build/examen run

build/examen: src/main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: build/examen
	./$<

clean:
	rm -f build/examen