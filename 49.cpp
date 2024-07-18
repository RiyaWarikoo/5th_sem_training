#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
private:
    string licensePlate;
    string owner;

public:
    Car(string lp, string o) {
        licensePlate = lp;
        owner = o;
    }

    void setLicensePlate(string licensePlate) {
        this->licensePlate = licensePlate;
    }

    void setOwner(string owner) {
        this->owner = owner;
    }

    string getLicensePlate() const {
        return licensePlate;
    }

    string getOwner() const {
        return owner;
    }

    void display() const {
        cout << "License Plate: " << licensePlate << ", Owner: " << owner << endl;
    }
};

class ParkingLot {
private:
    vector<Car> parkedCars;
    int capacity;

public:
    ParkingLot(int cap) : capacity(cap) {}

    bool parkCar(const Car& car) {
        if (parkedCars.size() < capacity) {
            parkedCars.push_back(car);
            return true;
        } else {
            cout << "Parking lot is full!" << endl;
            return false;
        }
    }

    void displayParkedCars() const {
        cout << "Parked Cars:\n";
        for (const auto& car : parkedCars) {
            car.display();
        }
    }
};

class Employee {
private:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    void setName(string name) {
        this->name = name;
    }

    void setId(int id) {
        this->id = id;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    void display() const {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

class Billing {
private:
    int hoursParked;
    double ratePerHour;

public:
    Billing(int hours, double rate) : hoursParked(hours), ratePerHour(rate) {}

    double calculateBill() const {
        return hoursParked * ratePerHour;
    }

    void displayBill() const {
        cout << "Total Bill: Rs" << calculateBill() << endl;
    }
};

int main() {
    ParkingLot myParkingLot(3);

    Car car1("BC123", "Sanjay Gore");
    Car car2("YZ457", "Janvi Manse");

    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.displayParkedCars();

    Employee employee1("Vansh Bargotra", 101);
    Employee employee2("Dev Lopment", 102);

    employee1.display();
    employee2.display(); 

    Billing bill1(5, 2.5);
    Billing bill2(3, 2.5);

    bill1.displayBill();
    bill2.displayBill();

    return 0;
}
