CC = gcc
FLAGS = -Wall -g
FONTES = soldier.c main.c
OBJETOS = $(FONTES: .c = .o)

objetos : $(FONTES)
	$(CC) -c $(FONTES)

all: $(OBJETOS)
	$(CC) $(FLAGS) $(OBJETOS) -o main

run: all
	./main

clear:
	rm *.o main
