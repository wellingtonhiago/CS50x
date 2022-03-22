#include <stdio.h>

int main(void)
{
    char answer[20];
    printf("what's your name?");
    scanf_s("%s", &answer);
    printf("hello, %s", answer);
    return 0;
}
