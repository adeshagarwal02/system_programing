myexe: myadd.o mysub.o mydiv.o mymul.o pog1.o
	gcc  myadd.o mysub.o mydiv.o mymul.o pog1.o -o myexe


myadd.o: myadd.c
	gcc -c myadd.c

mysub.o: mysub.c
	gcc -c mysub.c

mydiv.o: mydiv.c
	gcc -c mydiv.c

mymul.o: mymul.c
	gcc -c mymul.c

pog1.o: pog1.c mymath.h
	gcc -c -I. pog1.c
