# YARC - YARC's Another REPL Console
---
## What's a REPL console?
A REPL console (_Read Eval Print Loop_) is a type of console where you input a command and get an output, like PowerShell.

## YARC commands
YARC is under constant development, but here are the current commands:

* **print**: returns `ok` and outputs the first word of the message.
* **inapp**: opens an app. An app is a bunch of YARC code which is executed when you use inapp pathtoapp. Returns `should ok` at the end of execution.
* **echo**: outputs the whole message. But without returning.
* **return**: returns the arguments given.

If any unexisting comment is put, `wrong` will be returned.

## Input and Output
Standart input is the command you enter, represented in >. The output is the result (usually ok/wrong), shown as <. Other outputs, like `print`or `echo` don't have < as they use C++'s `std::cout`.

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
You can write your own apps and command and share them through a pull request.
