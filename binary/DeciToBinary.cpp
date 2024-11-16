#include<iostream>
using namespace std;

int Decimal(int n){
    int decimal = 0, place =1;
    while( n > 0 ){
        decimal += (n%10) * place;
        n /= 10;
        place *= 2;
    }
    cout<<decimal;
}

int main(){
    int n=1000;
    Decimal(n);
    return 0;
}