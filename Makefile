CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
LDFLAGS = -lgtest -lgtest_main -pthread

# Target to build the test executable
all: bagtest

bagtest: node.cpp bag.cpp main.cpp 
	$(CXX) $(CXXFLAGS) -o bagtest node.cpp bag.cpp main.cpp $(LDFLAGS)

# Target to run tests
test: bagtest
	 ./bagtest

# Clean target to remove build artifacts
clean:
	rm -f bagtest