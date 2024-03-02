
#include <stdio.h>
int main()
{
    // Arithmetic Operator
    int f = 67, g = 13, h;
    h = f - g;
    printf(" c= - : %d\n", h);
    h = f + g;

    printf(" c = + : %d\n", h);

    h = f / g;

    printf(" c= / : %d\n", h);
    h = f % g;

    printf(" c = % : %d\n", h);

    printf("Arithmetic Operator End \n");

    // Increment and decrement operators

    // int a = 999, b = 23;
    // float c = 10.5, d = 100.5;

    // printf("increment ++a = %d \n", ++a);
    // printf("decrement --b = %d \n", --b);
    // printf("increment ++c = %f \n", ++c);
    // printf("decrement --d = %f \n", --d);

    // printf("Increment Decrement Operator End \n");

    // C Assignment Operators start

    int y = 5, x;

    x = y; // y is 5
    printf("x = %d\n", x);
    x += y; // x is 10
    printf("x = %d\n", x);
    x -= y; // x is 5
    printf("x = %d\n", x);
    x *= y; // x is 25
    printf("x = %d\n", x);
    x /= y; // x is 5
    printf("x = %d\n", x);
    x %= y; // x = 0
    printf("x = %d\n", x);

    printf("C Assignment Operators End \n");

    // relational operators start
    int p = 5, q = 5, t = 10;

    printf("%d == %d is %d \n", p, q, p == q);
    printf("%d == %d is %d \n", p, t, p == t);
    printf("%d > %d is %d \n", p, q, p > q);
    printf("%d > %d is %d \n", p, t, p > t);
    printf("%d < %d is %d \n", p, q, p < q);
    printf("%d < %d is %d \n", p, t, p < t);
    printf("%d != %d is %d \n", p, q, p != q);
    printf("%d != %d is %d \n", p, t, p != t);
    printf("%d >= %d is %d \n", p, q, p >= q);
    printf("%d >= %d is %d \n", p, t, p >= t);
    printf("%d <= %d is %d \n", p, q, p <= q);
    printf("%d <= %d is %d \n", p, t, p <= t);

    printf("C Relational Operators End \n");

    // Logical Operators

    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    // The sizeof operator

    int m;
    float n;
    double o;
    char d;
    printf("Size of int=%lu bytes\n", sizeof(m));
    printf("Size of float=%lu bytes\n", sizeof(n));
    printf("Size of double=%lu bytes\n", sizeof(o));
    printf("Size of char=%lu byte\n", sizeof(d));

    printf("C The sizeof operator End \n");

    return 0;
}