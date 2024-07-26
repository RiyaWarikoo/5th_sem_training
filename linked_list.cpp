#include<iostream>
#include<list>//doubly linked list

using namespace std;
int main(){
    //create the list
    list<int> numbers {1,2,3,4};
    //display the elements of the list
    cout << "The list : ";
    for(int number:numbers){
        cout << number << " ";
    }
    //Add the elements
    numbers.push_front(0);
    numbers.push_back(5);
    //Now the list is
    cout << "\nThe new list is : " ; 
    for(int number:numbers){
        cout << number << " ";
    }
    //remove first element
    numbers.pop_front();
    //remove the last element
    numbers.pop_back();

    cout << "\nThe final list is : ";
    for(int number :  numbers){
        cout << number << " " ;
    }

    return 0;
    
}