#include<iostream>
using namespace std;
int main() {
    // assignment notatio
    int bike_count=2;
    int truck_count=7;
    int vehicle_count=bike_count + truck_count;
    int narrowing_conversion_assignment=2.9;

    cout<<"bike count: "<<bike_count<<endl;
    cout<<"truck count: "<<truck_count<<endl;
    cout<<"vehicle count: "<<vehicle_count<<endl;
    cout<<"narrowing conversions: "<<narrowing_conversion_assignment<<endl;

    //check the size with sizeof
    cout<<"sizeof int: "<<sizeof(int)<<endl;
    cout<<"sizeof truck_count: "<<sizeof(truck_count)<<endl;
    return 0;
}

