// Header file for input output functions
#include <iostream>
using namespace std;

//I will create a random global variable outside of any function
int x = 18;

//Demonstrating how functions work in C++
//Declare all the functions before calling them:
double recursiveFunction(double num){
// in this function we will calculate a factorial to demonstrate recursion in C++:
// a factorial (or num!) is n * n-1 * n-2 ... so on until n=1 
    if (num==1){
        return 1;
    }
    else {return(num * recursiveFunction(num-1));}
}

int multiplier(int x, int y){
    //SCOPE: because x is defined in this function, the global x value does not matter here. 
    int z = x*y;
    return(z);
}

string* splitString(string s){
// for a list of string operators: https://www.w3schools.com/cpp/cpp_ref_string.asp

string s1;
string s2;

int size = s.length();
size = size/2;
s1.append(s,0,size);
s2.append(s,size,-1);
//in C++ you can only return one variable so we will put the two strings into an array so that they can both be returned, and make the variable that holds the array a pointer
//referencing code from https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/
string* pntr_toArray = new string[2]; //create a pointer that points to the start of an array with two slots
pntr_toArray[0] = s1; //put s1 into first slot
pntr_toArray[1] = s2; //put s2 into second slot
return pntr_toArray;//return pointer!

}

void passBy(int y){
    // Write a function that tests whether your language is pass-by-reference or pass-by-value.
    cout<<"This function will show that C++ is a pass-by-value language."<<endl;
    cout<<"At the top of this function, y = "<<y<<endl;
    y=y*x; //USING GLOBAL X since we didn't define x (SCOPE)
    cout<<"At the end of this function, y = "<<y<<endl;
    }


//Create a main to operate from and call the functions:
int main(){
// call recursive function and test by putting in the number 3... the answer should be 3*2*1, or 6
double trial = 3;
double answer;
// storing the return value in a variable so it can be used in the main function
answer = recursiveFunction(trial);
cout<<"The factorial of 3 is: "<<answer<<endl;

//call multiplier function
cout<<"3*4= "<<multiplier(3,4)<<endl;

/* TO SHOW SCOPE:
cout<<z<<endl; 
//errors because z is initialized only in the multiplier function and cannot be seen outside of it.*/
cout<<"Print the global x initialized at the top of this code: "<<x<<endl;


//call splitString function
string* pntr_strings;
pntr_strings = splitString("part1part2");
cout<<pntr_strings[0]<<"  "<<pntr_strings[1]<<endl; 

//Showing that C++ is pass by value:
int y = 8;
cout<<"variable y before going into the passby function is "<<y<<". ";
passBy(y); 
cout<<"After changing y inside the function, y outside the function is "<<y<<".";

}