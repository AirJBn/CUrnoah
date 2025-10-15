#include <iostream>

// Function that calculates and returns the volume of a cube
double cube(double side)
{
    return side * side * side;
}

// Void function that calculates and displays the volume of a cube
void cube()
{
    double side{0.0};
    
    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;
    
    double volume = side * side * side;
    std::cout << "The volume of the cube is: " << volume << " cubic units" << std::endl;
}

int main()
{
    double side{0.0};
    
    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;
    
    double volume = side * side * side;
    std::cout << "The volume of the cube is: " << volume << " cubic units" << std::endl;
    
    return 0;
}