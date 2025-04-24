#include <iostream>

int main() {
    int i;
    std::cout << "Enter an integer: ";
    if (std::cin >> i) {
        std::cout << "You entered: " << i << '\n';
    } else {
        std::cout << "Error: Invalid input!\n";
    }
    return 0;
}