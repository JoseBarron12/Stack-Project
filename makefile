
CXXFLAGS += -std=c++11 -Wall -Wextra -Werror -pedantic -I.


all: main


main: main.cc rational.cc rational.h stack.h
	g++ $(CXXFLAGS) -o main main.cc rational.cc


clean:
	rm -f main

.PHONY: all clean

