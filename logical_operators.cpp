#include <iostream>

void displayAndTruthTable()
{
    bool a{false};
    bool b{false};
    
    std::cout << "Logical AND (&&)" << std::endl;
    std::cout << "A\tOP\tB\t| Result" << std::endl;
    std::cout << "------------------------------" << std::endl;
    
    // AND truth table
    a = false; b = false;
    std::cout << "false\t&&\tfalse\t| " << (a && b) << std::endl;
    
    a = false; b = true;
    std::cout << "false\t&&\ttrue\t| " << (a && b) << std::endl;
    
    a = true; b = false;
    std::cout << "true\t&&\tfalse\t| " << (a && b) << std::endl;
    
    a = true; b = true;
    std::cout << "true\t&&\ttrue\t| " << (a && b) << std::endl;
}

void displayOrTruthTable()
{
    bool a{false};
    bool b{false};
    
    std::cout << "Logical OR (||)" << std::endl;
    std::cout << "A\tOP\tB\t| Result" << std::endl;
    std::cout << "------------------------------" << std::endl;
    
    // OR truth table
    a = false; b = false;
    std::cout << "false\t||\tfalse\t| " << (a || b) << std::endl;
    
    a = false; b = true;
    std::cout << "false\t||\ttrue\t| " << (a || b) << std::endl;
    
    a = true; b = false;
    std::cout << "true\t||\tfalse\t| " << (a || b) << std::endl;
    
    a = true; b = true;
    std::cout << "true\t||\ttrue\t| " << (a || b) << std::endl;
}

void displayNotTruthTable()
{
    bool a{false};
    
    std::cout << "Logical negation (!)" << std::endl;
    std::cout << "A\t| !A" << std::endl;
    std::cout << "--------------" << std::endl;
    
    // NOT truth table
    a = false;
    std::cout << "false\t| " << (!a) << std::endl;
    
    a = true;
    std::cout << "true\t| " << (!a) << std::endl;
}

int main()
{
    displayAndTruthTable();
    std::cout << std::endl;
    
    displayOrTruthTable();
    std::cout << std::endl;
    
    displayNotTruthTable();
    
    return 0;
}