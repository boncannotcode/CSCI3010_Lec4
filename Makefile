CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: test main

test: test.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

clean:
	rm test main