#include<iostream>
using namespace std;

class Teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){
        dept = newDept;
    }
    //getter and setter method
    void setSalary (double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
    Teacher(){
        cout << "Construction is calling " << endl;
    }
    Teacher(string s, string d, string sub, double sal){
        name = s;
        dept = d;
        subject = sub;
        salary = sal;
    }
     void getInfo(){
        cout << "Teacher name : "<< name << endl;
        cout << "Teacher subject : " << subject << endl;
    }

};

int main(){
    //Teacher t1;
    // t1.name = "Sarang";
    // t1.subject = "Math";
    // t1.changeDept ("CSE");
    // cout << t1.name << endl;
    // t1.setSalary(4500);
    // cout << t1.getSalary();
    Teacher t1("sumedh","CSE","C++",1500000);
    t1.getInfo();
    return 0;
}