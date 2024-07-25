#include<iostream>
using namespace std;
int main() {
    int arr[3][3]= {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    for(int i=0; i<3; ++i) {
        for(int j=0;j<3;++j) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<3;++i) {
        sum=sum+arr[0][i];
    }
    cout<<"sum of the first row:"<<sum<<endl;
    return 0;
}