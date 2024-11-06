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
##Inheritance in C++
C++ classes can utilize inheritance from other classes using several methods. In the code example, you see that the Student class inherits from the Person class: 
```
class Student: public Person
{}
```
 But it also adds additional attributes and methods including its own constructor class. In C++, a class can inherit from just one or multiple classes. If you call a function that is named in more than one class, it will default to the class of the object that was called. As long as a class method is public, any other class that inherits from it can call that method. 


Sources:
1. https://www.w3schools.com/cpp/cpp_oop.asp
2. https://www.programiz.com/cpp-programming/oop

