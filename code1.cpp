#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    float x, y, a;
    printf("Введіть число x: ");
    scanf_s("%f", &x);
    printf("Введіть число y: ");
    scanf_s("%f", &y);
    a = (10 + cos(pow(x, 2))) / (17 * x) + (fabs(5 * y - y / (1 + pow(x, 3) * y))) / (pow(x - pow(y, 2), 1/3));
    
    printf("Результат: %f ", a);
}
