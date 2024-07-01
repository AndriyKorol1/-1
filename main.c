#include <stdio.h>

int main() {SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double t1, t2, t3;

    printf("Введіть три значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double rate1 = 1 / t1;
    double rate2 = 1 / t2;
    double rate3 = 1 / t3;

    double combined_rate = rate1 + rate2 + rate3;
    double time_to_eat_pie = 1 / combined_rate;

    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time_to_eat_pie);

    return 0;
}
