//create node
#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int data){
        value=data;
        next=NULL;  
    }
};
int main(){
    Node* n1 = new Node(10);
    cout << n1->value <<" "<<n1->next<< endl;
    return 0;

}