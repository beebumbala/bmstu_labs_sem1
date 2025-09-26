#include <iostream>


int main() {
    using byte = unsigned char;
    std::pair<byte, byte> posA, posB;
    std::cout << "Enter a and b (sep by space): ";
    std::cin >> posA.first >> posA.second;
    std::cout << "Enter c and d (sep by space): ";
    std::cin >> posB.first >> posB.second;

    bool f_rook, f_bishop;

    // condition 1 (rook)
    if (posA.first == posB.first || posA.second == posB.second) {
        std::cout << "condition with rook is true" << std::endl;
        f_rook = true;
    } else {
        std::cout << "condition with rook is false" << std::endl;
        f_rook = false;
    }

    // condition 2 (bishop)
    if (posA.first + posA.second == posB.first + posB.second || posA.first - posA.second == posB.first - posB.second) {
        std::cout << "condition with bishop is true" << std::endl;
        f_bishop = true;
    } else {
        std::cout << "condition with bishop is false" << std::endl;
        f_bishop = false;
    }

    // condition 3 (king)
    if (abs(posA.first - posB.first) <= 1 && abs(posA.second - posB.second) <= 1) {
        std::cout << "condition with king is true" << std::endl;
    } else {
        std::cout << "condition with king is false" << std::endl;
    }

    // condition 4 (queen)
    if (f_rook ||  f_bishop) {
        std::cout << "condition with queen is true" << std::endl;
    } else {
        std::cout << "condition with queen is false" << std::endl;
    }

    // condition 5 (white pawn)

    // condition 5.0 (white pawn can do a move forward by 2 fields from the starting pos)
    std::cout << int(posA.second) << std::endl;
    if (posA.second == '2' && posB.second == '4' && posA.first == posB.first) {
        std::cout << "pawn can do a move forward by two fields from the start position" << std::endl;
    }
    else if (posA.second + 1 == posB.second && abs(posA.first - posB.first) <= 1) {
        // condition 5.1 (white pawn moves forward regularly)
        if (posA.first == posB.first) {
            std::cout << "pawn can do a regular move forward" << std::endl;
        }
        // condition 5.2 (white pawn captures diagonally)
        else {
            std::cout << "pawn can do a capturing move diagonally" << std::endl;
        }
    } else {
        std::cout << "condition with white pawn is false" << std::endl;
    }
    return 0;
}
