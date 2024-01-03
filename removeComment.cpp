#include "minifier.h"
#include <regex>

std::string Minifier::removeComment(const std::string& code) {
    return std::regex_replace(code, std::regex("//[^\n]*|/\\*(.|\\n)*?\\*/"), "");
}
