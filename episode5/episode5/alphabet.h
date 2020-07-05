#pragma once

struct alphabet {
    char letter;
    bool is_uppercase;

    alphabet(char a_letter);
    bool make_uppercase();
    bool next_letter();
    void set_letter(char a_letter);

    void debug();

private:
    bool _is_uppercase(char c);
    bool _is_lowercase(char c);
    bool _is_letter(char c);
    char _invert_case(char c);
};
