# YARC - YARC's Another REPL Console
---
## What's a REPL console?
A REPL console (_Read Eval Print Loop_) is a type of console where you input a command and get an output, like PowerShell.

## YARC commands
YARC is under constant development, but here are the current commands:

* **print**: returns `ok` and outputs the first word of the message.
* **inapp**: opens an app. An app is a script containing YARC code which is executed when you use `inapp` pathtoapp. Returns `should ok` at the end of execution.
* **echo**: outputs the whole message. But without returning (no `<`).
* **return**: returns the arguments given.

If any unknown command is put, `wrong` will be returned.

## Input and Output
Standard input is the command you enter, represented in `>`. The output is the result (usually ok/wrong), shown as `<`. Other outputs, like `print` or `echo` don't have `<` as they use C++'s `std::cout`.

## YARC apps
YARC apps are a `.yrc` file that can be executed in the console. For example, an app could be:
```
echo Welcome to your first app
return exit app
```
the output would be something as:
```
Welcome to your first app 
< exit app 
< should ok
```

## Compiling
Compile using your default C++ compiler. The main file is `yarc.cpp`.
```bash
g++ -Iinclude src/*.cpp -o yarc
```

Tree:
```
main/
| apps/                 => I recommend putting your apps here
| | app1.yrc
| include/
| | appmanager.hpp
| | evaluator.hpp
| | helpers.hpp
| src/
| | appmanager.cpp
| | evaluator.cpp
| | helpers.cpp
| | yarc.cpp
| .gitignore
| README.md
```

## Contributing
You can write your own apps and command and share them through a pull request.
1. Fork this repository
2. Create a new branch
3. Push new features
4. Do a pull request
