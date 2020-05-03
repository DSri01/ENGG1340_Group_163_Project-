FLAGS = -pedantic-errors -std=c++11
THE_CONQUEST.o: THE_CONQUEST.cpp Battle.h PrintChapLines.h Choice.h Chap1.h Chap2.h Chap3.h Fight.h load_game.h save_game.h Fortune_cookie.h
	g++ $(FLAGS) -c $<
Fortune_cookie.o: Fortune_cookie.cpp Fortune_cookie.h
	g++ $(FLAGS) -c $<
Chap1.o: Chap1.cpp Chap1.h Battle.h PrintChapLines.h Choice.h
	g++ $(FLAGS) -c $<
Chap2.o: Chap2.cpp Battle.h PrintChapLines.h Choice.h Fight.h
	g++ $(FLAGS) -c $<
Chap3.o: Chap3.cpp Battle.h PrintChapLines.h Choice.h Fight.h
	g++ $(FLAGS) -c $<
Chap1: Battle.o PrintChapLines.o Choice.o Chap1.o
	g++ $(FLAGS) $^ -o $@
Chap2: Battle.o PrintChapLines.o Choice.o Fight.o Chap2.o
	g++ $(FLAGS) $^ -o $@
Chap3: Battle.o PrintChapLines.o Choice.o Fight.o Chap3.o
	g++ $(FLAGS) $^ -o $@
Game: Chap1.o Chap2.o Chap3.o Fortune_cookie.o load_game.o save_game.o Battle.o PrintChapLines.o Choice.o Fight.o THE_CONQUEST.o 
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
save_game.o: save_game.cpp save_game.h
	g++ $(FLAGS) -c $<
