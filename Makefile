CXX = g++
CXXFLAGS = -O2 -std=c++17 -Wall

code: main.cpp
	$(CXX) $(CXXFLAGS) -o code main.cpp

clean:
	rm -f code *.o
