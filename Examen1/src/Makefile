CXX = g++
CXXFLAGS = -std=c++11

TARGET = programa
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean

all: build run clean

build: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)