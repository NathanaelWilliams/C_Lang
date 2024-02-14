#include <stdio.h>

int main()
{
    double a, b, d;
    char c;
    scanf("%lf %c %lf", &a, &c, &b);
    switch (c)
    {
    case'+':d = a + b; break;
    case'-':d = a - b; break;
    case'*':d = a * b; break;
    case'/':d = a / b; break;
    case'%':
        a = (long)a;
        b = (long)b;
        d = (long)a % (long)b; break;
    }
    printf("%G %c %G = %G\n", a, c, b, d);
    return 0;
}
