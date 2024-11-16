#include<iostream>
using namespace std;

int fibonacci(int n){
    int a = 0, b = 1, nextTerm;
    cout<<"Fibonacci series : ";
    for(int i=1 ;i<=n;i++){
        cout<<a<<" ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout<<endl;
}

int main(){
    int n=8;
    fibonacci(n);
    return 0;
}