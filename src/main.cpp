#include <iostream>
#include "utils.h" // Не забудьте создать этот заголовочный файл

int main() {
    int a = 5;
    int b = 3;

    std::cout << "Сложение: " << add(a, b) << std::endl;
    std::cout << "Вычитание: " << subtract(a, b) << std::endl;

    return 0;
}
