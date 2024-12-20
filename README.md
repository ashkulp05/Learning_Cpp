# How to learn C++ 
// explain this repository
# History and Use of C++

The name of the language I will be focusing on is C++. It was originally created by a Danish computer scientist named Bjarne Stroustrup, who was inspired by his issues scaling the computer language Simula during his work on his Ph.D thesis¹,².  C++, which was originally called C with Classes, can now be found in a large variety of situations, including in building modern operating systems and many other interfaces including in medical technology and video games³. There are many websites and online resources that can assist with learning C++. The list of sources at the bottom of this page shows the ones I have found and referenced so far. 

### Steps To Install C++ in VSCode

To install C++, I chose to use the VSCode programming environment. This is for several reasons. First, I have used VSCode to program other languages and feel comfortable navigating the interface. Second, there are several resources available online that detail how to install and use C++ on VSCode. The resources I used were first, an article by VSCode, “C/C++ for Visual Studio Code”⁶ through which I first downloaded an extension on VSCode labeled “C/C++”. Because I have a Mac, I also installed Clang using the terminal, following the instructions from a youtube video⁵. From there, I also installed an additional VSCode extension called Code Runner. Finally, to complete installation, you must go to the VSCode settings and search for “Run Code Configuration”⁵. There, make sure the boxes for “Run In Terminal,” and “Save File Before Run” are selected.  With this, you are ready to run your code. 

### To Run Code in C++ in VSCode

There are two ways I found to run C++ code in VSCode. First, my preferred way is to select the run (triangle/play) button at the top of the screen and from the drop down menu of options, select “Run Code”. This allows you to view any output in the terminal. Secondly, you can view output in the debug console, if you select “Run C/C++ file” and then select the option labeled “C/C++ : g++ build and debug active file”. 

*To try this out, try running the file named 'HelloWorld.cpp' that is in this repository. If the words 'Hello World!' show up in your terminal, you know you did it correctly!* 

### To Comment In C++ in VSCode

The two ways to comment in C++ are first, for a single line, “//”. For a multiline comment “/* … */”.

# Part Two: Data Types and Naming Conventions in C++
In C++, variables have certain naming conventions that should be followed in order for your code to run and be readable by other programmers. First, it is important to note that to initialize a variable in C++, you must first declare the variable type. 
The code to initialize a variable looks like this:
 *“type variableName = value;” ⁷.*
