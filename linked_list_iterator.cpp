#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> numbers={1,2,3,4,5};
    list<int>::iterator itr=numbers.begin();
    ++itr;
    cout<<"second element: "<<*itr<<endl;
    ++itr;
    ++itr;
    int index = 1;
    for (int num : numbers) {
        if (index == 3) {
            cout << "Third element: " << num << endl;
        }
        if (index == 5) {
            cout << "Fifth element: " << num << endl;
        }
        ++index;
    }
    return 0;
}