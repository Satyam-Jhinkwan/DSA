#include<iostream>
using namespace std;

int main(){
    int a = 4 , b = 8;
    //bitwise and
    cout<< (a&b) <<endl;
    //bitwise or
    cout<< (a|b) <<endl;
    //bitwise xor
    cout<< (a^b) <<endl;
    //bitwise left shift operator
    cout<< (a<<1) <<endl;
    //bitwise right shift operator
    cout<< (a>>1) <<endl;
    return 0;
}