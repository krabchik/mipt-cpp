#include <iostream>


int main() {
    char c;
    while (1)
    {
        std::cin >> c;
        switch (c)
        {
        [[unlikely]] case '!':
        [[unlikely]] case '"':
        [[unlikely]] case '\'':
        [[unlikely]] case ',':
        [[unlikely]] case '-':
        [[unlikely]] case '.':
        [[unlikely]] case ':':
        [[unlikely]] case ';':
        [[unlikely]] case '?':
        [[unlikely]] case '`':
            std::cout << "punctuation" << std::endl;
            break;

        [[likely]] case '0':
        [[likely]] case '1':
        [[likely]] case '2':
        [[likely]] case '3':
        [[likely]] case '4':
        [[likely]] case '5':
        [[likely]] case '6':
        [[likely]] case '7':
        [[likely]] case '8':
        [[likely]] case '9':
        // [[likely]] case '0' ... '9':
            std::cout << "number" << std::endl;
            break;

        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        // [[likely]] case 'A' ... 'Z':
            std::cout << "uppercase letter" << std::endl;
            break;

        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        // [[likely]] case 'a' ... 'z':
            std::cout << "lowercase letter" << std::endl;
            break;

        [[unlikely]] default:
            std::cout << "other" << std::endl;
            break;
        }
    }

    return 0;
}