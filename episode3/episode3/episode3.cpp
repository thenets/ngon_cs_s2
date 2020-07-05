#include <iostream>

int max(int a, int b) {
    return a > b ? a : b;
}

bool isLowercase(char c)
{
    if (c >= 'a' and c <= 'z')
        return true;
    return false;
}

bool isUppercase(char c)
{
    if (c >= 'A' and c <= 'Z')
        return true;
    return false;
}

bool isLetter(char c)
{
    if (isUppercase(c) or isLowercase(c))
        return true;
    return false;
}

char invertCase(char c)
{
    int alphabet_size = 'z' - 'a';
    int jump_size = 'a' - 'Z' + alphabet_size;

    if (isLowercase(c))
        return c - jump_size;

    if (isUppercase(c))
        return c + jump_size;
    
    return c;
}

int main()
{
    // Print the lowercase alphabet
    {
        char c = 'a';
        while (isLowercase(c))
        {
            std::cout << c;
            c++;
        }
        std::cout << "\n";
    }

    // Print the entire alphabet
    {
        char c{};
        while (c <= max('z', 'Z'))
        {
            if (isLetter(c))
                std::cout << invertCase(c);
            c++;
        }
        std::cout << "\n";
    }

    // Print the entire alphabet (optimized way)
    {
        char c = 'a';
        char end_lowercase = 'z' + 1;
        char end_uppercase = 'Z' + 1;

        while (c != end_uppercase)
        {
            if (c == end_lowercase)
                c = 'A';
            std::cout << c;
            c++;
        }
        std::cout << "\n";
    }
}
