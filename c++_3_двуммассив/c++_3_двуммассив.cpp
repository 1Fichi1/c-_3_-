#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "Rus");
    const int rows = 3;
    const int cols = 5;
    double array[rows][cols];

    std::cout << "Введите элементы массива построчно, разделяя числа пробелом:" << std::endl;

    for (int i = 0; i < rows; ++i) {
        std::cout << "Строка " << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) {
            std::cin >> array[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        double sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += array[i][j];
        }
        double average = sum / cols;
        std::cout << "Среднее арифметическое строки " << i + 1 << ": " << std::fixed << std::setprecision(2) << average << std::endl;
    }

    return 0;
}
