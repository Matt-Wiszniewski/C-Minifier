# C++-Minifier

This is a simple minifier that I was able organize into a multiple files for modularity and redeadbility than a large file.

Requirements
==========

- GCC, Clang, MSVC, and Mingw.
- vscode or any other text editors


vscode Commands
==========

- `g++ main.cpp minifier.cpp input.cpp removeComment.cpp removeWhitespace.cpp -o myMinifier`
- `./myMinifier`

Example
==========
using `input.cpp`:

```
// input.cpp
#include <iostream>

/* multiline comment 
         example */


int input_main() {
    // single-line comment

    std::cout << "Hello, " /* inline comment */ << "World!\n";

    /* Another multiline comment 
         example */

    return 0;
}
```

ouput:
```
#include  <iostream> int input_main() { std::cout << "Hello, " << "World!\n"; return 0; 
```

Errors
==========

The problem is that the minification works, however I get an error with outputting it in the correct format in the `output.cpp` file. It should have the library on its own line and the input_main changing to main. If done correctly it will work without any issues.

Future Progress
==========

For future notice I will fix these issues as well as add more uses to the minifier such as remove dead code or variable renaming.





