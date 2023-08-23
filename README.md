# Simple Shell - hsh

## Introduction

The Simple Shell, named `hsh`, is a sh-compatible command interpreter created by Abdeljalil El Mouakkit and Yousri Rachid. It allows users to execute various Unix-like commands either interactively or from a script file.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Features](#features)
- [Command Execution](#command-execution)
- [Environment](#environment)
- [Exit Status](#exit-status)
- [Built-in Commands](#built-in-commands)
- [Authors](#authors)

## Usage

To run the simple shell, you can use the following command:

```sh
$ ./hsh
```

You will then be presented with a prompt where you can enter commands to be executed.

## Features

- Executes Unix-like commands
- Supports basic shell syntax
- Supports built-in commands
- Handles environment variables
- Provides exit status for commands

## Command Execution

The `hsh` shell processes commands by first splitting them into words, and then executing the command if it's recognized. If the command is not recognized, the shell searches for it in the list of built-in commands or tries to find an executable file in the directories listed in the `PATH` environment variable.

## Environment

The `hsh` shell inherits the environment from the parent process (the shell from which it was executed). It supports environment variables in the format `name=value`. You can use built-in commands to manipulate the environment.

## Exit Status

The exit status of a command executed by `hsh` is the value returned by the `waitpid` system call. An exit status of 0 indicates success, while a non-zero exit status indicates failure. If a command is not found, the exit status is 127.

## Built-in Commands

The following built-in commands are supported by the `hsh` shell:

- `env`: Print the current environment
- `setenv [Variable] [Value]`: Create or modify an environment variable
- `unsetenv [Variable]`: Remove an environment variable
- `exit [Status]`: Exit the shell
- `cd [Directory]`: Change the current directory
- `help`: Print help message for built-in commands

## Authors

The Simple Shell (`hsh`) was developed by Abdeljalil El Mouakkit and Yousri Rachid.

## References

This shell takes inspiration from the basic functionality of the `sh` shell. The man page for `hsh` is based on the `bash(1)` man page.

### Contributors :busts_in_silhouette:

- [Abdeljalil37](https://github.com/Abdeljalil37)
- [Shixyman](https://github.com/shixyman)
