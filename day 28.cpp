#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
	string make;
	int year;
	float fuel;

public:

	Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {}

	void refuel(float amount) {
		fuel += amount;
		cout << make << " refueled by " << amount << " liters. Total fuel: " << fuel << " liters." << endl;
	}
	void display() {
		cout << "Make: " << make << endl;
		cout << "Year: " << year << endl;
		cout << "Fuel: " << fuel << " liters" << endl;
	}
};
class Car : public Vehicle {
private:
	int doors;

public:
	Car(string m, int y, float f, int d) : Vehicle(m, y, f), doors(d) {}
	void display() {
		Vehicle::display();
		cout << "Doors: " << doors << endl;
	}
	void openDoors() const {
		cout << "Doors are opened." << endl;
	}
};
class Bike : public Vehicle {
private:
	bool hasCarrier;

public:
	Bike(string m, int y, float f, bool carrier) : Vehicle(m, y, f), hasCarrier(carrier) {}

	void display() {
		Vehicle::display();
		cout << "Has carrier: " << (hasCarrier ? "Yes" : "No") << endl;
	}
	void kickStart() const {
		cout << "Bike kick-started." << endl;
	}
};
int main() {
	Car car("Toyota", 2020, 10.5, 4);

	Bike bike("Yamaha", 2018, 5.2, true);

	car.refuel(15.0);
	bike.refuel(3.0);

	cout << "\nCar details:" << endl;
	car.display();
	car.openDoors();

	cout << "\nBike details:" << endl;
	bike.display();
	bike.kickStart();

	return 0;
}
