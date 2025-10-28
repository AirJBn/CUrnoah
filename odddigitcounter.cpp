#include <iostream>

int main()
{
    int number{0};
    int digit{0};
    int oddcount{0};
    
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    
    while (number > 0) {
        digit = number % 10;
        
        if (digit % 2 == 1) {
            oddcount++;
        }
        
        number = number / 10;
    }
    
    std::cout << oddcount << " odd digits" << std::endl;
    
    return 0;
}