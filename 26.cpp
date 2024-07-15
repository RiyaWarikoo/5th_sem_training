#include<iostream>
using namespace std;


int main(){
    int choice , car=0 ,bike=0, rickshaw=0;
    string s;
    do{
    cout << " -----PARKING----- " << endl;
    cout <<" Choose from the following options-- " <<endl;
    cout << " 1.Park Car " << endl;
    cout << " 2.Park Bike " << endl;
    cout << " 3.Park Rickshaw " << endl;
    cout << " 4.Exit " << endl;
    
    cin >> choice;

    if(choice==1){
        cout << " Enter the number of cars to park "<< endl;
        cin >> car ;
        car++;
    }
    if(choice==2){
        cout << " Enter the number of bikes to park " <<  endl;
        cin >> bike ;
        bike++;
    }
    if(choice==3){
        cout << " Enter the number of rickshaws to park " << endl;
        cin >> car ;
        rickshaw++;
    }
    if(choice==4){
        cout << " Thank you for using our parking system " << endl;
    }
    if (choice != 4) { 
            cout << "Do you want to perform another operation? (yes/no): " << endl;
            cin >> s;
        }
    }    
    while (s == "yes");
    if (s == "no" || choice == 4) {
        cout << "Count of cars: " << car << endl;
        cout << "Count of bikes: " << bike << endl;
        cout << "Count of rickshaws: " << rickshaw << endl;
    }
}