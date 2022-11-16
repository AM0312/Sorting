#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    int temp[100];
    int k = 0;

    while (i <= mid and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        if (arr[j] < arr[i])
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= e)
        temp[k++] = arr[j++];
    k = 0;
    for (int i = s; i <= e; i++)
        arr[i] = temp[k++];
    return;
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[] = {10, -1, 0, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}