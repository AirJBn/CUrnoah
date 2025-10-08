#include <iostream>

int main()
{
    int correctpassword{4321};
    int userpassword{0};
    int attempts{0};
    int maxattempts{3};
    
    while (attempts < maxattempts) {
        std::cout << "Enter password: ";
        std::cin >> userpassword;
        
        if (userpassword == correctpassword) {
            std::cout << "Access Granted" << std::endl;
            return 0;
        } else if (userpassword > correctpassword) {
            std::cout << "Too high" << std::endl;
        } else {
            std::cout << "Too low" << std::endl;
        }
        
        attempts++;
    }
    
    std::cout << "Locked Out" << std::endl;
    
    return 0;
}