#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, string> phoneBook;

    //stroing values
    phoneBook["Satyam"] = "7579112534";
    phoneBook["Aman"] = "9897682772";
    phoneBook["Rahul"] = "9998887776";

    //searching for a number
    cout<<"satyam's number : "<<phoneBook["Satyam"]<<endl;
    return 0;
}