//make the array in two parts using pivot element and sort individual part .
//TC: O(n^2)
//OC: O(n) recursive stack
#include <bits/stdc++.h>
using namespace std;

void quick(int a[], int low, int high)
{
   if(low >= high) return;

   int pivot = a[high];
   int i = low - 1;
   for(int j = low; j < high; j++)
   {
     if(a[j] < pivot) 
     {
        i++;
        swap(a[j], a[i]);
     }
   }
   swap(a[i + 1], a[high]);
   quick(a, low, i);
   quick(a, i + 2, high);
}
int main()
{
    int a[5] = {5, 4, 1, 6, 9};
    quick(a, 0, 4);
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}