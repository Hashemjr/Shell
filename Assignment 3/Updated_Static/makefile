lib/lib_Mylib.a: rand.o fact.o fibb.o
	@echo "Creating library..."
	@ar cr lib/lib_Mylib.a rand.o fact.o fibb.o
	@gcc shell2.c -l_Mylib -o NewShell -I include -L lib

rand.o: func/rand.c
	gcc -c func/rand.c

fact.o: func/fact.c
	gcc -c func/fact.c 

fibb.o: func/fibb.c
	gcc -c func/fibb.c 

clean:
	@rm -f *.o
