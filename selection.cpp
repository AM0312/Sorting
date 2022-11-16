#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minimum = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minimum])
                minimum = j;
        }
        if (minimum != i)
            swap(arr[minimum], arr[i]);
    }
}

int main()
{
    int arr[] = {-5, 1, 0, 2, 10, -1};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}