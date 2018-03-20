# Makefirl for jewels in stones
#
# Ting Yan
# Spring 2018

CXX	 = g++
CXXFLAGS = -O --std=c++11

# executable targets
jew_in_stone.exe : main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

# utilities
clean :
	\rm -rf *.o *.exe *~
