#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[101];
    int n;
    int i;
    int value;
    int position;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);

    for(i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("The current list of the array : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nInput the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the position where the value is to be inserted : ");
    scanf("%d", &position);

    for(i = n; i >= position - 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = value;

    n++;

    printf("After inserting the element, the new list is : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

