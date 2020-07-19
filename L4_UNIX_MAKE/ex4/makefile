myexe: myadd.o mysub.o mydiv.o mymul.o pog1.o ./d1/mymod.o
	gcc  myadd.o mysub.o mydiv.o mymul.o pog1.o ./d1/mymod.o -o myexe


myadd.o: myadd.c
	gcc -c myadd.c

mysub.o: mysub.c
	gcc -c mysub.c

mydiv.o: mydiv.c
	gcc -c mydiv.c

mymul.o: mymul.c
	gcc -c mymul.c

pog1.o: pog1.c mymath.h ./d1/mymod.h
	gcc -c -I. -I./d1  pog1.c
incluude: ./d1/makefile

clean: 
	rm -f *.o
	rm -f ./d1/*.o

install: myexe
	@cp myexe /home/adesh/sys_pro_arif/sysprogram/L4_UNIX_MAKE/ex3/init/myexe
	@echo "myexe successfully installed"


uninstall:
	@rm -f /home/adesh/sys_pro_arif/sysprogram/L4_UNIX_MAKE/ex3/init/myexe
	@echo "myexe successfully un-installed"
