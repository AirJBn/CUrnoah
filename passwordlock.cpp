#include <iostream>

int main()
{
    int correctpassword{4321};
    int userpassword{0};
    int attempts{0};
    int maxattempts{3};
    bool accessgranted{false};
    
    while (attempts < maxattempts && !accessgranted) {
        std::cout << "Enter password: ";
        std::cin >> userpassword;
        
        if (userpassword == correctpassword) {
            std::cout << "Access Granted" << std::endl;
            accessgranted = true;
        } else if (userpassword > correctpassword) {
            std::cout << "Too high" << std::endl;
            attempts++;
        } else {
            std::cout << "Too low" << std::endl;
            attempts++;
        }
    }
    
    if (!accessgranted) {
        std::cout << "Locked Out" << std::endl;
    }
    
    return 0;
}