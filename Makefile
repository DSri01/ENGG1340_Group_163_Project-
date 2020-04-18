FLAGS = -pedantic-errors -std=c++11
Battle.o: Battle.cpp Battle.h
	g++ $(FLAGS) -c $<
