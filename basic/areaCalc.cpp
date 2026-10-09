// My classic area calculator. I haven't learned how to make class and functions yet. Likely I will learn that the next day.
// Is PHP still good?
// This project calculates area of different shapes. I will make a better version of this later.

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
        float a, b, c, result = 0;
        int ans;
        string retry;
        while (true) {
                cout << "======= AREA CALCULATOR =======\n[1] Square\n[2] Triangle\n[3] Rectangle\n[4] Trapezoid\n[5] Circle\n[6] Parallelogram\nSelect 1-6: ";
                cin >> ans;
                switch (ans) {
                        case 1:
                                cout << "Enter the length: ";
                                cin >> a;
                                result = a * a;
                                cout << "Area of the square: " << result << "\n";
                                break;
                        case 2:
                                cout << "Enter the height: ";
                                cin >> a;
                                cout << "Enter the base: ";
                                cin >> b;
                                result = 0.5 * (a * b);
                                cout << "Area of the triangle: " << result << "\n";
                                break;
                        case 3:
                                cout << "Enter the length: ";
                                cin >> a;
                                cout << "Enter the width: ";
                                cin >> b;
                                result = a * b;
                                cout << "Area of the rectangle: " << result << "\n";
                                break;
                        case 4:
                                cout << "Enter the height: ";
                                cin >> a;
                                cout << "Enter the length (a): ";
                                cin >> b;
                                cout << "Enter the length (b): ";
                                cin >> c;
                                result = 0.5 * (c + b) * a;
                                cout << "Area of the Trapezoid: " << result << "\n";
                                break;
                        case 5:
                                cout << "Enter the radius: ";
                                cin >> a;
                                result = 3.14159 * a * a;
                                cout << "Area of the circle: " << result << "\n";
                                break;
                        case 6:
                                cout << "Enter the length: ";
                                cin >> a;
                                cout << "Enter the width: ";
                                cin >> b;
                                result = a * b;
                                cout << "Area of the parallelogram: " << result << "\n";
                                break;
                        default:
                                cout << "Invalid value entered\n";
                                        continue;
                }
                cout << "Calculate again? (Y/N): ";
                cin >> retry;
                if (retry == "y" || retry == "Y") {
                        continue;
                }else{
                        cout << "Goodbye\n";
                        break;
                }

        return 0;
        }
}
