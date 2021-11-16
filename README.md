# Algorithms and data structures - Lab 4

Write programs to perform two tasks: the first using the stack, the second using the queue.
Algorithm for implementing each program:
1. Create a structure (struct) to store data on the task of your variant.
2. Create a structure (struct) Stack / Queue, it will contain an array of structures with data:
    - implement stack / queue using static array (not linked list), ie stack / queue of fixed length N (#define N)
    - use only structures, it is forbidden to use global variables, OOP, classes
3. Implement the main functions of the stack / queue:
    - push() - adds an element to the stack / queue
    - pop() - removes an item from the stack / queue
    - empty() - checks the stack / queue for emptiness
    - size() - returns the size of the stack / queue
    - only for stack: top() - returns the top element of the stack
    - only for queue: front() - returns the first element of the queue
4. Implement the print() function to output a stack / queue with data that are stored using only functions created above, without direct access to the array.
5. Initialize the stack / queue and perform the tasks according to the option, display the size and contents of the stack / queue after each task.

<b>Importantly!</b> Allowed libraries to connect:
- I / O libraries: \<iostream>, \<iomanip>, <stdio.h>, <conio.h>
- library of mathematical functions: \<cmath> (math.h)
- libraries for the randomize function: \<cstdlib> (stdlib.h), \<ctime> (time.h)
- library to support Cyrillic output: \<clocale> (locale.h)
- library for support of Ukrainian letters in the Windows console: <windows.h>
- libraries for working with string data: \<string>, \<cstring> (string.h)

1. Data structure "The billiard ball" has the following fields: color, striped / solid, ball number. Perform the following tasks:
    1) Create a billiard pocket (stack) for balls, the size of the pocket 4.
    2) "Score" in it 3 different balls.
    3) Remove the top ball.
    4) "Score" in it 3 more balls.
    5) Take the top 2 balls, select the ball with the larger number and return it to the pocket.
    6) Remove 5 balls from the pocket
2. Data structure "The message" has the following fields: text, sender id, number of emoticons. Perform the following tasks:
    1) Create a queue of messages in the general chat, the size of the queue 9.
    2) Add 7 different messages to it.
    3) Add 4 more messages.
    4) Pick up the first 6 messages.
    5) Take the first 2 messages, reduce the number of emoticons in them to 0, and add them to the queue again.
    6) Remove 6 more messages from the queue
