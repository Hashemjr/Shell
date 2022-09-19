#Shell Updated

1. Functions
    - Contain the main three new programs that will be used in our shell: 
      - "rand.h" which is responsible for generating a random number every time it is called.
      - "fact.h" which is responsible for getting the factorial of the entered number by the user.
      - "fibb.h" which is responsible for getting the number of elements in fibonacci series according the number entered by the user.

2. Folder Shell
    - Contain the (shell2.c) which is the main program used in simulating the shell and including in it 3 header files (rand.h , fact.h , fibb.h) in order to generate the functions previously mentioned to enhance our shell in generating more complex operations.

3. Static_lib
    - This directory has one main function to compile the main program (shell2.c) using a static library:
        - include directory has one header file (all.h) which contain the three header functions of the new functions implemented and used in our Shell.
        - lib which contain the static library (lib_mylib.a) generated after compiling the three functions (rand.c , fact.c , fibb.c) without linking into a relocatable object file.
        - Last thing the three main functions and their relocatable object files and the main function (shell2.c).

4. Dynamic_lib
    - This directory has one main function to compile the main program (shell2.c) using a dynamic library:
        - include directory has one header file (all.h) which contain the three header functions of the new functions implemented and used in our Shell.
        -  lib which contain the dynamic library (lib_lib2.so) genereated after compiling the three functions (rand.c , fact.c , fibb.c) without linking into a relocatable object file and using the option of "-shared" in order to make it a shared library
        -  Last thing the three main functions and their relocatable object files and the main function (shell2.c).
    - In order for the (shell2.c) to be compiled and run the executable file we had two options:
        - First: Copy the the dynamic library to the include libraries on our Operating System (sudo cp lib_lib2.so /usr/lib)
        - Second: To the make the directory this library presented in as an environment variable to child processes (export LD_LIBRARY_PATH=: "the library directory").
