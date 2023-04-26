<h1> The Simple Shell Collaboration Project</h1>
As part of an ALX collaboration project on Shell, we were assigned the task of developing a user-friendly shell that emulates the functionality of the Bash shell. We decided to name our shell "hsh"

<h3>The project has the following general requirements:</h3>

- All files in the shell program must be compiled with gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All files in the shell program must end with a new line.
- Create a mandatory README.md file at the project's root folder.
- The Betty style must be used, and each file must be checked with betty-style.pl and betty-doc.pl.
- The shell program should not have any form of memory leaks.
- Each file should contain no more than five functions.
- Include all header files in the guards.
- A README file describing the project must be included.

<h3>How the simple shell works</h3>
The project is a simple UNIX command language interpreter named "hsh".
It reads commands from either a file or standard input and executes them.
The shell program prints a prompt and awaits a user input.
The input command is checked with child process.
It checks for the built ins, PATH of the aliases, and the local executable of the program.
The child process is replaced by the command, which accepts arguments.
After this, the program repeats the process with printed prompt.
The program is set to accept new command.
To exit, the user can press Ctrl-D or enter "exit".
The shell program also works in non-interactive mode.

<h3>Simple shell files</h3>
- README.md <br/> Describes the simple shell project<br/>
- AUTHORS <br/> Contains lists of individuals who contributed to the repository.<br/>
- shell.h <br/> Contains header file and prototype functions for the shell project.<br/>
- input_prompt.c <br/> Reads user input using the getline system call and runs an infinite loop through the fork to maintain the prompt.<br/>
- simple_shell_man <br/> The man page for the shell program<br/>
- main.c <br/> Run the program in an infinite loop by calling the input prompt function.<br/>
- find_cmd.c <br/> Finds user input of the command file.<br/>
- shell_exc.c<br/> Runs the program command.<br/>
- strings.c <br/> Handles the shell string length, writing a string, searching a string in a list, compiling strings etc.<br/>
- characters.c <br/> Checks if input is special character then change user type to exit or env.<br/>

<h3>Shell Compilation</h3>
To compile the program, run "gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh"
in the repository.

<h3>Allowed functions and system calls</h3>
access (man 2 access) chdir (man 2 chdir) execve (man 2 execve) malloc (man 3 malloc)
open (man 2 open) opendir (man 3 opendir) perror (man 3 perror) read (man 2 read)
readdir (man 3 readdir) signal (man 2 signal) stat (__xstat) (man 2 stat) lstat (__lxstat) (man 2 lstat)
exit (man 3 exit) _exit (man 2 _exit) fflush (man 3 fflush) fork (man 2 fork) free (man 3 free) getcwd
(man 3 getcwd) getline (man 3 getline) getpid (man 2 getpid) isatty (man 3 isatty) kill (man 2 kill)
fstat (__fxstat) (man 2 fstat) close (man 2 close) closedir (man 3 closedir) strtok (man 3 strtok)
wait (man 2 wait) waitpid (man 2 waitpid) wait3 (man 2 wait3) wait4 (man 2 wait4) write (man 2 write)

<h3>The Shell Comment</h3>
In hsh, any words or characters that come after a "#" symbol on a line are ignored

<h3>Conclusion</h3>
In conclusion, throughout the project, we gained knowledge on several topics, including how a
shell operates and locates commands, creating, forking, and managing processes, executing one
program from another, managing dynamic memory allocation within a large program, collaborating
through pair programming and teamwork, and developing a test suite to verify the accuracy of
our code.

<h3>Authors:</h3>
Bismark Anim<<wherescobby@gmail.com>br>
Otas Okai <niiotasalokome@gmail.com>

