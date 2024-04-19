#include <iostream>
unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int number;
    std::cout << "Введіть число для обчислення факторіала: ";
    std::cin >> number;


    if (number < 0) 
    {
        std::cout << "Факторіал від'ємного числа не може бути обчислений!" << std::endl;
    }
    else 
{
        unsigned long long result = factorial(number);
        std::cout << "Факторіал числа " << number << " дорівнює " << result << std::endl;
    }

    return 0;
}