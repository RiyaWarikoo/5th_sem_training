#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> l;
   l.push_back(10);
   l.push_front(12);
   for(int i : l){
       cout<<i<<" ";
   }
   cout<<endl;
   l.erase(l.begin());
   cout<<"after erase "<<endl;
   for(int i : l){
       cout << i <<" ";
   }
   cout << "size of list "<<l.size()<<endl;
   
   //UNIQUE FUNCTION unique()
   //REVERSE FUNCTION reverse()
   //RESIZE FUNCTION resize()
  


   // UNIQUE FUNCTION unique()
   l.unique();
   cout << "After unique: ";
   for(int i : l) {
       cout << i << " ";
   }
   cout << endl;




   // REVERSE FUNCTION reverse()
   l.reverse();
   cout << "After reverse: ";
   for(int i : l) {
       cout << i << " ";
   }
   cout << endl;


   // RESIZE FUNCTION resize()
   l.resize(3);  // Resize to 3 elements
   cout << "After resize (3): ";
   for(int i : l) {
       cout << i << " ";
   }
   cout << endl;


   l.resize(5, 100);  // Resize to 5 elements, new elements initialized to 100
   cout << "After resize (5, 100): ";
   for(int i : l) {
       cout << i << " ";
   }
   cout << endl;
  
   cout << "Final size of list: " << l.size() << endl;
   return 0;
  
}
