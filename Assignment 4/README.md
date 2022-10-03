# Femto Unix Utilities

1. Copy File
  - In This program I have used open, write, close system call in order to simulate the copy function in linux.
  - I have used the main function arguments (argc , argv) in order to get the command line arguments and manipulate them to immitate the copy function.
  - I have added a condition that states if the src file needed for copying is not presented then it should be return an error message to the user that there is no such file found.
  
 2. Echo File
  - In this Program I have used only used the main function argument (argv) in order to get the command line argument, in our case words.
  - Then used a for loop followed by a print statement to iterate through the words entered by the user and print them out to the user.

3. Move File
  - This file implementation is the same as the Copy File except for one slightly addition that I have used the Remove system call in order to remove the source file used for copying the data and have only the new file.

4. PWD File
  - In this program I have used only getcwd function to return the current working directory for the user.
  - I have included a condition to check that the returned value from the function is greater than zero (or not null), if it is true then it will automatically print the directory, otherwise it will print an error message for the user.
