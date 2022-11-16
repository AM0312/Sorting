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
    // int j = 0;
    // for (int i = 0; i <= largest; i++)
    // {
    //     while (freq[i] > 0)
    //     {
    //         arr[j] = i;
    //         freq[i]--;
    //         j++;
    //     }
    // }
    for(int i=1;i<=largest;i++)
        freq[i]+=freq[i-1];
    int temp[100];
    for(int i=n-1;i>=0;i--){
        temp[freq[arr[i]]]=arr[i];
        freq[arr[i]]-=1;
    }
    for(int i=0;i<n;i++)
        arr[i]=temp[i+1];
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