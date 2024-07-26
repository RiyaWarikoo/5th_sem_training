#include<iostream>
#include<list>
using namespace std;

int main() {
    //create list
    list<int> numbers {1,2,1,3,4,1};
    //display original list
    cout<<"initial list: ";
    for(int number : numbers) {
        cout<<number<<", ";
    }
    //remove all the elements with value 1
    numbers.remove(1);

    //display modified list
    cout<<endl<<"Final List: ";
    for(int number : numbers) {
        cout<<number<< " ";
    }
    return 0;
}