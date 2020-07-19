all: myexe
CC=gcc
CFLAGS= -std=c18 -O0 -Wall -g
INCLUDES=.
LIBS= -lc
OBJ= myadd.o mysub.o mydiv.o mymul.o pog1.o ./d1/mymod.o
INSTDIR= /home/adesh/sys_pro_arif/sysprogram/L4_UNIX_MAKE/ex5/init/myexe

myexe: $(OBJ)
	$(CC)  $(OBJ) -o myexe $(LIBS)

myadd.o: myadd.c
	$(CC) -c myadd.c $(CFLAGS)

mysub.o: mysub.c
	$(CC) -c mysub.c $(CFLAGS)

mydiv.o: mydiv.c
	$(CC) -c mydiv.c $(CFLAGS)

mymul.o: mymul.c
	$(CC) -c mymul.c $(CFLAGS)

pog1.o: pog1.c mymath.h ./d1/mymod.h
	gcc -c -I. -I./d1  pog1.c
incluude: ./d1/makefile

clean: 
	rm -f *.o
	rm -f ./d1/*.o

install: myexe
	@cp myexe $(INSTDIR)
	@echo "myexe successfully installed"


uninstall:
	@rm -f $(INSTDIR)
	@echo "myexe successfully un-installed"
