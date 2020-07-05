#include <iostream>

void debugChar(char c);
bool isLowercase(char c);

int max(int numberA, int numberB)
{
    int max = numberA > numberB ? numberA : numberB;

    return max;
}

void debugChar(char c)
{
    std::cout << c << " - " << int(c) << "\n";
}

bool isLowercase(char c)
{
    bool isLower = false;

    // a = 97
    // z = 122

    if (c >= 'a' and c <= 'z')
    {
        isLower = true;
    }

    //debugChar(c);

    return isLower;
}

char upper(char c)
{
    // A = 65
    // Z = 90
    // a = 97
    // z = 122

    if (not isLowercase(c)) {
        return c;
    }

    char uppercase;
    int alphabet_size = 'Z' - 'A';

    // Jump size between uppercase and lowercase chars
    int jump_size = 'a' - 'Z';

    uppercase = c - jump_size - alphabet_size;

    return uppercase;
}

int main()
{
    int biggerNumber = max(145, 90);
    std::cout << biggerNumber << "\n";

    std::cout << upper('a') << "\n";
    std::cout << upper('z') << "\n";
    std::cout << upper('A') << "\n";
    std::cout << upper('Z') << "\n";

    std::cout << "Hello World!\n";
}
