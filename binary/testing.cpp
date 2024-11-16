#include<iostream>
using namespace std;

int main(){
    int n=42,binary=0,place=1;
    while(n>0){
        binary = binary + ((n%2) * place);
        place *= 10;
        n /= 2;
    }
    cout<<binary;
    return 0;
}