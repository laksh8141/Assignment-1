#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;
    printf("The average is: %.2f\n", average);
    return 0;
}
