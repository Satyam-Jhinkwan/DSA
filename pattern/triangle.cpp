#include<iostream>
using namespace std;

int numTriangle(int n){
    cout<<"same number triangle :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
}

int revNumTriangle(int n){
    cout<<"reverse number triangle"<<endl;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j>0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }   
}


int main(){
    int n=5;
    cout<<"star square"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    numTriangle(n);
    revNumTriangle(n);
    return 0;
}