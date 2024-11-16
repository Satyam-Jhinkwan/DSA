#include<iostream>
using namespace std;

int main(){
    int n=4;

    //upper half
    for(int i=0;i<n;i++){
        for(int j=n-i;j>1;j--){
            cout<<"  ";
        }

        cout<<"* ";

        for(int j=0;j<2*i-1;j++){
            cout<<"  ";
        }

        if(i!= 0){
            cout<<"* ";
        }

        cout<<endl;
    }
    
    //lower half

    for(int i=1;i<n;i++){

        //blank space triangle 
        for(int j=0;j<i;j++){
            cout<<"  ";
        }

       cout<<"* ";

        for(int j=n;j>2*i-1;j--){
            cout<<"  ";
        }
        
        if(i!=n-1){
            cout<<"* ";     
        }
        cout<<endl;
    }

    return 0;
}

