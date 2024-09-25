// this code is by asha kulp
// sources from https://www.w3schools.com/cpp/default.asp

// always start with this code to import library with standard terms
#include <iostream>
#include <map>
using namespace std;
// then open a main function to code in
int main(){
    cout << "This program will help you understand how to initialize variables in C++ and will test some ways we can use operators on different variables!" <<endl ; //cout is how to print in C++ and <<endl will move the next output to a new line

  //First we will create a variable of each common data type: "

    string varString = "hi"; //create a variable that can hold a string

    int varInt = 7; //create a variable that can hold an integer

    float varFloat = 7.0; //create a variable that can hold a float
    
    bool varBool = true; //create a variable that can hold an boolean

    string varArray[4];  //create a variable that can hold an array
    
    map<string,int>varMap;// create a variable that can hold a map (or a python dictionary) FOR THIS MUST #include <map>
    varMap["X"] = 8; //add values
    varMap["y"] = 9;
    varMap["z"] = 10;

// Now some tests:

//Can you add ints and floats? 
    cout<<"int + float = "; 

//Is the resulting variable an int (narrowing conversion) or a float (widening conversion)?  
    cout << (7 + 7.5)<<endl; //yes! and it prints as a float 

//What about division? 
    cout<<"int / float = ";
    cout<<(10/2.9)<< endl; //works! and converts to float

//Can you put different data types in the same array or list?  
    // NO, varMap[7]="ohno" will error.

//Can one data type be converted to another either implicitly or explicitly (int to float, string to int, etc)?
    varInt = 9.6; //converts 9.6 to an integer : 9
    cout<<varInt<<endl;
    return 0;  // there always must be a return statement
}
