#include "minifier.h"
#include <regex>

std::string Minifier::minify(const std::string& code) {
    std::string minifiedCode = removeComment(code);
    minifiedCode = removeWhitespace(minifiedCode);

    return minifiedCode;
}
