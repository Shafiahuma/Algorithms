//TC: O(n^2)
//SC: O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {5, 3, 1, 9, 2};
    for(int i = 0; i < 5 - 1; i++)
    {
        for(int j = 0; j < 5 - i - 1; j++)
        {
           if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
    for(int i = 0; i < 5; i++)
    {
       cout << a[i] << endl;
    }
}