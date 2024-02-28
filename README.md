# CS250 Intro to CSII [IC - RationalSet]

## RationalSet Class Design

<b>Problem:</b> A RationalSet contains a set of Rational numbers.

---
<b>Task #1: </b> Design a UML diagram.

Create a class called **RationalSet** that is capable of holding a set of 0 or more Rational numbers.

    RationalSet
    --
    -macRationals : Rational[]
    -mSize : int
    --
    +RationalSet()
    +size() : int
    +add(const Rational &) : void
    +write(ostream &) const : void

---
<b>Task #2: </b> Convert the UML diagram.

Create a file called **RationalSet.h** that will represent the converted UML diagram. The location for RationalSet.h is to be in the **include** folder.

---
<b>Task #3: </b> Implement the RationalSet functions.

Create a file called **RationalSet.cpp** that is the definition for the functions in RationalSet.h. The location for RationalSet.cpp is to be in the "src" folder.

---
<b>Task #4: </b> Modify main.cpp

In main.cpp you are to add a statement **#include "../include/RationalSet.h"** after all other #include statements. Then create a RationalSet object. Compile and execute your program showing me the results.

---
<b>Task #5: </b> Implement the function prototypes declared in RationalSet.h one at a time & test. Modify main.cpp such that your program works as follows. 

    *** Rational Calculator ***

    Enter rational #1: 1/2
    Enter rational #2: 2/3


    1 / 2 + 2 / 3 = 7 / 6
    1 / 2 * 2 / 3 = 2 / 6

    Rational Set: {}
    Adding : 1 / 2
    Rational Set: {1 / 2}
    Adding : 2 / 3
    Rational Set: {1 / 2 2 / 3}

    Program Completed
---

## Commands

1. Execute without debugging

    * Open a Terminal session
    * Make sure you are in the directory where the Makefile is located
    * Type the command <b>make</b>. If all goes well, you will see something similar to 

      ```
        @ryan2135 ➜ /workspaces/AssignmentT (main) $ make
        mkdir -p bin
        clang++ -g -Wall -std=c++17 -o bin/main.exe src/*.cpp -Iinclude
        ryan2135 ➜ /workspaces/AssignmentT (main) $ 
      ```
    * Type bin/main.exe

2. Debug

    * Set a break point in your program
    * In the VS Code Activity Bar, select the Debug option (triangle)
    * Select the RUN AND DEBUG lldb - debug option

3. Print PDF

    * Open task bar with Ctrl+P
    * Type <b>task</b> in the task bar followed by a space
    * Select printToPDF
    * The pdf will be created in the pdfs directory