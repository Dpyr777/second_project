#include <iostream>
#include <cmath>


int main()
{
    int a{};
    int b{};
    std::cout << "Enter two number" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "\nEnter second number: ";
    std::cin >> b;
    char symbol{};
    std::cout << "\nEnter math operator: ";
    std::cin >> symbol;
    std::cout << std::endl;

    switch(symbol)
    {
        case '+':
            std::cout << "a + b = " << a + b << std::endl;
            break;
        case '-':
            std::cout << "a - b = " << a - b << std::endl;
            break;
        case '*':
            std::cout << "a * b = " << a * b << std::endl;
            break;
        case '/':
            std::cout << "a / b = " << a / b << std::endl;
            break;
        case '^':
            std::cout << "a ^ b = " << std::pow(a, b) << std::endl;
            break;
        default:
            std::cout << "a + b = " << a + b << std::endl;
    }


    return 0;
}
