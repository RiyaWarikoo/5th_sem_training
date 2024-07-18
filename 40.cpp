#include <iostream>
#include <vector>
using namespace std;

void addElement(vector<int>& list, int element) {
    list.push_back(element);
}

void displayList(const vector<int>& list) {
    for (const int& element : list) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    vector<int> list;
    addElement(list, 1);  
    addElement(list, 2);  
    addElement(list, 3);  
    addElement(list, 4);  
    addElement(list, 1);  
    addElement(list, 2);  
    addElement(list, 3);  
    addElement(list, 4);  

    cout << "List elements: ";
    displayList(list);

    return 0;
}
