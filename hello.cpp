#include <iostream>
#include <fstream>
#include <string>

void read_and_print(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string content;
        // Read the entire file content.
        // For simplicity, we assume the content is on a single line or we just read line by line.
        // Given the previous files, they seem to be single lines.
        // Let's read the whole file.
        std::string line;
        std::string file_content = "";
        while (std::getline(file, line)) {
            file_content += line;
        }
        std::cout << "Content of " << filename << ": " << file_content << std::endl;
        file.close();
    } else {
        std::cout << "File " << filename << " not found." << std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    read_and_print("bag");
    read_and_print("leaf");
    read_and_print("cup");
    return 0;
}
