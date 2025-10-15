#include <iostream>
#include <iomanip>
using namespace std;

// 1- Function that calculates and returns the volume of a cube
double cube(double side) {
    return side * side * side;  // side^3
}

// 2- Void function that calculates and displays the volume of a cube
void cube() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    
    double volume = side * side * side;  // side^3
    cout << fixed << setprecision(2);
    cout << "The volume of the cube is: " << volume << " cubic units" << endl;
}

// Main program that prompts user to enter side of cube and displays volume
int main() {
    double side;
    
    cout << "Enter the side length of the cube: ";
    cin >> side;
    
    // Calculate volume using the formula: side^3
    double volume = side * side * side;
    
    cout << fixed << setprecision(2);
    cout << "The volume of the cube is: " << volume << " cubic units" << endl;
    
    return 0;
}