#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5},
        arr2[] = {4, 3, 5, 2, 1}, n = 5;

    printf("%s", isSorted(arr, n) ? "True" : "False");
    printf("\n %s", isSorted(arr2, n) ? "True" : "False");
}