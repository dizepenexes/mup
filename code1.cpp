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
    a = (19 + cos(pow(x, 6))) / (22 * x) + (fabs(45 * y - y / (13 + pow(x, 36) * y))) / (pow(x - pow(y, 24), 1/3));
    
    printf("Результат: %f ", a);
}
