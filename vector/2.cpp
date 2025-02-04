#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {1,2,3,4,5};

    cout<< "Using normal Loop: ";
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" ";
    }

    cout<<"\nUsing for-each Loop: ";
    for(int num : numbers){
        cout<< num << " ";
    }
    return 0;
}