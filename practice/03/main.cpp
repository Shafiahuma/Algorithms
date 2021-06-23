#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;}
int partition (int A[],int p,int r){
    int x= A[r];
    int i=(p- 1);
    for (int j =p;j<=r-1;j++){
        if (A[j]<=x){
            i=i+1;
            swap(&A[i],&A[j]);}
    }
    swap(&A[i+1],&A[r]);
    return (i + 1);}
void quickSort(int A[], int p, int r){
    if (p<r){
        int q = partition(A,p,r);
        quickSort(A,p,q- 1);
        quickSort(A,q+1,r);}
}
void display(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;}
int main() {
    int n;
    double p;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }
    clock_t start = clock();
    cout << "start:"<<start << endl;
    cout << "Array before Sorting: ";
    display(arr, n);
    quickSort(arr, 0, n - 1);
    clock_t end = clock();
    cout <<"end:"<< end << endl;
    p = (double) ((double) (end - start) / 100.0);
    cout <<"Runtime:"<< p << endl;
    display(arr, n);
}