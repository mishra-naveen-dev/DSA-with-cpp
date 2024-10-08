// using an extra array
#include <iostream>
using namespace std;

// function to print array
void printArray(int ans[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

// function to reverse array using an auxiliar array

void reverseArray(int arr[], int n)
{
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[n - i - 1] = arr[i];
    }
    printArray(ans, n);
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}