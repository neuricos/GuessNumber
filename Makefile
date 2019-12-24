CC=g++
FLAGS=-Wall -g -std=c++11

all: guess_game

guess_game: guess_game.cpp
	$(CC) $(FLAGS) -o $@ $<

clean:
	rm -rf guess_game *.o *.dSYM
