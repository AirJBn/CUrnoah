#include <iostream>
#include <format>

int main()
{
    bool a{false};
    bool b{false};
    
    std::cout << std::format("Logical AND (&&)\n");
    std::cout << std::format("A\tOP\tB\t| Result\n");
    std::cout << std::format("------------------------------\n");
    
    // AND truth table
    a = false; b = false;
    std::cout << std::format("false\t&&\tfalse\t| {}\n", (a && b));
    
    a = false; b = true;
    std::cout << std::format("false\t&&\ttrue\t| {}\n", (a && b));
    
    a = true; b = false;
    std::cout << std::format("true\t&&\tfalse\t| {}\n", (a && b));
    
    a = true; b = true;
    std::cout << std::format("true\t&&\ttrue\t| {}\n", (a && b));
    
    std::cout << std::format("\n");
    
    std::cout << std::format("Logical OR (||)\n");
    std::cout << std::format("A\tOP\tB\t| Result\n");
    std::cout << std::format("------------------------------\n");
    
    // OR truth table
    a = false; b = false;
    std::cout << std::format("false\t||\tfalse\t| {}\n", (a || b));
    
    a = false; b = true;
    std::cout << std::format("false\t||\ttrue\t| {}\n", (a || b));
    
    a = true; b = false;
    std::cout << std::format("true\t||\tfalse\t| {}\n", (a || b));
    
    a = true; b = true;
    std::cout << std::format("true\t||\ttrue\t| {}\n", (a || b));
    
    std::cout << std::format("\n");
    
    std::cout << std::format("Logical negation (!)\n");
    std::cout << std::format("A\t| !A\n");
    std::cout << std::format("--------------\n");
    
    // NOT truth table
    a = false;
    std::cout << std::format("false\t| {}\n", (!a));
    
    a = true;
    std::cout << std::format("true\t| {}\n", (!a));
    
    return 0;
}