//TC: O(logN)
//SC: O(n)
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int left, int mid, int right)
{
    int n1 = mid - left + 1; // 2 - 0 + 1 (0, 1, 2);
    int n2 = right - mid; // (4 - 2) (3, 4)

    vector<int> leftAr(n1), rightAr(n2);

    for(int i = 0; i < n1; i++)
    {
        leftAr[i] = a[left + i];
    }

    for(int j = 0; j < n2; j++)
    {
        rightAr[j] = a[mid + j + 1];
    }

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2)
    {
        if(leftAr[i] <= rightAr[j]) 
        {
            a[k] = leftAr[i];
            i++;
        }
        else
        {
            a[k] = rightAr[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        a[k] = leftAr[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        a[k] = rightAr[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int left, int right) 0,4
{
    if(left >= right) return;
    int mid = left + (right - left) // 2; 0 + (4 - 0)/2
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}

int main()
{
    int a[5] = {5, 4, 1, 9, 3};
    mergeSort(a, 0, 4);
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}
