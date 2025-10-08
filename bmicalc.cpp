#include <iostream>

int main()
{
    double weight{0.0};
    int ft{0};
    int inches{0};
    double totalinches{0.0};
    double bmi{0.0};
    
    std::cout << "Enter weight in pounds: ";
    std::cin >> weight;
    
    std::cout << "Enter feet: ";
    std::cin >> ft;
    
    std::cout << "Enter inches: ";
    std::cin >> inches;
    
    totalinches = (ft * 12) + inches;
    bmi = (weight * 703) / (totalinches * totalinches);
    
    std::cout << "BMI is " << bmi << std::endl;
    
    if (bmi < 18.5) {
        std::cout << "Underweight" << std::endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        std::cout << "Normal" << std::endl;
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        std::cout << "Overweight" << std::endl;
    } else {
        std::cout << "Obesity" << std::endl;
    }
    
    return 0;
}
