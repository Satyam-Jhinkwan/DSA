#include<iostream>
using namespace std;

int GCD(int a, int b){
    int lowest,gcd;
    if(a<b){
        lowest=a;
    }
    else{
        lowest=b;
    }
    for(int i=1;i<=lowest;i++){
        if(a % i == 0 && b % i == 0){
            gcd=i;
        }
    }
    return gcd;
}

int LCM(int a ,int b){
    return (a * b) / GCD(a , b);
}

int main(){
    int a,b;
    cout<<"enter the first numbers : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    cout<<"Greatest Common Divisor of "<<a<<" "<<b<<" is "<<GCD(a,b)<<endl;
    cout<<"Least Common Factor of "<<a<<" "<<b<<" is "<<LCM(a,b)<<endl;
    return 0;
}