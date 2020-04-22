FLAGS = -pedantic-errors -std=c++11
Chap1.o: Chap1.cpp Chap1.h Battle.h PrintChapLines.h Choice.h
	g++ $(FLAGS) -c $<
Chap1: Battle.o PrintChapLines.o Choice.o Chap1.o
	g++ $(FLAGS) $^ -o $@
Battle.o: Battle.cpp Battle.h
	g++ $(FLAGS) -c $<
Fight.o: Fight.cpp Fight.h
	g++ $(FLAGS) -c $<
PrintChapLines.o: PrintChapLines.cpp PrintChapLines.h
	g++ $(FLAGS) -c $<
load_game.o: load_game.cpp load_game.h
	g++ $(FLAGS) -c $<
Choice.o: Choice.cpp Choice.h
	g++ $(FLAGS) -c $<
