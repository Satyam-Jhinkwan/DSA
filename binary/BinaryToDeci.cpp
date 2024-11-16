#include<iostream>
using namespace std;

int convert(int n){
    int binary[32],i=0;
    while(n > 0){
        binary[i] = n%2;
        n /= 2;
        i++;
    }

    cout<<"binary representation : ";
    for(int j=i-1;j>=0; j--){
        cout<<binary[j]<<" ";
    }  
    cout<<endl; 
}

//second method - w/o using array 

int Binary(int n){
    int binary=0,place=1;
    cout<<"binary representation : ";
    while(n>0){
        binary = binary + ((n%2) * place);
        place *= 10;
        n /= 2;
    }
    cout<<binary;
}

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    convert(n);
    Binary(n);
    return 0;
}

