#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Введення значення x
    double x;
    cout << "x: ";
    cin >> x;

    // Обчислення функції за формулою
    double numerator_1 = 2 * pow(x, 2) - pow(sin(x), 2);
    double denominator_1 = cos(2 * x) + pow(x, 2);
    double part_1 = numerator_1 / denominator_1;

    double part_2 = (x + 1) / log(x);

    double y = part_1 - part_2;

    // Виведення результату
    cout << "y: " << y << endl;

    return 0;
}
