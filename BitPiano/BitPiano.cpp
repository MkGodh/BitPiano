#include <iostream>
#include <string>
#include <sstream>

enum note {
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main()
{
    std::string accord;
    std::cout << "Please input accord: " << std::endl;
    std::cin >> accord;

    int accordMask = 0;
    for (char c : accord)
    {
        int noteIndex = c - '0';
        if (noteIndex > 7 || noteIndex < 1)
        {
            std::cerr << "Wrong number!" << std::endl;
            return 1;
        }
        int noteMask = 1 << (noteIndex - 1);
        accordMask |= noteMask;
    }

    if (accordMask & DO) {
        std::cout << "DO" << " ";
    }
    if (accordMask & RE) {
        std::cout << "RE" << " ";
    }
    if (accordMask & MI) {
        std::cout << "MI" << " ";
    }
    if (accordMask & FA) {
        std::cout << "FA" << " ";
    }
    if (accordMask & SOL) {
        std::cout << "SOL" << " ";
    }
    if (accordMask & LA) {
        std::cout << "LA" << " ";
    }
    if (accordMask & SI) {
        std::cout << "SI" << " ";
    }


    return 0;

}