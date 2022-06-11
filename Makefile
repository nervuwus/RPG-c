main:
	gcc -Wall -o Rpg src/main.c

clean:
	rm -rf Rpg

all: main
