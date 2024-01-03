#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>

#include "minifier.h"

int main() {
    std::ifstream inputFile("input.cpp");
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open Input File\n";
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string code = buffer.str();

    std::string minifiedCode = Minifier::minify(code);

    std::ofstream outputFile("output.cpp");
    if (!outputFile.is_open()) {
        std::cerr << "Unable to open Output File\n";
        return 1;
    }

    //this writes the minifiedCode into the output.cpp
    outputFile << minifiedCode;

    std::cout << "Minification completed. Check output.cpp\n";

    return 0;
}
