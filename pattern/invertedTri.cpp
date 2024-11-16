#include<iostream>
using namespace std;

int main(){
    cout<<"inverted triangle pattern"<<endl;
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int k=n-i;k>0;k--){
            cout<<" "<<i+1;
        }
        cout<<endl;
    }
    return 0;
}