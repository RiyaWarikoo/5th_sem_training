#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream my_file("example.txt");
    my_file.close();
    return 0;
}