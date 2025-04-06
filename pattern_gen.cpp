#include <iostream>
#include <map> 
#include <vector>
#include <string>
#include <fstream> // Include for file handling

class PatternGenerator {
public:
    PatternGenerator() {
        patterns = {
            {'a', {"╔══╗", "║╔╗║", "║╚╝║", "║╔╗║", "║║║║", "╚╝╚╝"}},
            {'b', {"╔══╗─", "║╔╗║─", "║╚╝╚╗", "║╔═╗║", "║╚═╝║", "╚═══╝"}},
            {'c', {"╔══╗", "║╔═╝", "║║──", "║║──", "║╚═╗", "╚══╝"}},
            {'d', {"╔══╗─", "║╔╗╚╗", "║║╚╗║", "║║─║║", "║╚═╝║", "╚═══╝"}},
            {'e', {"╔═══╗", "║╔══╝", "║╚══╗", "║╔══╝", "║╚══╗", "╚═══╝"}},
            {'f', {"╔══╗", "║╔═╝", "║╚═╗", "║╔═╝", "║║──", "╚╝──"}},
            {'g', {"╔═══╗", "║╔══╝", "║║╔═╗", "║║╚╗║", "║╚═╝║", "╚═══╝"}},
            {'h', {"╔╗╔╗", "║║║║", "║╚╝║", "║╔╗║", "║║║║", "╚╝╚╝"}},
            {'i', {"╔══╗", "╚╗╔╝", "─║║─", "─║║─", "╔╝╚╗", "╚══╝"}},
            {'j', {"─╔══╗", "─╚╗╔╝", "──║║─", "╔╗║║─", "║╚╝╚╗", "╚═══╝"}},
            {'k', {"╔╗╔══╗", "║║║╔═╝", "║╚╝║──", "║╔╗║──", "║║║╚═╗", "╚╝╚══╝"}},
            {'l', {"╔╗──", "║║──", "║║──", "║║──", "║╚═╗", "╚══╝"}},
            {'m', {"╔╗──╔╗", "║║──║║", "║╚╗╔╝║", "║╔╗╔╗║", "║║╚╝║║", "╚╝──╚╝"}},
            {'n', {"╔╗─╔╗", "║╚═╝║", "║╔╗─║", "║║╚╗║", "║║─║║", "╚╝─╚╝"}},
            {'o', {"╔══╗", "║╔╗║", "║║║║", "║║║║", "║╚╝║", "╚══╝"}},
            {'p', {"╔═══╗", "║╔═╗║", "║╚═╝║", "║╔══╝", "║║───", "╚╝───"}},
            {'q', {"╔═══╗", "║╔═╗║", "║║─║║", "║║╔╝║", "║╚╝─║", "╚═══╝"}},
            {'r', {"╔═══╗", "║╔═╗║", "║╚═╝║", "║╔╗╔╝", "║║║║─", "╚╝╚╝─"}},
            {'s', {"╔══╗", "║╔═╝", "║╚═╗", "╚═╗║", "╔═╝║", "╚══╝"}},
            {'t', {"╔════╗", "╚═╗╔═╝", "──║║──", "──║║──", "──║║──", "──╚╝──"}},
            {'u', {"╔╗╔╗", "║║║║", "║║║║", "║║║║", "║╚╝║", "╚══╝"}},
            {'v', {"╔╗╔╗", "║║║║", "║║║║", "║╚╝║", "╚╗╔╝", "─╚╝─"}},
            {'w', {"╔╗╔╗╔╗", "║║║║║║", "║║║║║║", "║║║║║║", "║╚╝╚╝║", "╚═╝╚═╝"}},
            {'x', {"╔══╗╔══╗", "╚═╗║║╔═╝", "──║╚╝║──", "──║╔╗║──", "╔═╝║║╚═╗", "╚══╝╚══╝"}},
            {'y', {"╔╗╔╗", "║║║║", "║╚╝║", "╚═╗║", "─╔╝║", "─╚═╝"}},
            {'z', {"╔═══╗", "╚═╗─║", "─╔╝╔╝", "╔╝╔╝─", "║─╚═╗", "╚═══╝"}},
            {'1', {"─╔╗", "╔╝║", "╚╗║", "─║║", "─║║", "─╚╝"}},
            {'0', {"╔══╗", "║╔╗║", "║║║║", "║║║║", "║╚╝║", "╚══╝"}},
            {'2', {"╔══╗", "╚═╗║", "╔═╝║", "║╔═╝", "║╚═╗", "╚══╝"}},
            {'3', {"╔══╗", "╚═╗║", "╔═╝║", "╚═╗║", "╔═╝║", "╚══╝"}},
            {'4', {"╔╗╔╗", "║║║║", "║╚╝║", "╚═╗║", "──║║", "──╚╝"}},
            {'5', {"╔══╗", "║╔═╝", "║╚═╗", "╚═╗║", "╔═╝║", "╚══╝"}},
            {'6', {"╔══╗", "║╔═╝", "║╚═╗", "║╔╗║", "║╚╝║", "╚══╝"}},
            {'7', {"╔══╗", "╚═╗║", "──║║", "──║║", "──║║", "──╚╝"}},
            {'8', {"╔══╗", "║╔╗║", "║╚╝║", "║╔╗║", "║╚╝║", "╚══╝"}},
            {'9', {"╔══╗", "║╔╗║", "║╚╝║", "╚═╗║", "╔═╝║", "╚══╝"}},
            {' ', {"───", "───", "───", "───", "───", "───"}},
            {'.', {"──", "──", "──", "──", "╔╗", "╚╝"}},
            {',', {"──", "──", "──", "──", "╔╗", "╚╣"}},
            {'?', {"╔═╗", "╚╗║", "╔╝║", "║╔╝", "╔╗─", "╚╝─"}},
            {'!', {"╔╗", "║║", "║║", "╚╝", "╔╗", "╚╝"}},
            {'+', {"────", "─╔╗─", "╔╝╚╗", "╚╗╔╝", "─╚╝─", "────"}},
            {'(', {"╔═╗", "║╔╝", "║║─", "║║─", "║╚╗", "╚═╝"}},
            {')', {"╔═╗", "╚╗║", "─║║", "─║║", "╔╝║", "╚═╝"}},
            {' ', {"───", "───", "───", "───", "───", "───"}}
        };
    }

