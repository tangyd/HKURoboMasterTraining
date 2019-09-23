//Dhruv Aggarwal
#include<stdio.h>
enum myEnum
{
    ERR=0,
    SUCCESS=2,
    DONE=1
};
struct s
{
    int num;
    float *p;
    enum myEnum ef0;
};
int main()
{
    printf("Hello, I have created an enum and struct");
}
