#include <iostream>
#include <format>

int main()
{
    bool a{false};
    bool b{false};
    
    // AND Truth Table
    std::cout << "Logical AND (&&)" << std::endl;
    std::cout << std::format("A{:>13}B{:>10}", "OP", " | Result") << std::endl;
    std::cout << "==============================" << std::endl;
    
    a = false;
    b = false;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "false", "&&", "false", (a && b) ? "true" : "false") << std::endl;
    
    a = false;
    b = true;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "false", "&&", "true", (a && b) ? "true" : "false") << std::endl;
    
    a = true;
    b = false;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "true", "&&", "false", (a && b) ? "true" : "false") << std::endl;
    
    a = true;
    b = true;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "true", "&&", "true", (a && b) ? "true" : "false") << std::endl;
    
    std::cout << std::endl;
    
    // OR Truth Table
    std::cout << "Logical OR (||)" << std::endl;
    std::cout << std::format("A{:>13}B{:>10}", "OP", " | Result") << std::endl;
    std::cout << "==============================" << std::endl;
    
    a = false;
    b = false;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "false", "||", "false", (a || b) ? "true" : "false") << std::endl;
    
    a = false;
    b = true;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "false", "||", "true", (a || b) ? "true" : "false") << std::endl;
    
    a = true;
    b = false;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "true", "||", "false", (a || b) ? "true" : "false") << std::endl;
    
    a = true;
    b = true;
    std::cout << std::format("{:<10}{:<7}{:<10}| {}", "true", "||", "true", (a || b) ? "true" : "false") << std::endl;
    
    std::cout << std::endl;
    
    // NOT Truth Table
    std::cout << "Logical negation (!)" << std::endl;
    std::cout << "A        | !A" << std::endl;
    std::cout << "===============" << std::endl;
    
    a = false;
    std::cout << std::format("{:<9}| {}", "false", (!a) ? "true" : "false") << std::endl;
    
    a = true;
    std::cout << std::format("{:<9}| {}", "true", (!a) ? "true" : "false") << std::endl;
    
    return 0;
}
