#include<iostream>
using namespace std;

int sumOfDigit(int x){
    int sum=0;
    while(x > 0){
        sum += x % 10 ;
        x/=10;
    }
    return sum;
}

int main(){
    int x;
    cout<<"enter the number : ";
    cin>>x;
    cout<<"sum of the digit of "<<x<<" = "<<sumOfDigit(x);
    return 0;
}