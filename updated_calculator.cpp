#include <iostream>
#include <string>

using namespace std;

int main() {
    string choice;
    cout << "kya karna chate h basic_calculation , area , perimeter, 3d_geometry" << endl;
    cin >> choice;

    if (choice == "basic_calculation") {
        cout << "kya karna chate h aap addition,subtraction,division,multipication or area" << endl;
        cin >> choice;

        if (choice == "addition") {
            float a, b, addition;
            cout << "enter the numbers" << endl;
            cin >> a >> b;
            addition = a + b;
            cout << addition << endl;
            return 0;
        } else if (choice == "subtraction") {
            float a, b, subtraction;
            cout << "enter the numbers" << endl;
            cin >> a >> b;
            subtraction = a - b;
            cout << subtraction << endl;
            return 0;
        } else if (choice == "division") {
            float a, b, division;
            cout << "enter the numbers" << endl;
            cin >> a >> b;
            if (b == 0) {
                cout << "please enter valid input" << endl;
                return 0;
            } else {
                division = a / b;
                cout << division << endl;
                return 0;
            }
        } else if (choice == "multipication") {
            float a, b, multipication;
            cout << "enter the numbers" << endl;
            cin >> a >> b;
            multipication = a * b;
            cout << multipication << endl;
            return 0;
        }

    } else if (choice == "area") {
        cout << "konsi figure ka area nikalna h ?" << endl;
        cin >> choice;

        if (choice == "square") {
            cout << "enter the side length" << endl;
            float side_length;
            cin >> side_length;
            float arsquare = side_length * side_length;
            cout << arsquare << endl;
            return 0;
        } else if (choice == "rectangle") {
            cout << "enter the length and breadth" << endl;
            float length, breadth;
            cin >> length >> breadth;
            float arrectangle = length * breadth;
            cout << arrectangle << endl;
            return 0;
        } else if (choice == "circle") {
            cout << "enter the radius" << endl;
            float radius;
            cin >> radius;
            float pi = 3.14;
            float arcircle = pi * radius * radius;
            cout << arcircle << endl;
            return 0;
        } else if (choice == "triangle") {
            cout << "enter base and height" << endl;
            float base, height;
            cin >> base >> height;
            float artriangle = 0.5 * base * height;
            cout << artriangle << endl;
            return 0;
        }

    } else if (choice == "perimeter") {
        cout << "select figure rectangle , square ,triangle , circle" << endl;
        cin >> choice;

        if (choice == "square") {
            cout << "enter the side length" << endl;
            float side_length;
            cin >> side_length;
            float prisquare = 4 * side_length;
            cout << prisquare << endl;
            return 0;
        } else if (choice == "rectangle") {
            float length, breadth;
            cout << "enter length and breadth" << endl;
            cin >> length >> breadth;
            float prirectangle = 2 * (length + breadth);
            cout << prirectangle << endl;
            return 0;
        } else if (choice == "circle") {
            float radius;
            cout << "enter the radius" << endl;
            cin >> radius;
            float pi = 3.14;
            float pricircle = pi * 2 * radius;
            cout << pricircle << endl;
            return 0;
        } else if (choice == "triangle") {
            float a, b, c;
            cout << "enter the length of all 3 sides" << endl;
            cin >> a >> b >> c;

            if (a + b > c && b + c > a && a + c > b) {
                float pritriangle = a + b + c;
                cout << pritriangle << endl;
                return 0;
            } else {
                cout << "it isn't a triangle" << endl;
            }
        } else {
            cout << "invalid figure selection" << endl;
        }

    } else if (choice == "3d_geometry") {
        int shapeChoice;
        cout << "\n--- 3D Geometry Calculator ---\n";
        cout << "1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n";
        cout << "Select a shape to calculate Volume, TSA, and CSA: ";
        cin >> shapeChoice;

        if (shapeChoice == 1) {
            double a;
            cout << "Enter the side length of the cube: ";
            cin >> a;
            if (a <= 0) {
                cout << "Error: Dimensions must be greater than zero!\n";
            } else {
                cout << "Volume: " << (a * a * a) << "\n";
                cout << "Total Surface Area (TSA): " << (6 * a * a) << "\n";
                cout << "Curved Surface Area (CSA): " << (4 * a * a) << "\n";
            }
        } else if (shapeChoice == 2) {
            double l, w, h;
            cout << "Enter length, width, and height of the cuboid (separated by spaces): ";
            cin >> l >> w >> h;
            if (l <= 0 || w <= 0 || h <= 0) {
                cout << "Error: Dimensions must be greater than zero!\n";
            } else {
                cout << "Volume: " << (l * w * h) << "\n";
                cout << "Total Surface Area (TSA): " << 2 * (l * w + w * h + h * l) << "\n";
                cout << "Curved Surface Area (CSA): " << 2 * h * (l + w) << "\n";
            }
        } else if (shapeChoice == 3) {
            double r;
            cout << "Enter the radius of the sphere: ";
            cin >> r;
            if (r <= 0) {
                cout << "Error: Dimensions must be greater than zero!\n";
            } else {
                const double PI = 3.14159265359;
                cout << "Volume: " << (4.0 / 3.0) * PI * (r * r * r) << "\n";
                cout << "Total Surface Area (TSA): " << 4 * PI * (r * r) << "\n";
                cout << "Curved Surface Area (CSA): " << 4 * PI * (r * r) << "\n";
            }
        } else if (shapeChoice == 4) {
            double r, h;
            cout << "Enter the radius and height of the cylinder (separated by spaces): ";
            cin >> r >> h;
            if (r <= 0 || h <= 0) {
                cout << "Error: Dimensions must be greater than zero!\n";
            } else {
                const double PI = 3.14159265359;
                cout << "Volume: " << PI * (r * r) * h << "\n";
                cout << "Total Surface Area (TSA): " << 2 * PI * r * (r + h) << "\n";
                cout << "Curved Surface Area (CSA): " << 2 * PI * r * h << "\n";
            }
        } else {
            cout << "Invalid shape selection.\n";
        }

    } else {
        cout << "invalid input" << endl;
    }

    return 0;
}
