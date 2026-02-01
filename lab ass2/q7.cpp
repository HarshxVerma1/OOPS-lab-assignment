#include <iostream>

// First namespace
namespace First {
    int x = 10;

    void show() {
        std::cout << "First namespace x = " << x << std::endl;
    }
}

// Second namespace
namespace Second {
    int x = 20;

    void show() {
        std::cout << "Second namespace x = " << x << std::endl;
    }
}

int main() {
    // Accessing members of different namespaces
    First::show();
    Second::show();

    std::cout << "First namespace variable: " << First::x << std::endl;
    std::cout << "Second namespace variable: " << Second::x << std::endl;

    return 0;
}
