#include <stdio.h>

#include "1.h"

float input()
{
    puts("Enter 10 integers: ");
    float ans = 0;
    for (int i = 0, x; i < 10; i++)
    {
        scanf("%d", &x);
        ans += x;
    }
    return ans / 10;
}

typedef enum
{
    ERR, SUCCESS, DONE
} flag;

typedef struct
{
    flag a;
    int b;
    float *c;
} useless;

int main()
{
    printf("%f\n", input());
}
