# Monty Interpreter

This is a group project for the C - Stacks, Queues - LIFO, FIFO module in C programming. The project focuses on implementing an interpreter for Monty ByteCodes files.

## Topics
- LIFO and FIFO principles
- Stack and queue data structures and their use cases
- Common implementations of stacks and queues
- Proper usage of global variables
<br><br>

## Project Description
The project aims to create an interpreter for Monty ByteCodes files. Monty 0.98 is a scripting language that uses a unique stack with specific instructions to manipulate it.

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=c89
- All files should end with a new line
- Code should use the Betty style and pass the betty-style.pl and betty-doc.pl checks
- Maximum of one global variable is allowed
- No more than 5 functions per file
- C standard library is allowed
- Prototypes of all functions should be included in the header file `monty.h`
- Header files should be include guarded

## Project Files
- [x] [monty.h](./monty.h) - Header file containing function prototypes and necessary structure definitions.
- [x] [main.c](./main.c) - Main file for the Monty interpreter.
- [x] [queue_operations.c ](./queue_operations.c ) - File containing the implementation of queue-related operations.
- [x] [pall.c](./pall.c) - File containing the implementation of pall opcode.
- [x] [push.c](./pall.c) - File containing the implementation of push opcode.
- [x] [pop.c](pop.c) - File containing the implementation of pop opcode.
- [x] [arithmetic_operations1.c](./arithmetic_operations1.c) - File containing the implementation of sub and add opcodes
- [x] [arithmetic_operations1.c](./arithmetic_operations1.c) - File containing the implementation of div and mul opcodes
- [x] [exec.c](./exec.c) - File executing the opcode
- [x] [rotate.c](./rotate.c) - File contains code for rotating a stack in both directions (to the top and bottom)
- [x] [stack_free.c](./stack_free.c)The file contains code for freeing a doubly linked list (stack)
- [x] [addnode.c](./addnode.c) - file contains code for adding a new node to the head of a stack
- [x] [stack_operations.c](./stack_operations.c) - File containing the implementation of swap, nop and mod opcodes

## Compilation & Output
The code should be compiled using the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
Any output should be printed on stdout, and error messages should be printed on stderr.

## Usage
To run the Monty interpreter, use the following command:

```bash
$ ./monty <file>
```
Replace `<file>` with the path to the file containing Monty byte code.
<br><br>

## Team Information
- Caleb Nyachwaya

---
