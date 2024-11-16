#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<endl;
}

int main(){
    //star pattern print
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"* "; 
        }
        cout<<endl;
    }
    factorial(6);
    return 0;
}
