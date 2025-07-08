#include <stdio.h>
void accept(int a[100], int n)
{
    int i;

    printf("\n enter elements = \n ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void display(int a[], int n)
{
    int i;
    printf("\n\n array elements = \n");
    for (i = 0; i < n; i++)
        printf("\t%d", a[i]);
}

int min(int a[], int n)
{
    int i, min;
    min = a[0];
    for (i = 0; i < n; i++)
        min = (min > a[i]) ? a[i] : min;
    return min;
}

int max(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 0; i < n; i++)
        max = (max < a[i]) ? a[i] : max;
    return max;
}

void sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int search(int a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
            return 1;
    }
    return 0;
}

int sum(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

float avg(int a[], int n)
{
    float avg = 0;
    avg = (float)sum(a, n) / n;
    return avg;
}
int main()
{
    int n, a[100], ch, key;
    printf("\n\nenter size = \n");
    scanf("%d", &n);
    accept(a, n);

    while (1)
    {
        printf("\n 1.Display \n 2.Min\n 3.Max \n 4.Sort \n 5.Linear Search \n6.sum \n 7.avg \n 8.Exit \n enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display(a, n);
            break;
        case 2:
            printf("\n\n min element of array is %d ", min(a, n));
            break;
        case 3:
            printf("\n\n max element of array is %d ", max(a, n));
            break;
        case 4:
            sort(a, n);
            break;
        case 5:
            printf("\n\n enter key = \n");
            scanf("%d", &key);
            if (search(a, n, key))
                printf("\n element found \n");
            else
                printf("\n element not found \n");
            break;
        case 6:
            printf("\n\n sum of array elements = %d", sum(a, n));
            break;
        case 7:
            printf("\n\n average of array elements = %.2f", avg(a, n));
            break;
        case 8:
            return 0;
            break;
        default:
            printf("\n\n invalid choice ");
        }
    }
    return 0;
}