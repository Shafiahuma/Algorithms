#include<bits/stdc++.h>
using namespace std;
int A[200000];
int main(int argc,char *argv[]){
    int starttime,endtime,totaltime;
    int i,j,s,m,key,k,t1,t2,tf;
    for(k=1;k<200000;k++)
        A[k]=rand();
    starttime=time(NULL);
    for(j=2;j<200000;j++){
        key=A[j];
        i=j-1;
        while((i>0) && (A[i]>key)){
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
    for(j=0;j<200000;j++){
        cout<<A[j]<<" ";}
    endtime=time(NULL);
    totaltime=endtime-starttime;
    cout<<"Runtime: "<<totaltime<<" seconds";
    return 0;
}
