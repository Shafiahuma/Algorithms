#include <bits/stdc++.h>

#define mx 200000
using namespace std;
int A[mx + 1], B[mx + 1], C[mx + 1];

void display(int *array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void merge(int *array, int l, int m, int r) {
    int i, j, k, nl, nr;
    nl = m - l + 1;
    nr = r - m;
    int larr[nl], rarr[nr];
    for (i = 0; i < nl; i++)
        larr[i] = array[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < nl && j < nr) {
        if (larr[i] <= rarr[j]) {
            array[k] = larr[i];
            i++;
        } else {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < nl) {
        array[k] = larr[i];
        i++;
        k++;
    }
    while (j < nr) {
        array[k] = rarr[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int l, int r) {
    int m;
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = (p - 1);
    for (int j = p; j <= r - 1; j++) {
        if (A[j] <= x) {
            i = i + 1;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[r]);
    return (i + 1);
}

void quickSort(int A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main() {
    cout << "Comparing the complexities of sorting algorithn in tabular form." << endl;
    cout << "Sorting Algorithm   : Complexity  " << endl;
    int startTime, endTime, i_totalTime,m_totalTime,q_totalTime;
    int i, j, s, m, key, k, t1, t2, tf;
    for (k = 1; k <= mx; k++) {
        A[k] = rand();
        B[k] = A[k];
        C[k] = A[k];
    }
    //cout<<"Before insertion sort the array is:";
    //display(A,mx);
    startTime = time(NULL);
    for (j = 2; j < mx; j++) {
        key = A[j];
        i = j - 1;
        while ((i > 0) && (A[i] > key)) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
    //cout<<"After insertion sort the array is:";
    //display(A,mx);
    endTime = time(NULL);
    i_totalTime=endTime - startTime;
    cout << "Insertion Sort      : " << i_totalTime << " seconds." << endl;
    //cout<<"Before merge sort the array is:";
   // display(C,mx);
    startTime = time(NULL);
    mergeSort(C, 0, mx - 1);
    endTime = time(NULL);
    m_totalTime = endTime - startTime;
    //cout<<"After merge sort the array is:";
   // display(C,mx);
    cout << "Merge Sort          : " << m_totalTime << endl;
    startTime = time(NULL);
    quickSort(B, 0, mx - 1);
    endTime = time(NULL);
    q_totalTime = (endTime - startTime);
    cout << "Quick Sort          : " << q_totalTime << endl;
}
