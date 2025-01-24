# Linux Shell Project

## Overview

This project is a simple Linux shell implemented in C as part of the ALX SE program. The shell supports basic Unix commands, file handling, process management, and more. It serves as a foundational project to understand the inner workings of a command-line interface.

## Features

- **Command Execution**: Supports execution of standard Linux commands like ls, pwd, cat, etc.

- **Piping and Redirection**: Includes support for input/output redirection and piping between commands.

- **Background Processes**: Allows running processes in the background using &.

- **Error Handling**: Provides informative error messages for invalid inputs and commands.

- **Efficient Memory Usage**: Eliminates any potential memory leaks after executing a command.

## Prerequisites

- **Compiler**: GCC (GNU Compiler Collection)

## Installation

Clone the repository:
```bash
git clone https://github.com/AhmedOT22/simple_shell.git
```

Compile the shell:

```bash
gcc -o hsh main.c
```

## Usage

Run the shell:

```bash
./hsh
```

Enter commands as you would in a standard Linux terminal.

To exit the shell, type exit or press Ctrl+D.

## Example Commands

Standard Command:

```bash
ls -la
```

```bash
pwd
```

Piping:

```bash
ls | grep "filename"
```

Input Redirection:

```bash
wc < input.txt
```

## Contributors: 

Ahmed Ouazzani

Nouamane Aitsfia

