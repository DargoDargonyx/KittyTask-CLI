#include "external/CLI11.hpp"
#include <iostream>

int main(int argc, char **argv) {
    CLI::App app;
    CLI11_PARSE(app, argc, argv);
    std::cout << "Compiled correctly" << std::endl;

    return 0;
}
