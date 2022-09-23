lib/lib_Mylib.so: rand.o fact.o fibb.o
	@echo "Creating library..."
	@gcc *.o -shared -o lib/lib_Mylib.so
	@gcc shell2.c -l_Mylib -o NewShell -I include -L lib
	@sudo cp lib/lib_Mylib.so /usr/lib 

rand.o: func/rand.c
	gcc -c func/rand.c -fpic

fact.o: func/fact.c
	gcc -c func/fact.c -fpic

fibb.o: func/fibb.c
	gcc -c func/fibb.c -fpic

clean:
	@rm -f *.o
