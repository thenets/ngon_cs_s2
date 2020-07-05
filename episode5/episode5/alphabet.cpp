#include <iostream>
#include "alphabet.h"

void alphabet::debug()
{
    std::cout << letter;
}

bool alphabet::_is_uppercase(char c)
{
    if (c >= 'A' and c <= 'Z')
        return true;
    return false;
}

bool alphabet::_is_lowercase(char c)
{
    if (c >= 'a' and c <= 'z')
        return true;
    return false;
}

bool alphabet::_is_letter(char c)
{
    if (_is_lowercase(c) or _is_uppercase(c))
        return true;
    return false;
}

char alphabet::_invert_case(char c)
{
    int alphabet_size = 'z' - 'a';
    int jump_size = 'a' - 'Z' + alphabet_size;

    if (_is_lowercase(c))
        return c - jump_size;

    if (_is_uppercase(c))
        return c + jump_size;

    return c;
}

alphabet::alphabet(char a_letter)
{
    set_letter(a_letter);
}

bool alphabet::make_uppercase()
{
    if (_is_lowercase(letter))
    {
        letter = _invert_case(letter);
        return true;
    }
    return false;
}

bool alphabet::next_letter()
{
    if (_is_letter(letter + 1))
    {
        set_letter(letter + 1);
        return true;
    }
    return false;
}

void alphabet::set_letter(char a_letter)
{
    if (_is_letter(a_letter)) {
        is_uppercase = _is_uppercase(a_letter);
    }
    else {
        is_uppercase = false;
    }

    letter = a_letter;
}
