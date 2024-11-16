#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int a ;
    cout<<"enter the number : ";
    cin>>a;
    int result = factorial(a);
    cout<<"factorial of "<<a<<" = "<<result;
    return 0;
}