Generally, the variable types that you see in C++ are the same as the ones you would see in any other common programming languages such as python. However, one important variable that is not commonly found in other languages is called a pointer variable.
### A note about pointers 
In C++, there is a special variable type called a pointer, which stores addresses in memory. So, for example, if a variable is initialized as
int x = 7; 
then,
int * pntr_y = &x;   would create a pointer variable that stores the address of the variable x which contains the integer 7.
(& is the character used to convert a variable into it's address form)

### And a note about arrays
In C++, arrays are initialized with the code:
*type* variable_name[size of array];
ex. string varArray[4];

When C++ creates an array object, what it is really doing is putting a pointer that points to the start of the array in a variable. Therefore, varArray from our example contains the address of the start of the array. This formatting is not uncommon in most coding languages HOWEVER because C++ has pointer variables, this can cause some problems when it comes to changing the contents of an array.
More specifically, if you have a pointer variable that points at the same slot in memory as the start of the array, you could change the value stored in the memory through the pointer, and unintentionally change the value stored in the array at the same time. 

Example in code of using pointers and arrays:
```
// this code is by asha kulp
// sources from https://www.w3schools.com/cpp/default.asp

// always start with this code to import library with standard terms
#include <iostream>
#include <map>
using namespace std;
// then open a main function to code in
int main(){
    int x = 7;
    int trialArray[3] = {1,2,3};\
    int* pntr_atArray = &x;

    cout<<"The array starts at place in memory: "<<trialArray<<endl;
    cout<< "The pointer points at: "<<pntr_atArray<<endl;
    cout<<"the array contains: "<<trialArray[0]<<trialArray[1]<<trialArray[2]<<endl;
    cout<<"the number the pointer points at is: "<<*pntr_atArray<<endl;
    pntr_atArray = trialArray;
    cout<<"When you change the value that pntr_atArray points to from *x to trialArray, the address of the pointer is:"<<pntr_atArray<<endl;
    cout<<"The number the pointer points at is: "<<*pntr_atArray<<endl;
}
```

### The standard naming conventions for variables in C++ are as follows:
The first character of the variable name should always be a lowercase letter of the alphabet. Following this can be any digit or alphabet letter, or an underscore character. 
If the variable type is a pointer, it is convention that the variable begins with p_ or pntr_.
There are also a number of reserved words in C++ that can or should not be used for names. A list of such characters can be found here: https://en.cppreference.com/w/cpp/keyword. 

## Some information about how C++ is typed
There is some discourse and disagreement on exactly what type of programming language C++ is. 
However, here I will explain the more popular opinion. That is, that C++ is a statically, explicitly and strongly typed language. C++ is considered an explicitly typed language because it requires variables to have a type when initialized, and that type must be explicitly declared.
As an example, to declare an integer in c++, the code looks like this:
int varInt = 7;
In this example, the variable varInt can only contain an integer value. 

C++ is a statically bound language because values are bound at the compilation stage, instead of the runtime stage. Additionally, all variables in C++ are by default mutable, which means that they can be changed. 
An example of this would be if you take varInt, from above and run the code:
varInt = 9;
The integer stored in varInt will change from 7 to 9.
There do exist certain keywords that can be used to make a variable immutable in C++ but they have to be added by the programmer. 

C++ uses all the typical operators for data types, such as the addition operator(+), subtraction (-), etc. It also has an operator (%) which returns the remainder of integer division⁸. C++ allows for implicit type conversion- which means that if you try to do an operation with two or more differently typed variables, it will convert them all into one variable⁹. For example, if you want to divide an integer by a float, it will perform the operation and interpret the result as a float. 

## Code Resource!
In the file labeled Using_Variables.cpp, there are examples of how to initialize variables of different types, and trials of different operations you can use to demonstrate how c++ handles type conversion. 
#### SOURCES:
1. https://cplusplus.com/info/history/
2. https://www.perforce.com/blog/qac/misra-cpp-history
3. https://www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for/
4. https://www.codecademy.com/learn/learn-c-plus-plus?utm_source=ccblog&utm_medium=ccblog&utm_campaign=ccblog&utm_content=what_is_c_plus_plus_used_for_blog
5. https://www.youtube.com/watch?v=Qw5qjRNlC-Y
6. https://code.visualstudio.com/docs/languages/cpp
7. https://www.w3schools.com/cpp/cpp_variables.asp#:~:text=Declaring%20(Creating)%20Variables&text=type%20variableName%20%3D%20value%3B,assign%20values%20to%20the%20variable.
8. https://www.geeksforgeeks.org/operators-in-cpp/
9. https://www.cs.mtsu.edu/~xyang/2170/typeConversion.html

# Conditional Statements, Operators, and Loops in C++
Resource: https://www.w3schools.com/CPP and testing code. 
In this section, I will go over the ways that you can use C++ for selection, loops, and conditional operations. 
## How to write conditional statements in C++
### If-Else Statements 
In C++, you can use the terms if, else if, and else to create conditional statements that perform certain actions as long as the terms laid out are true.
The notation in C++ is very similar to in Java. Generally, the format for if/else statements is as follows:

```
if/else if(true/false condition){ code to be run if true};
else{code to be run if true};
```

### Switch statements
C++ also allows a switch statement. The syntax for those types of statements is as follows:

```
switch(some expression){
Case (some value that the expression must be):
		Code to be run
  		break;
Case (some other value that the expression must be):
		Code to be run
  		break;
    Default: *(if no cases apply) and is optional*
}
```
## How to write loops in C++
### For Loops
When you know exactly when you want your loop to start and end, you can use a for loop. In C++, a for loop is initialized in the same way as it is in java:

```
for(initialization of counter variable; condition using counter variable; change of the counter variable){
Code to run while in the loop
}
```
To make this more clear, please reference the example of a for loop in the code example file for this section!
### While Loops
While loops in C++ have two variants- first, the traditional while loop, and secondly the do/while loop. 
To initialize the while loop,  use the following syntax:

```
while(condition){
Code to run if condition is true
}
```
Alternatively, to initialize the Do-While loop,
```
Do{ code }
While (condition);
```

The primary difference between these two potential loops it that a while loop will only execute the code in the brackets if the condition is true, whereas a do-while loop will execute the code once, and then continue to execute it if the condition continues to be true. 
## How do boolean expressions work in C++
In C++, the boolean operators are true(1) and false(0). Essentially, if you set a bool variable equal to True (as you see done in the code example), and print the variable, you will see a one. This means that in C++, you can do mathematical operations with bools!
## Short-Circuit Evaluation in C++
To understand short-circuit evaluation in C++, please run the following code (also included in the code example labeled demonstratingSelectionandLoops.cpp). Note how in the first if statement, C++ runs both funct1 and funct2, whereas in the second else if statement, C++ only runs funct2 and then skips to the else statement. 

```
//if/elif/else statements and short-circuit logic
// create two functions that return true and false respectively
bool funct1 (){
    bool truth = true;
    cout<<"f1 is true"<<endl;
    return truth;
}
bool funct2 (){
    bool truth = false;
    cout<<"f2 is false"<<endl;
    return truth;
}
if (funct1() && funct2()){ //true and then false
cout<<"never true"<<endl;
}
else if (funct2() && funct1()){
cout<<"also never true but prints something different";
}
else{
cout<<"C++ uses short-circut programming, and you can see that when the first element of an && statement is false, it does not evaluate the second statement."<<endl;
}
```

# Functions in C++

Initializing a function, or any type of subprogram in C++ requires knowledge of syntax and the scope of different C++ variables. In this section I will explain how to initialize and use functions in C++.

When declaring a function in C++, the header should provide the following information:
What the return value should be (either a data type such as Int, or void if there is no information to return). Importantly, you can only return one value from a function, and it has to be of a set data type. This can lead to complications in some cases, but there are workarounds through more complex data types such as arrays and strings. 
The name of the function, which should be named using the same naming conventions as a variable
And, the types and orders of the parameters that will be passed to the function. In C++, you can have multiple parameters and they can be of different types- just make sure the types are defined!
It is VERY important to remember that in C++, you must declare the function before calling it in a main or any other function.

The syntax should look like this: 
*returnType functionName(type parameter, type parameter) {code of the function}*

### Variables in Functions in C++
C++ automatically passes arguments into the function by value- which means that when you pass in a variable, whatever is held by that argument is copied into a new spot in memory where all the operations of the internal function are applied. This means that in C++, when you pass in an argument, any changes to the inside variable do not affect the outside variable. 

## Q&A
Does C++ support recursive functions?
Yes! Like with many other languages, you can call a function inside itself in C++.
Read more: https://www.w3schools.com/cpp/cpp_functions_recursion.asp 

What are the scoping rules in C++?
In C++, global variables can be accessed within any function as long as there wasn't a variable of the same name more recently defined. You can change the value of a local variable inside a function, but the scope of any changes will be confined to the function and will not continue once the function is exited. For further information, check out the file labeled demonstratingFunctions.cpp, and pay attention to the comments that are pointing out scoping issues. 

## Code example and important resources:
Please check out the code example attatched to this branch to see examples of creating and calling functions, returning different data types (including arrays which are complicated!), and using recursive functions. The code also demonstrates how scope works in C++ and proves that C++ is a pass-by-value language!

I also highly recommend checking out https://www.w3schools.com/cpp/cpp_functions.asp for an indepth guide on creating functions! 

# C++ Classes and Inheritance 
Historically, C and C++ did not have built-in methods to create classes and objects, however, when OOP(object oriented programming) became popular, C++ was modified to include methods for creating classes. Now, C++ supports objects although the framework for creating them is not as simple as other programming languages such as Java. 

## Naming conventions and Standard Classes 
Similarities between C++ and other programming languages include the naming conventions for objects (which are the same as variables in C++), classes(which should start with a capitalized letter), and methods(that are used in the same way as functions outside of classes). C++ also utilizes a built-in constructor method that is always exactly the name of the class. In the code example, the constructor for the Person class looks like this:

```
class Person { //the class
//specificy access: public means that it can be accessed outside of the code block
public:
// add attributes
int age;
string name;
//add constructor method to help create a person object in main
Person(int a, string n){
age = a;
name = n;
}
```

Notably, C++ does not have a built in function to allow information about an object to be printed, such as the toString() method in Java or the __str__ method in python. 

## Inheritance in C++
C++ classes can utilize inheritance from other classes using several methods. In the code example, you see that the Student class inherits from the Person class: 

```
class Student: public Person
{}
```
 But it also adds additional attributes and methods including its own constructor class. In C++, a class can inherit from just one or multiple classes. If you call a function that is named in more than one class, it will default to the class of the object that was called. As long as a class method is public, any other class that inherits from it can call that method. 


Sources:
1. https://www.w3schools.com/cpp/cpp_oop.asp
2. https://www.programiz.com/cpp-programming/oop

