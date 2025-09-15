#include <iostream>
#include <spdlog/spdlog.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    spdlog::info("This is an informative log message from spdlog.");
    return 0;
}
