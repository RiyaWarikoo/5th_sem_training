#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> numbers={1,2,3,4,5};
    cout<<"first element: "<<numbers.front()<<endl;
    cout<<"last element: "<<numbers.back();
    return 0;
}