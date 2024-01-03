#ifndef MINIFIER_H
#define MINIFIER_H

#include <string>
using namespace std;

class Minifier {
public:
    //more functions below in the future
    static string removeComment(const string& code);
    static string removeWhitespace(const string& code);
    
    static string minify(const string& code);
};

#endif
