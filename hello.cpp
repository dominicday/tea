#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

/**
 * I have the simplest tastes. I am always satisfied with the best of colors.
 * This function adorns the text with the full spectrum of the rainbow,
 * for why should text be dull when it can be magnificent?
 */
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
            // Prevent integer overflow for the eternal optimist who prints a novel.
            if (color_index >= colors.size()) {
                color_index = 0;
            }
        }
    }
    std::cout << std::endl;
}

/**
 * A file is like a soul; it has secrets it wishes to whisper.
 * We open it, not with force, but with the gentle `std::ifstream`,
 * hoping to find the content within, lest we be met with the
 * tragic silence of a missing file.
 */
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
