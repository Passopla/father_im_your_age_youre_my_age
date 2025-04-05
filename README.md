# Father I'm Your Age, You're My Age

## Inspiration
This project was inspired by the example at [Java2s.com C++ Functions Tutorial](http://www.java2s.com/Tutorial/Cpp/0140__Function/Passingintbyvalue.htm), which demonstrates passing integers by value. I decided to give it a comedic twist by framing it as a father-son age swap story.

## What It Does
The program initializes a father's age (48) and a son's age (12), then attempts to swap them using a function. Inside the function, the ages are indeed swapped and displayed. However, due to C++'s pass-by-value behavior, the original variables remain unchanged when control returns to the main function. 

## The Comedy
The temporary spell that sees a father becoming younger and the son becoming older, only for them to "snap back" to reality when the story ends. A creative way to demonstrate swapping in C++.

## How to Run
Compile and run using a C++ compiler:
```bash
g++ main.cpp -o father_son_swap
./father_son_swap
```

## Expected Output
```
Main. Before swap, Father's Age: 48 Son's Age: 12
Swap. After swap, Father's Age: 12 Son's Age: 48
```
(Note: The original variables in main remain unchanged due to pass-by-value behavior)

## Learning Points
- Understanding pass-by-value in C++
- How function parameters create copies of the original variables
- The implications of scope in C++ functions
- The need for references or pointers when you want to modify original values

## Modifications
To make the swap actually change the original variables, modify the function to use references:
```cpp
void swap(int &fatherAge, int &sonAge)
```

Now the father and son can truly experience their age swap adventure!
