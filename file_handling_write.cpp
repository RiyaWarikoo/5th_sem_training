#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ofstream my_file("example.txt");
    if(!my_file) {
        cout<<"Error: Unable to open the file"<<endl;
        return 1;
    }
    my_file<<"Mohan 30"<<endl;
    my_file<<"Mayur 40"<<endl;
    my_file<<"Jitu 50"<<endl;
    my_file.close();
    return 0;
}