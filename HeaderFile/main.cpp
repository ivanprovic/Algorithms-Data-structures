#include "add.h"
#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}

/* 
        --Angled brackets vs double quotes--
When we use angled brackets, we’re telling the preprocessor
that this is a header file we didn’t write ourselves.
The compiler will search for the header only in the directories specified by the include directories.
The include directories are configured as part of your project/IDE settings/compiler settings,
and typically default to the directories containing the header files that come with your compiler and/or OS.
The compiler will not search for the header file in your project’s source code directory.
When we use double-quotes, we’re telling the preprocessor that this is a header file that we wrote.
The compiler will first search for the header file in the current directory.
If it can’t find a matching header there, it will then search the include directories.
*/