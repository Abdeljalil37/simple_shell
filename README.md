# **hsh** - Simple Shell :shell:

**hsh** is a simple UNIX command interpreter written as part of the low-level programming and algorithm track at ALX.

## Description :speech_balloon:

**hsh** is a basic UNIX command interpreter that reads and executes commands from either a file or standard input.

### Invocation :rocket:

To use **hsh**, compile the `.c` files and run the resulting executable:

```sh
gcc *.c -o hsh
./hsh
```

**hsh** can be invoked both interactively and non-interactively.

### Features :bulb:

- Command Execution: Run various shell commands.
- Process Management: Launch and manage processes.
- File System Navigation: Use `cd` command to navigate directories.
- Redirection: Implement input and output redirection.
- Piping: Chain commands using pipes (`|`).

### Getting Started

1. Clone the repository: `git clone https://github.com/Abdeljalil37/simple_shell.git`
2. Navigate to the project directory: `cd simple_shell`
3. Compile the code: `gcc *.c -o hsh`
4. Run the shell: `./hsh`

### Usage :computer:

- Run a command: `ls -l`
- Navigate to a directory: `cd /path/to/directory`
- Redirect output to a file: `ls > output.txt`
- Chain commands using pipes: `ls -l | grep .txt`

### Built-in Commands :wrench:

- `cd [DIRECTORY]`: Change the current directory.
- `alias [NAME[='VALUE'] ...]`: Define or display aliases.
- `exit [STATUS]`: Exit the shell with a specified status.
- `env`: Display the current environment.
- `setenv [VARIABLE] [VALUE]`: Initialize or modify an environment variable.
- `unsetenv [VARIABLE]`: Remove an environment variable.

### Environment :deciduous_tree:

- `HOME`: Home directory of the user.
- `PWD`: Current working directory.
- `OLDPWD`: Previous working directory.
- `PATH`: Colon-separated list of directories for command lookup.

### Exit Status :wave:

- `0`: Success.
- `1` or `2`: Incorrect usage of built-in commands.
- `127`: Command not found.
- Other non-zero values: Command-specific error.

### Contributors :busts_in_silhouette:

- [Abdeljalil37](https://github.com/Abdeljalil37)
- [Shixyman](https://github.com/shixyman)
