#include <iostream>
#include <iomanip>
using namespace std;

// Function that calculates and returns the volume of a cube
double cube(double side) {
    return side * side * side;
}

// Void function that calculates and displays the volume of a cube
void cube() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    
    double volume = side * side * side;
    cout << fixed << setprecision(2);
    cout << "The volume of the cube is: " << volume << " cubic units" << endl;
}

int main() {
    cout << "=== Cube Volume Calculator ===" << endl;
    cout << "This program calculates the volume of a cube." << endl;
    cout << "Formula: Volume = side^3" << endl << endl;
    
    // Main program: Prompt user to enter side of cube and display volume
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    
    // Calculate and display volume using side^3 formula
    double volume = side * side * side;
    cout << fixed << setprecision(2);
    cout << "The volume of the cube is: " << volume << " cubic units" << endl;
    
    cout << endl << "--- Demonstration of functions ---" << endl;
    
    // Demonstrate the double cube() function
    cout << "Using double cube() function: ";
    double volume_func = cube(side);
    cout << "Volume = " << volume_func << " cubic units" << endl;
    
    cout << endl;
    // Demonstrate the void cube() function
    cout << "Using void cube() function:" << endl;
    cube();
    
    return 0;
}