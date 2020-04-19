C++_FNS = GeneralList.hpp
C++_MAIN = main.cpp

all:
	g++ $(C++_FNS) $(C++_MAIN) -o test

run:
	g++ $(C++_FNS) $(C++_MAIN) -o test
	./test

clean:
	rm test
