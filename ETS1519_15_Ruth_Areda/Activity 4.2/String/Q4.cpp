#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string inputLine;
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, inputLine);
    std::istringstream stream(inputLine);
    std::string token;

    std::cout << "\nTokenized words:\n";
    while (stream >> token) {
        std::cout << token << "\n";
    }

    return 0;
}

