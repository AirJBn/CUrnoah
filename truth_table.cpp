#include <iostream>
#include <format>

int main()
{
    std::cout << std::format("LOGICAL TRUTH TABLES\n");
    std::cout << std::format("====================\n\n");
    
    // AND Truth Table
    std::cout << std::format("AND Truth Table\n");
    std::cout << std::format("---------------\n");
    std::cout << std::format("A     B     A && B\n");
    std::cout << std::format("---------------\n");
    
    // Manual truth table entries using what you learned
    std::cout << std::format("F     F     F\n");
    std::cout << std::format("F     T     F\n");
    std::cout << std::format("T     F     F\n");
    std::cout << std::format("T     T     T\n\n");
    
    // OR Truth Table
    std::cout << std::format("OR Truth Table\n");
    std::cout << std::format("--------------\n");
    std::cout << std::format("A     B     A || B\n");
    std::cout << std::format("--------------\n");
    
    std::cout << std::format("F     F     F\n");
    std::cout << std::format("F     T     T\n");
    std::cout << std::format("T     F     T\n");
    std::cout << std::format("T     T     T\n\n");
    
    // NOT Truth Table
    std::cout << std::format("NOT Truth Table\n");
    std::cout << std::format("---------------\n");
    std::cout << std::format("A     !A\n");
    std::cout << std::format("--------\n");
    
    std::cout << std::format("F     T\n");
    std::cout << std::format("T     F\n");
    
    return 0;
}