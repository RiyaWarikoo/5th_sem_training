#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int, string> m;
    m[1]="Ajay";
    m[2]="Nanjay";
    m[4]="Manjay";

    m.insert({5,"antika"});
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<"find the element"<<m.count(-13)<<endl;
    m.erase(5);
    cout<<"after erase"<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<" "<<endl;

        auto findElement=m.find(4);
        for(auto i=findElement;i!=m.end();i++) {
            cout<<(*i).first<<" "<<(*i).second<<endl;
        }
    }cout<<endl;
}