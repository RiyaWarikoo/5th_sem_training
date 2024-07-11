#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
   if(a>b) {
      if(a>c)
      cout<<a<<" is largest number"<<endl;
      else
      cout<<c<<" is largest number";
   }else {
      if(b>c)
      cout<<b<<" is largest number";
      else
      cout<<c<<" is largest number";
   }
   return 0;
}
