# How to learn C++ 
## Part One
### History and Use of C++

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
“*type variableName = value;*” ⁷.

The standard naming conventions for variables in C++ are as follows: first, the first character of the variable name should always be a lowercase letter of the alphabet. Following this can be any digit or alphabet letter, or an underscore character. 

There are also a number of reserved words in C++ that can or should not be used for names. A list of such characters can be found here: https://en.cppreference.com/w/cpp/keyword. 

## Some information about how C++ is typed
There is some discourse and disagreement on what type of programming language C++ is. However, here I will go with the more popular opinion. That is, that C++ is a statically, explicitly and strongly typed language. This opinion comes about because C++ requires variables to have a type when initialized, and that type must be explicitly declared. C++ is a statically bound language because values are bound at the compilation stage, instead of the runtime stage. Additionally, all variables in C++ are by default mutable, which means that they can be changed. There are certain keywords that can be used to make a variable mutable in C++ but they have to be added by the programmer. 

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

