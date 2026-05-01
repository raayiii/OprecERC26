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
    cout << "Enter direction (up, down, left, right): ";
    cin >> dir;
    int n = 3;

    if (dir == "up") {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) cout << " ";
            for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
            cout << endl;
        }
    } 

    else if (dir == "down") {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= n - i; j++) cout << " ";
            for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
            cout << endl;
        }
    } 

    else if (dir == "right") {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) cout << "*";
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) cout << "*";
            cout << endl;
        }
    } 

    else if (dir == "left") {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) cout << " ";
            for (int k = 1; k <= i; k++) cout << "*";
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= n - i; j++) cout << " ";
            for (int k = 1; k <= i; k++) cout << "*";
            cout << endl;
        }
    }

    else {
        cout << "Invalid input." << endl;
    }

}

class goat {
public:
    string goatname;
    int attributeValue;

    void display1() {
        cout << "GOAT name: " << goatname << ", Rings: " << attributeValue << endl;
    }
    void display2() {
        cout << "GOAT name: " << goatname << ", Has a World Cup Trophy?: " << (attributeValue ? "Yes" : "No") << endl;
    }
};

int main() {
    cout << "ERC Open Recruitment for Programmer" << endl;
    cout << "Dadya Kengrayi Saeanandura ; 25/565544/PA/23854 ; ProgrammerWebDev + ProgrammerLinJar" << endl;
    cout << "=====================================================================================" << endl;
    cout << "Assignments:\n1. Basic syntax & logic\n2. Loops & conditional\n3. OOP\n\nChoose function (1-3): ";
    
    int choice;
    cin >> choice;

    if (choice == 1) {
        function_1();
    } 
    else if (choice == 2) {
        function_2();
    } 
    else if (choice == 3) {
        goat jordan, messi;
        jordan.goatname = "Michael Jordan"; jordan.attributeValue = 6;
        messi.goatname = "Lionel Messi"; messi.attributeValue = 1;
        jordan.display1(); messi.display2();
    } 
    else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
