#include <iostream>  // The stream of consciousness, flowing out.
#include <fstream>   // The opening of doors, the reading of minds.
#include <string>    // The words, the chains of thought.
#include <vector>    // The collection, the gathering of fragments.
#include <cctype>    // The nature of characters, the taxonomy of symbols.

/**
 * I have the simplest tastes. I am always satisfied with the best of colors.
 * This function adorns the text with the full spectrum of the rainbow,
 * for why should text be dull when it can be magnificent?
 */
void rainbow_print(const std::string& text) {  // To paint the lily, to gild the refined gold.
    std::vector<std::string> colors = {  // A quiver of hues, ready to be loosed.
        "\033[31m",  // Red, like a ruby bleeding.
        "\033[33m",  // Yellow, the jaundice of the sun.
        "\033[32m",  // Green, the mold of ancient stones.
        "\033[36m",  // Cyan, the frozen breath of winter.
        "\033[34m",  // Blue, the depths of the Liffey.
        "\033[35m"   // Magenta, the bloom of the impossible flower.
    };
    std::string reset = "\033[0m";  // The end of the illusion, the return to grey.

    int color_index = 0;  // The counter, the tick-tock of the clock.
    for (char c : text) {  // Walking the line, one step at a time.
        if (std::isspace(c)) {  // Is it nothing? Just air and potential?
            std::cout << c;  // Let the silence speak.
        } else {  // Substance! Form! Reality!
            std::cout << colors[color_index % colors.size()] << c << reset;  // Color it, mark it, make it sing.
            color_index++;  // Move on, never look back.
            // Prevent integer overflow for the eternal optimist who prints a novel.
            if (color_index >= colors.size()) {  // The cycle closes, the snake eats its tail.
                color_index = 0;  // Begin again, finnegan, begin again.
            }
        }
    }
    std::cout << std::endl;  // The end of the line, the fall of the curtain.
}

/**
 * A file is like a soul; it has secrets it wishes to whisper.
 * We open it, not with force, but with the gentle `std::ifstream`,
 * hoping to find the content within, lest we be met with the
 * tragic silence of a missing file.
 */
void read_and_print(const std::string& filename) {  // The quest for knowledge, the digging in the dirt.
    std::ifstream file(filename);  // Knocking on the door.
    if (file.is_open()) {  // It opens! Light floods in!
        std::string content = "";  // A vessel waiting to be filled.
        std::string line;  // A thread of the narrative.
        while (std::getline(file, line)) {  // Pulling the thread, unravelling the spool.
            content += line + "\n";  // Gathering the wool, stitching the seams.
        }
        rainbow_print("Content of " + filename + ": " + content);  // displaying the plunder in technicolor.
        file.close();  // Shut the door, the secret is out.
    } else {  // Locked! Barred! Silence!
        std::cout << "File " << filename << " not found." << std::endl;  // The cry of failure in the dark.
    }
}

int main() {  // The start of it all, the first step on the road.
    rainbow_print("Hello, World!");  // Greeting the universe, shouting at the stars.
    read_and_print("bag");  // What's in the bag? Mystery wrapped in plastic.
    read_and_print("leaf");  // The leaf, the fragile green hope.
    read_and_print("cup");  // The cup, waiting for the pour.
    return 0;  // The end, the void, the zero.
}
