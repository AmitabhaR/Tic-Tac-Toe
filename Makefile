#   --------------  Tiny Tictactoe Build System --------------

COMPILER = gcc
FILES = TicTacToe.c GameProcessor.c Other.c
OUT = TicTacToe.exe

all: $(FILES)
	$(COMPILER) $(FILES) -o $(OUT)
 