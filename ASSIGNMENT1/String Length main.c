#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    int length;

    printf("Enter your name: ");
    scanf("%s", name);

    length = strlen(name);

    printf("Your name is: %s\n", name);
    printf("The length of your name is: %d", length);

    return 0;
}

