#include "minifier.h"
#include <regex>

std::string Minifier::removeWhitespace(const std::string& code) {
    return std::regex_replace(code, std::regex("\\s+"), " ");
}
