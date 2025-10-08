#include <iostream>

int main()
{
    int temperature{0};
    int total{0};
    int count{0};
    double average{0.0};
    
    std::cout << "Enter temperature values (enter 9999 to stop): ";
    std::cin >> temperature;
    
    while (temperature != 9999) {
        total += temperature;
        count++;
        std::cout << "Enter temperature values (enter 9999 to stop): ";
        std::cin >> temperature;
    }
    
    if (count > 0) {
        average = static_cast<double>(total) / count;
        std::cout << "The average temperature is: " << average << std::endl;
    } else {
        std::cout << "No temperatures were entered." << std::endl;
    }
    
    return 0;
}
