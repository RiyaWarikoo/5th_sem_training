#include<iostream>
using namespace std;
int main() {
    bool red_light{false};
    bool green_light{true};
    if(red_light==true) {
        cout<<"stop!"<<endl;
    }
    else {
        cout<<"go through!"<<endl;
    }
    if(green_light) {
        cout<<"the light is green!"<<endl;
    }
    else{
        cout<<"the light is not green!"<<endl;
    }
    //sizeof()
    cout<<"sizeof(bool) : "<<sizeof(bool)<<endl;
    //printing out a bool
    //1 = true
    //0 = false
    cout<<endl;
    cout<<"red_light: "<<red_light<<endl;
    cout<<"green_light"<<green_light<<endl;
    cout<<boolalpha;
    cout<<"red_light: "<<endl;
    cout<<"green_light: "<<green_light<<endl;

    return 0;
}