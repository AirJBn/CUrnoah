#include <iostream>

double averageDigits(long n)
{
    // Handle negative numbers by making them positive
    if (n < 0) {
        n = -n;
    }
    
    // Handle special case of 0
    if (n == 0) {
        return 0.0;
    }
    
    long sum{0};
    int count{0};
    long temp{n};
    
    // Extract digits and calculate sum
    while (temp > 0) {
        int digit = temp % 10;  // Extract the last digit
        sum += digit;           // Add to sum
        count++;               // Count the digit
        temp = temp / 10;      // Remove the last digit
    }
    
    // Calculate and return average
    return static_cast<double>(sum) / count;
}

int main()
{
    long number{0};
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    double average = averageDigits(number);
    
    std::cout << "The average of digits in " << number 
              << " is: " << average << std::endl;
    
    return 0;
}