CFLAGS = -std=c11 -Wall
CC = gcc

algorithms: bubblesort.c
	$(CC) $(CFLAGS) bubblesort.c -o bubblesort
