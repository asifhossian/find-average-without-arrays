#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0, values, average = 0;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\n\nEnter %d elements\n\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%f", &values);
        sum += values;
    }

    average = sum/n;

    printf("\nAverage of the entered numbers is =  %f", average);

    return 0;

}
