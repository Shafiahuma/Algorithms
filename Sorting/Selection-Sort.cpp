//By placing smallest element in right place
//TC: O(n^2)
//SC: O(1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {5, 4, 1, 9, 3};
    for(int i = 0; i < 5 - 1; i++)
    {
        int pos = i;
        for(int j = i + 1; j < 5; j++)
        {
            if(a[pos] > a[j])
            {
                pos = j;
            }
        }
        swap(a[pos], a[i]);
    }

    for(int i = 0; i < 5; i++)
       cout << a[i] << " ";
}