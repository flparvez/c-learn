#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 18;
    char section = 'A';
    float salary = 1000.34;
    double bonus = 102300.23400;
    // bool married = false;
    bool married = true;

    printf("age: %d\n", age);
    printf("section: %c\n", section);
    printf("salary: %f\n", salary);
    printf("bonus: %lf\n", bonus);
    printf("married: %d\n", married);
    return 0;
}