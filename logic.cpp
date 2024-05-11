#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers (0 or 1 for each): ";
    std::cin >> a >> b >> c;

    int result1 = (!a && !b && !c) || (!a && b && !c) || (!a && b && c) || (a && b && c);
    std::cout << "Result using synthesis by '1': " << result1 << std::endl;

    int result0 = !((!a && !b && c) || (a && !b && !c) || (a && !b && c) || (a && b && !c));
    std::cout << "Result using synthesis by '0': " << result0 << std::endl;

    int minimizedResult = (!a && b) || (b && c) || (!a && !b && !c);
    std::cout << "Result using minimized expression: " << minimizedResult << std::endl;

    return 0;
}
