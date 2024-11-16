#include<iostream>
using namespace std;

int main(){

    //for loop 

    // sum of numbers from 1 to n
    int n=5,sum=0,i=1;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"total sum = "<<sum<<endl;

    //while loop
    sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"total sum = "<<sum<<endl;

    //do while
    sum=0,i=0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<"total sum = "<<sum<<endl;
    return 0;

}