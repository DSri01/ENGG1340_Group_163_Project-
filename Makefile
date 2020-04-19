FLAGS = -pedantic-errors -std=c++11
Battle.o: Battle.cpp Battle.h
	g++ $(FLAGS) -c $<
Fight.o: Fight.cpp Fight.h
	g++ $(FLAGS) -c $<
PrintChapLines.o: PrintChapLines.cpp PrintChapLines.h
	g++ $(FLAGS) -c $<
load_game.o: load_game.cpp load_game.h
	g++ $(FLAGS) -c $<
