#include <stdio.h>
int search(int[], int, int);
int main()
{
    int n, sv, res; // search value
    printf("Enter The Size Of Array\n");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter The Elements Of Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Search value\n");
    scanf("%d", &sv);
    res = search(arr, n, sv);
    if (res == -1)
        printf("Element %d Is Not Found In The Array", sv);
    else
        printf("Element %d is Found At index %d", sv, res);
}
int search(int arr[], int n, int sv)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == sv)
        {
            return i;
            break;
        }
    }
    return -1;
}
