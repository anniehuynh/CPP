/*
In the last exercise of Viope C++ we practice creating an inherited class. Below is a program that already has the class Vehicle. Main program utilizes a method from class Car, which inherits Vehicle class. Your task is to creat the Car class and it's methods.

Tip:

Examine the below program and especially it's comments carefully. As usual, don't copy the below code to the text box.

#include <iostream>

#include <string>

using namespace std;

 
// Class Vehicle contains the methods

// InputWeight(), InputTopSpeed(), InputDrivenKM(), which are

// used to read the variable values of Vehicle class in the inheriting class.

// In addition Vehicle class contains the method Drive(length in km),

// that increments the kilometres driven by the vehicle.

 
class Vehicle

{

  public:

  int weight;

  int top_speed;

  long driven_km;

  Vehicle(int weight, int top_speed, long driven_km);

  void Drive(int journey);

  int InputWeight();

  int InputTopSpeed();

  long InputDrivenKM();

};

 
// Class contains only one initializing method, where the characteristics of Vehicle are

// relayed as parameters right after creating the object.

 
Vehicle::Vehicle(int Aw, int Ats, long Akm)

{

  weight = Aw;

  top_speed = Ats;

  driven_km = Akm;

}

 
void Vehicle::Drive(int journey)

{

  driven_km += journey;

}

 
int Vehicle::InputWeight()

{

  return weight;

}

 
int Vehicle::InputTopSpeed()

{

  return top_speed;

}

 
long Vehicle::InputDrivenKM()

{

  return driven_km;

}

 
// Car class and it's method (your implementation)

//

//

// Class characteristics: (data type in parentheses)

// - brand (string)

// - model (string)

// - register_no (string)

// - running (bool)

// Class methods

// - turn_on(), changes the value of “running” to 1

// - turn_off(), changes the value of “running” to 0

// - check_up(), tulostaa carn tiedot esibrandtulosteen mukaisesti
// Other things worth noting

// - You can manipulate the variable values by using the methods in Vehicle class

// - If the car is running while it's checked up, program prints: “Car is running”

// - Similarly if the car is not running, program prints: “Car is not running”

  
// main program

////////////////////////////////////////

 
int main()

{

  int weight, speed;

  long km;

  string brand, model, license;

 
  // ask information about car

  cout << "Input car brand: ";

  cin >> brand;

 
  cout << "Input car model: ";

  cin >> model;

 
  cout << "Input car license plate number: ";

  cin >> license;

 

  cout << "Input car weight: ";

  cin >> weight;

 
  cout << "Input car top speed: ";

  cin >> speed;

 

  cout << "Input distance traveled by car: ";

  cin >> km;

  cout << endl;

  Car carX(weight, speed, km, brand, model, license, 0);

 
  carX.check_up();

  carX.turn_on();

  carX.Drive(95);

  cout << endl;

  carX.check_up();

}



Example output:
Input car brand: Audi
Input car model: A4
Input car license plate number: ASD-123
Input car weight: 1400
Input car top speed: 190
Input distance traveled by car: 113333

car info:
brand:Audi
model:A4
Kilometres:113333
weight:1400
Top speed:190
License plate:ASD-123
car is not running.

car info:
brand:Audi
model:A4
Kilometres:113428
weight:1400
Top speed:190
License plate:ASD-123
car is running.
The verification of program output does not account for whitespace and is not case-sensitive (the least strict comparison level)
*/
//solution

class Car: public Vehicle {
	public:
	string brand, model, license;
	bool car_status;
	Car(int weight, int max_speed, long drive_km, string brand, string model,
		string license, bool car_status);
	void check_up();
	void turn_on();
};


Car::Car(int new_weight, int speed, long travel_distance, string new_brand, string new_model,
		string new_license, bool new_status):  
		Vehicle(new_weight, speed, travel_distance) { 
	brand = new_brand; 
	model = new_model;
	license = new_license;
	car_status = new_status;
}

void Car::check_up() {
	cout << "car info:\n";
	cout << "brand:" << brand << endl;
	cout << "model:" << model << endl;
	cout << "Kilometres:" << driven_km << endl;
	cout << "weight:" << weight << endl;
	cout << "Top speed:" << top_speed << endl; 
	cout << "License plate:" << license << endl;
	if (car_status == 1) {
		cout << "car is running." << endl;
	} else {
		cout << "car is not running." << endl;
	}
}

void Car::turn_on() {
	car_status = true;
}
