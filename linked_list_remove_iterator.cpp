#include<iostream>
#include<list>
using namespace std;

int main() {
    //create list
    list<int> numbers {1,2,1,3,4,1};
    list<int>::iterator itr=numbers.begin();
    //display original list
    cout<<"initial list: ";
    for(int number : numbers) {
        cout<<number<<", ";
    }
    // point iterator to the 4th element
    for(int i=0;i<3;i++) {
        ++itr;
    }
    //remove the 4th element
    numbers.remove(*itr);

    //display modified list
    cout<<endl<<"Final List: ";
    for(int number : numbers) {
        cout<<number<< " ";
    }
    return 0;
}