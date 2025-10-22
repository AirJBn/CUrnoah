#include <iostream>

double averageDigits(long n)
{
    if (n < 0) {
        n = -n;
    }
    
    if (n == 0) {
        return 0.0;
    }
    
    long sum{0};
    int count{0};
    long temp{n};
    
    while (temp > 0) {
        int digit{temp % 10};
        sum += digit;
        count++;
        temp = temp / 10;
    }
    
    return static_cast<double>(sum) / count;
}

int main()
{
    long number{0};
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    double average{averageDigits(number)};
    
    std::cout << "The average of digits in " << number 
              << " is: " << average << std::endl;
    
    return 0;
}