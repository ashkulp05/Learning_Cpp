// Header file for input output functions
#include <iostream>
using namespace std;
//functions to use later:

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

// always initialize a main
int main(){
int x = 3;
int y = 4;
int z = 0;
//In this code I will create:
//a one-condition if/else statement (i.e. "if x == true")
if(x>y){ // this is false
    cout<<x<<"is greater than "<<y<<endl;
}
else { //this is true
    cout<<y<<"is greater than "<<x<<endl;
}


//a multi-condition if/else statement (i.e. "if x>0 && y< 10)
if (y>x && x>z){ //true && false
    cout<<"y is greater than z"<<endl;
}
else{
    cout<<"y is less than z"<<endl; // this statement is true because first condition was confirmed true
}


//if/elif/else statements and short-circuit logic
// create two functions that return true and false respectively
if (funct1()  && funct2()){ //true and then false
    cout<<"never true"<<endl;
    }
else if (funct2() && funct1()){
    cout<<"also never true but prints something different";
}
else{
    cout<<"C++ uses short-circut programming, and you can see that when the first element of an && statement is false, it does not evaluate the second statement."<<endl;
}

//a switch-case statement in a for loop
for(int x=1;x<5;x++){ //initialize for loop!
switch(x*2){
    case 2:
    cout<<"x is one"<<endl;
    break;
    case 4:
    cout<<"x is two"<<endl;
    break;
    case 6:
    cout<<"x is three"<<endl;
    break;
    case 8:
    cout<<"x is four"<<endl;
    break;
}}

}