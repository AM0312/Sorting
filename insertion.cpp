#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int cur = arr[i];
        int prev = i - 1;
        while (prev > 0 and arr[prev] > cur)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = cur;
    }
}

int main()
{
    int arr[] = {-1, 0, 10, -5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}