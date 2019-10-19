#include <stdio.h>

void f(char* c)
{
    printf("invoke f(char*)\n");
}

void f(int i)
{
    printf("invoke f(int)\n");
}

int main()
{
    f(0);
    f(nullptr);
    f((char*)0);
}