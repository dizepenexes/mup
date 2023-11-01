#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    float x, b, alpha;
    printf("Введіть значення x: ");
    scanf_s("%f", &x);
    printf("Введіть значення alpha: ");
    scanf_s("%f", &alpha);
    b = pow(cos(x), 2) + tan(M_PI/3) - sin(alpha - 27);
    printf("Результат: %f ", b);
}

