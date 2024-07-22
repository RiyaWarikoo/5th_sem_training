#include<iostream>
using namespace std;
void example(){
    // auto x =10;
    //registered storage classes
    register int counter = 0;
    for(register int i = 0; i<10;++i){
        counter += i;
    }
    cout << counter << endl;
}
int main(){
    example();
    return 0 ;
}