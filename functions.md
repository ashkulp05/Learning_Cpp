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
