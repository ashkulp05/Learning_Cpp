# Conditional Statements, Operators, and Loops in C++
Resource: https://www.w3schools.com/CPP and testing code. 
In this section, I will go over the ways that you can use C++ for selection, loops, and conditional operations. 
## How to write conditional statements in C++
### If-Else Statements 
In C++, you can use the terms if, else if, and else to create conditional statements that perform certain actions as long as the terms laid out are true.
The notation in C++ is very similar to in Java. Generally, the format for if/else statements is as follows:
if/else if(true/false condition){ code to be run if true};
else{code to be run if true};

### Switch statements
C++ also allows a switch statement. The syntax for those types of statements is as follows:
switch(some expression){
	Case (some value that the expression must be):
		Code to be run
		break;
	Case (some other value that the expression must be):
		Code to be run
		break;
	Default: *(if no cases apply) and is optional*
}
## How to write loops in C++
### For Loops
When you know exactly when you want your loop to start and end, you can use a for loop. In C++, a for loop is initialized in the same way as it is in java:
for(initialization of counter variable; condition using counter variable; change of the counter variable){
Code to run while in the loop
}
To make this more clear, please reference the example of a for loop in the code example file for this section!
### While Loops
While loops in C++ have two variants- first, the traditional while loop, and secondly the do/while loop. 
To initialize the while loop,  use the following syntax:
while(condition){
Code to run if condition is true
}
Alternatively, to initialize the Do-While loop,
Do{ code }
While (condition);
The primary difference between these two potential loops it that a while loop will only execute the code in the brackets if the condition is true, whereas a do-while loop will execute the code once, and then continue to execute it if the condition continues to be true. 
## How do boolean expressions work in C++
In C++, the boolean operators are true(1) and false(0). Essentially, if you set a bool variable equal to True (as you see done in the code example), and print the variable, you will see a one. This means that in C++, you can do mathematical operations with bools!
## Short-Circuit Evaluation in C++
To understand short-circuit evaluation in C++, please run the following code (also included in the code example labeled demonstratingSelectionandLoops.cpp). Note how in the first if statement, C++ runs both funct1 and funct2, whereas in the second else if statement, C++ only runs funct2 and then skips to the else statement. 

//if/elif/else statements and short-circuit logic
// create two functions that return true and false respectively
if (funct1() && funct2()){ //true and then false
cout<<"never true"<<endl;
}
else if (funct2() && funct1()){
cout<<"also never true but prints something different";
}
else{
cout<<"C++ uses short-circut programming, and you can see that when the first element of an && statement is false, it does not evaluate the second statement."<<endl;
}

