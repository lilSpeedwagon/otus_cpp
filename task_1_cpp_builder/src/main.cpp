#include <iostream>

#include <version.hpp>

int main() {
    std::cout << "Current build version: " << version::get_build_version() << '\n';
    std::cout << "Hello, world!\n";
    return 0;
}