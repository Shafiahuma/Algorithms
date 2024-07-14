//By placing particular value in the particular  place;
//TC: O(n^2)
//SC: O(1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[5] = {1, 2, 3, 4, 5};

   for(int i = 1; i < 5; i++)
   {
     for(int j = i; j > 0; j--)
     {
        if(a[j - 1] > a[j]) swap(a[j - 1], a[j]);
     }
   }

   for(int i = 0; i < 5; i++)
       cout << a[i] <<endl;
}