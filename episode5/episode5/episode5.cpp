#include <iostream>
#include "alphabet.h"

int main()
{
    // Lowercase
    {
        alphabet alpha('a');
        alpha.debug();
        while (alpha.letter != 'z')
        {
            alpha.next_letter();
            alpha.debug();
        }
        std::cout << "\n";
    }

    // Uppercase
    {
        alphabet alpha('a');
        alpha.make_uppercase();
        alpha.debug();
        while (alpha.letter != 'Z')
        {
            alpha.next_letter();
            alpha.debug();
        }
        std::cout << "\n";
    }

}
