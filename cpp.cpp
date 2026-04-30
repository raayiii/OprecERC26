#include <iostream>

using namespace std;

void function_1() {
    int a, b;
    cout << "Input 2 integers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << (b != 0 ? (float)a / b : 0) << endl;
}

void function_2() {
    string dir;
    cout << "Enter direction (up): ";
    cin >> dir;
    if(dir == "up") {
        for(int i = 1; i <= 3; i++) {
            for(int j = 1; j <= 2 * i - 1; j++) cout << "*";
            cout << endl;
        }
    }
}

class Vehicle {
public:
    string brand;
    int attributeValue;

    void displayCar() {
        cout << "Car Brand: " << brand << ", Doors: " << attributeValue << endl;
    }
    void displayBike() {
        cout << "Bike Brand: " << brand << ", Has Gear: " << (attributeValue ? "Yes" : "No") << endl;
    }
};

int main() {
    cout << "ERC Open Recruitment for Programmer\nName ; Nim ; Division\n";
    cout << "====================================\nAssignment:\n1. Basic syntax & logic\n2. Loops & conditional\n3. OOP\n\nChoose function (1-3): ";
    
    int choice;
    cin >> choice;

    if (choice == 1) {
        function_1();
    } 
    else if (choice == 2) {
        function_2();
    } 
    else if (choice == 3) {
        Vehicle car, bike;
        car.brand = "Toyota"; car.attributeValue = 4;
        bike.brand = "Yamaha"; bike.attributeValue = 1;
        car.displayCar(); bike.displayBike();
    } 
    else {
        cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
    }

    return 0;
}