#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
        largest = max(largest, arr[i]);
    int freq[largest + 1] = {0};
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 10, 2, 3, 5, 4};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}