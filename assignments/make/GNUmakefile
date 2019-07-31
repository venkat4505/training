.PHONY: clean
VPATH = source header out
CC = gcc
SOURCE = $(shell ls ./source/)
OBJECT = $(SOURCE:%.c=%.o)
HDR := ./header

#.RECIPEPREFIX = > 

%.o : %.c tree.h 
	$(CC) -c $^  -I $(HDR) 

	
exe : $(OBJECT) 
	$(CC) -o $@ $^
	mv *.o ./out

clean : 
	rm exe ./out/*.o


