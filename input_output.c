#include <stdio.h> //standerdInputOutput function

int main()
{

    // int num = 20;
    // float num2 = 23.23;
    // double num3 = 20.22343;
    // char name = 'flparvez';

    int num;
    float num2;
    double num3;
    char name;

    // printf("Enter Integer Number: ");
    // scanf("%d", &num);

    // printf("Enter Float Number: ");

    // scanf("%f", &num2);

    // printf("Enter Double Number: ");

    // scanf("%lf", &num3);

    // printf("Enter Your Character Name: ");

    // scanf(" %c", &name);

    // Get 2 value from input

    printf("Enter Your Character Name And Integer Number: ");

    scanf(" %c %d", &name, &num);

    // Get 2 output
    printf("Character Name: %c Integer Number %d ", name, num);

    printf("Integer Number: %d\n", num);
    printf("Float Number: %f\n", num2);
    printf("Double Number: %lf\n", num3);
    // printf("Name: %c\n", name);

    // Ascii Test
    printf("Name: %d\n", name);

    // printf("Int: %d Float: %f Double: %lf Char: %c ", num, num2, num3, name);

    return 0;
}