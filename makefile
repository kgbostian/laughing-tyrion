all: compile run

compile:
	gcc -Wall -o cube main.c designs.h toolbox.h -lwiringPi

run:
	./cube


