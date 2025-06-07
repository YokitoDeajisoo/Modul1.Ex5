#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <clocale>

// Функція f(x, y)
double f(double x, double y) {
    double term1 = (x + y) / (x * x + x * y + y * y);
    double term2 = x / (1 + y * y);
    double term3 = y / (1 + x * x);
    return term1 + term2 + term3;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double u = 0, v = 0, z;
    int choice;

    do {
        // Виведення меню
        printf("\n=== МЕНЮ ===\n");
        printf("1. Ввести значення u та v\n");
        printf("2. Обчислити z = f(u, v) + f(u^2, v^2)\n");
        printf("3. Вийти\n");
        printf("Ваш вибiр: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Введiть u: ");
            scanf("%lf", &u);
            printf("Введiть v: ");
            scanf("%lf", &v);
            break;

        case 2:
            z = f(u, v) + f(u * u, v * v);
            printf("Результат: z = %.6lf\n", z);
            break;

        case 3:
            printf("Вихiд з програми.\n");
            break;

        default:
            printf("Невiрний вибiр. Спробуйте ще раз.\n");
        }

    } while (choice != 3);

    return 0;
}
