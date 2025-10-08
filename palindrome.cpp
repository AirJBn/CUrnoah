#include <iostream>

int main()
{
    int number{0};
    int digit1{0};
    int digit2{0};
    int digit3{0};
    
    std::cout << "Please enter a three-digit number: ";
    std::cin >> number;
    
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;
    
    if (digit1 == digit3) {
        std::cout << number << " is a palindrome number" << std::endl;
    } else {
        std::cout << number << " is not a palindrome number" << std::endl;
    }
    
    return 0;
}
