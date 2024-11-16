#include<iostream>
using namespace std;

int main(){

    //arithmetic operator

    int a=19,b=20;
    cout<<"sum = "<<(a+b)<<endl;
    cout<<"difference = "<<(a-b)<<endl;
    cout<<"product = "<<(a*b)<<endl;
    cout<<"division = "<<(a/b)<<endl;
    cout<<"modulo = "<<(a%b)<<endl;
    //using type casting for division
    cout<<"division in points = "<<(a/(double)b)<<endl;

    //Relational operator  --> returns true or false

    cout<< (3<5) <<endl;  //true -> 1
    cout<< (3>5) <<endl;  //false -> 0
    cout<< (3<=5) <<endl; //true -> 1
    cout<< (3==5) <<endl; // false - > 0
    cout<< (3!=5) <<endl; // true - > 1

    //logical operator  --> OR AND NOT 

    cout<< !(3<5) <<endl;  //not true  = false = 0

    //unary operators --> ++ --
    
    int z=1;
    int v = z++;  //post increment 
    v = ++v;      //pre increment
    cout<< v <<endl;
    cout<< z <<endl;

    v=--v;      //pre decrement
    cout<< v <<endl;  

    return 0;
}