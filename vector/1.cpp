#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers;    
    numbers.push_back(10);      // Adds 10
    numbers.push_back(20);      // Adds 20
    numbers.push_back(30);      // Adds 30
    numbers.pop_back();         //removes last element
    
    cout<<numbers[0]<<endl;
    cout<<numbers[1]<<endl;
    return 0;
}