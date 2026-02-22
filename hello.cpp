#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

void rainbow_print(const std::string& text) {
    std::vector<std::string> colors = {
        "\033[31m",  // Red
        "\033[33m",  // Yellow
        "\033[32m",  // Green
        "\033[36m",  // Cyan
        "\033[34m",  // Blue
        "\033[35m"   // Magenta
    };
    std::string reset = "\033[0m";

    int color_index = 0;
    for (char c : text) {
        if (std::isspace(c)) {
            std::cout << c;
        } else {
            std::cout << colors[color_index % colors.size()] << c << reset;
            color_index++;
        }
    }
    std::cout << std::endl;
}

void read_and_print(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string content = "";
        std::string line;
        while (std::getline(file, line)) {
            content += line;
        }
        rainbow_print("Content of " + filename + ": " + content);
        file.close();
    } else {
        std::cout << "File " << filename << " not found." << std::endl;
    }
}

int main() {
    rainbow_print("Hello, World!");
    read_and_print("bag");
    read_and_print("leaf");
    read_and_print("cup");
    return 0;
}
