# MakeFiles

1. Updated_Shell
   - In this directory I have constructed a makefile which is responsible for monitoring any change that happens in the three main header files (rand.h, fact.h, fibb.h) and if there is any it should do two things:
          - print out "debugging" in order to give an idea of what is happening.
          - debug the main file and store the output in another file called NewShell in order to be executed.
          
          
2. Updated_Static
   - In this directory I have constructed a makefile which is responsible for three main things:
          - compile the three function files (rand.c , fact.c , fibb.c) into object files whenever there is a change happen to them.
          - gather the three object files and archive them as a static library in order to be used in our main program and echo that the library is being created. 
          - compile the main program into an executable file after creating the static library.


3. Updated_Dynamic
   - In this directory I have constructed a makefile which is responsible for three main things:
          - compile the three function files (rand.c , fact.c , fibb.c) into object files whenever there is a change happen to them.
          - gather the three object files and combine them in one dynamic library in order to be used in our main program and echo that the library is being created.
          - copy the resulted library into /usr/lib in order to be used when running the executable after compiling the main program
