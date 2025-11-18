/*
Name: Josue Rodriguez
Date: 11/18/2025
Assignment: M5HW1 - Gold standard (Qs 1–6)

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
    int choice;

    do {
        cout << "\n============================\n";
        cout << "         M5HW1 MENU\n";
        cout << "============================\n";
        cout << "1. Question 1 - Average Rainfall\n";
        cout << "2. Question 2 - Block Volume\n";
        cout << "3. Question 3 - Roman Numerals (1-10)\n";
        cout << "4. Question 4 - Geometry Calculator\n";
        cout << "5. Question 5 - Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice. Please enter a number from 1 to 6.\n";
        } else {
            switch (choice) {
                case 1: question1(); break;
                case 2: question2(); break;
                case 3: question3(); break;
                case 4: question4(); break;
                case 5: question5(); break;
                case 6: cout << "Goodbye!\n"; break;
            }
        }

    } while (choice != 6);

    return 0;
}

/* =========================
   Question 1
   Average rainfall for 3 months
   ========================= */

void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;
    double average;

    cout << "\n--- Question 1: Average Rainfall ---\n";

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for "
         << month1 << ", " << month2 << ", and " << month3
         << " is " << average << " inches.\n";

    // reset formatting (optional)
    cout.unsetf(ios::fixed);
    cout << setprecision(6);
}

/* =========================
   Question 2
   Volume of a 3D block
   ========================= */

void question2() {
    double width, length, height;

    cout << "\n--- Question 2: Block Volume ---\n";

    cout << "Enter width: ";
    cin >> width;
    if (width <= 0) {
        cout << "Width must be greater than zero.\n";
        return;
    }

    cout << "Enter length: ";
    cin >> length;
    if (length <= 0) {
        cout << "Length must be greater than zero.\n";
        return;
    }

    cout << "Enter height: ";
    cin >> height;
    if (height <= 0) {
        cout << "Height must be greater than zero.\n";
        return;
    }

    double volume = width * length * height;
    cout << "The volume of the block is " << volume << endl;
}

/* =========================
   Question 3
   Roman numerals (1–10)
   ========================= */

void question3() {
    int num;

    cout << "\n--- Question 3: Roman Numerals ---\n";

    cout << "Enter a number (1 - 10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Number must be between 1 and 10.\n";
        return;
    }

    cout << "The Roman numeral version of " << num << " is ";

    switch (num) {
        case 1:  cout << "I";   break;
        case 2:  cout << "II";  break;
        case 3:  cout << "III"; break;
        case 4:  cout << "IV";  break;
        case 5:  cout << "V";   break;
        case 6:  cout << "VI";  break;
        case 7:  cout << "VII"; break;
        case 8:  cout << "VIII";break;
        case 9:  cout << "IX";  break;
        case 10: cout << "X";   break;
    }

    cout << ".\n";
}

/* =========================
   Question 4
   Geometry Calculator
   ========================= */

void question4() {
    int choice;
    double r, length, width, base, height;

    cout << "\n--- Question 4: Geometry Calculator ---\n";

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. "
             << "Run the program again and select one of those.\n";
        return;
    }

    if (choice == 1) {
        cout << "Enter the circle's radius: ";
        cin >> r;
        if (r < 0) {
            cout << "The radius cannot be less than zero.\n";
            return;
        }
        cout << "The area is " << 3.14159 * r * r << endl;
    }
    else if (choice == 2) {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        if (length < 0 || width < 0) {
            cout << "Only enter positive values for length and width.\n";
            return;
        }
        cout << "The area is " << (length * width) << endl;
    }
    else if (choice == 3) {
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;
        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height.\n";
            return;
        }
        cout << "The area is " << 0.5 * base * height << endl;
    }
    else if (choice == 4) {
        cout << "Returning to main menu.\n";
    }
}

/* =========================
   Question 5
   Distance Traveled
   ========================= */

void question5() {
    int speed, hours;

    cout << "\n--- Question 5: Distance Traveled ---\n";

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    if (speed < 0) {
        cout << "Speed cannot be negative.\n";
        return;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;
    if (hours < 1) {
        cout << "Hours must be at least 1.\n";
        return;
    }

    cout << "Hour   Distance Traveled\n";
    cout << "---------------------------\n";

    for (int i = 1; i <= hours; i++) {
        cout << i << "       " << (speed * i) << endl;
    }
}
