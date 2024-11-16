#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }
        // right side triangle
        for(int k=1;k<=i;k++){
            cout<<" "<<k;
        }
        //reversed number traingle
        for(int l=i-1;l>0;l--){
            cout<<" "<<l;
        }
        cout<<endl;
    }
    return 0;
}