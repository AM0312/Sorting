#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int i = s - 1;
    int pivot = arr[e];
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quickSort(int arr[], int s, int e)
{
    if (s > e)
        return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {-1, 10, 5, 1, 0, 15};
    int s = 0;
    int n = sizeof(arr) / sizeof(int);
    int e = n - 1;
    quickSort(arr, s, e);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}