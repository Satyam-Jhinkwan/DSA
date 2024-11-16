#include<iostream>
using namespace std;

int main(){
    // int a;
    // cout<< "enter the number ";
    // cin>>a;
    // if(a>0){
    //     cout<<a<<" is positive"<<endl;
    // }
    // else if(a==0){
    //     cout<<a<<" is zero"<<endl;
    // }
    // else{
    //     cout<<a<<" is negative"<<endl;
    // }

    //qn - find if the character is lowercase or uppercase

    char c;
    cout<<"enter the character ";
    cin>>c;
    if(c>='A' && c<='Z'){
        cout<<c<<" is uppercase character"<<endl;
    }
    else{
        cout<<c<<" is lowercase character"<<endl;
    }

    //2nd method 

    if(c>=65 && c<=90){
        cout<<c<<" is uppercase character"<<endl;
    }
    else{
        cout<<c<<" is lowercase character"<<endl;
    }
    return 0;
}