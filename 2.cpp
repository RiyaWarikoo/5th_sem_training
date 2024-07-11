#include<iostream>
using namespace std;
int main() {
    // braced initializers
    //variable may contain random garbage value. Warning
    int elephant_count;
    int lion_count{};   //initializes to zero
    int dog_count{10};  //initializes to 10
    int cat_count{15};  //initializes to 15
    //ca use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    //int new_number{doesnt_exist};
    //int narrowing_conversion {2.9}; //compiler error
    cout<<"elephant count:"<<elephant_count<<endl;
    cout<<"lion count:"<<lion_count<<endl;
    cout<<"dog count:"<<dog_count<<endl;
    cout<<"cat count:"<<cat_count<<endl;
    cout<<"domesticated animals:"<<domesticated_animals<<endl;
    return 0;

}