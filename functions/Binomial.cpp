#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int binomial(int n , int r){
    int bino= factorial(n)/(factorial(r) * factorial(n-r));
    return bino;
}

int main(){
    int n,r;
    cout<<"enter the value of n : ";
    cin>>n;
    cout<<"enter the value of r : ";
    cin>>r;
    cout<<"binomial coefficient is "<<binomial(n,r);
    return 0;
}