#include<iostream>
using namespace std;
int main() {

    int user_input;
    int array[5]={10,20,30,54,80};
    cout<<"enter the number you want to search for in the array: ";
    cin>>user_input;
    int counter = 0;
    for ( auto x : array)
    {
        if(x==user_input)
        {
            cout<<"number"<<user_input<<"is found at the location: "<<counter;
            exit(0);
        }
        counter++;
    }
    cout<<"not found";
    return 0;
}