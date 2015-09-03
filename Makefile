CC=gcc
CFLAGS=-I./libs -std=c99
DEPS = libs/constants.h libs/program.h libs/utilities.h libs/crypt.h
OBJ = main.o libs/program.o libs/utilities.o libs/crypt.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o main $(OBJ) $(CFLAGS)