    std::string generatePatternSequence(const std::string& inputString) {
        std::string patternSequence;
        int maxLines = 0;

        // Split the input string by '*' to handle newlines
        std::vector<std::string> lines;
        std::string temp;
        for (char ch : inputString) {
            if (ch == '*') {
                lines.push_back(temp);
                temp.clear();
            } else {
                temp += ch;
            }
        }
        lines.push_back(temp); // Add the last line

        // Generate patterns for each line
        for (const std::string& line : lines) {
            int currentMaxLines = 0;
            for (char ch : line) {
                if (patterns.find(ch) != patterns.end()) {
                    if (patterns[ch].size() > currentMaxLines) {
                        currentMaxLines = patterns[ch].size();
                    }
                }
            }

            for (int i = 0; i < currentMaxLines; ++i) {
                for (char ch : line) {
                    if (patterns.find(ch) != patterns.end()) {
                        if (i < patterns[ch].size()) {
                            patternSequence += patterns[ch][i] + " ";
                        } else {
                            patternSequence += std::string(patterns[ch][0].length(), ' ') + " ";
                        }
                    }
                }
                patternSequence += "\n";
            }
        }

        return patternSequence;
    }

    void printPatternSequence(const std::string& inputString) {
        std::string patternSequence = generatePatternSequence(inputString);
        std::string result;
        for (char ch : patternSequence) {
            if (ch != ' ') {
                result += ch;
            }
        }
        std::cout << result;
    }

    void savePatternToFile(const std::string& inputString, const std::string& filename) {
        std::string patternSequence = generatePatternSequence(inputString);
        std::ofstream outputFile(filename);
        if (outputFile.is_open()) {
            outputFile << patternSequence;
            outputFile.close();
            std::cout << "Pattern saved to " << filename << std::endl;
        } else {
            std::cerr << "Error: Unable to save file." << std::endl;
        }
    }

private:
    std::map<char, std::vector<std::string>> patterns;
};

int main() {
    PatternGenerator patternGenerator;
    std::string inputString;
    std::cout << "Enter the pattern sequence (use '*' for newline): ";
    std::getline(std::cin, inputString);

    // Print the pattern to the console
    patternGenerator.printPatternSequence(inputString);

    // Ask the user if they want to save the pattern to a file
    std::string saveOption;
    std::cout << "\nDo you want to save this pattern to a file? (yes/no): ";
    std::getline(std::cin, saveOption);

    if (saveOption == "yes" || saveOption == "y") {
        std::string filename;
        std::cout << "Enter the filename to save (e.g., output.txt): ";
        std::getline(std::cin, filename);
        patternGenerator.savePatternToFile(inputString, filename);
    }

    return 0;
}
