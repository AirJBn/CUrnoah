#include <iostream>
#include <format>

int main()
{
    std::cout << std::format("{:^50}\n", "LOGICAL TRUTH TABLES");
    std::cout << std::format("{:=^50}\n", "");
    std::cout << "\n";
    
    // AND Truth Table
    std::cout << std::format("{:^20}\n", "AND Truth Table");
    std::cout << std::format("{:-^20}\n", "");
    std::cout << std::format("{:>5} {:>5} {:>8}\n", "A", "B", "A && B");
    std::cout << std::format("{:-^20}\n", "");
    
    bool values[] = {false, true};
    
    for (bool a : values) {
        for (bool b : values) {
            std::cout << std::format("{:>5} {:>5} {:>8}\n", 
                a ? "T" : "F", 
                b ? "T" : "F", 
                (a && b) ? "T" : "F");
        }
    }
    
    std::cout << "\n";
    
    // OR Truth Table
    std::cout << std::format("{:^20}\n", "OR Truth Table");
    std::cout << std::format("{:-^20}\n", "");
    std::cout << std::format("{:>5} {:>5} {:>8}\n", "A", "B", "A || B");
    std::cout << std::format("{:-^20}\n", "");
    
    for (bool a : values) {
        for (bool b : values) {
            std::cout << std::format("{:>5} {:>5} {:>8}\n", 
                a ? "T" : "F", 
                b ? "T" : "F", 
                (a || b) ? "T" : "F");
        }
    }
    
    std::cout << "\n";
    
    // NOT Truth Table
    std::cout << std::format("{:^15}\n", "NOT Truth Table");
    std::cout << std::format("{:-^15}\n", "");
    std::cout << std::format("{:>5} {:>8}\n", "A", "!A");
    std::cout << std::format("{:-^15}\n", "");
    
    for (bool a : values) {
        std::cout << std::format("{:>5} {:>8}\n", 
            a ? "T" : "F", 
            (!a) ? "T" : "F");
    }
    
    return 0;
}