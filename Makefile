CC=gcc
OBJ=main.o

hexdecoct: main.o
	$(CC) -o hexdecoct main.c

clean:
	rm main.o
