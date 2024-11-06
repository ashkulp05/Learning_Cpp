// Header file for input output functions
#include <iostream>
using namespace std;

// For this example we will create a person class 
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

    //add methods (these happen for all person classes and classes that inherit from person)
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string toString(){ //string function to print when object is called-- unlike in other languages, this will not print automatically when the object is called without the function call as well
        return(name + " is age " + to_string(age));
    }

};

//and a student class that inherits from the person class but with additional attributes and methods
class Student: public Person
{
    public:
    int grade;

    //Student constructor 
    Student (int a, string n, int g)
    :Person(a, n) //inherits from person with person constructor
    {
        grade = g; //additionally sets g 
    }
    //create a new string method that will include what grade they are in
    string toString(){ 
        return(name + " is age " + to_string(age)+" and is in grade "+ to_string(grade));}
};


// initialize main
int main(){
//instanciate a person object
Person person1(5, "Abby");
//print out
cout<<person1.toString()<<endl;

//instanciate a student object
Student student1(4, "Ben", 1);
//print out
cout<<student1.toString()<<endl;

//use a person function on a student object
cout<<student1.getName()<<" is a student."<<endl;
//return to end
return(0);
}