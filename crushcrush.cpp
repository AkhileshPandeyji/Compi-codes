#include "climits"
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    long x,y;
    long n;
    int **q = new int*[Q];
    long input;
    cin>>n;
    cin>>Q;
    long q[Q][3];
    long a,b,value;
    long *arr=new long[n];
    for(long i=0;i<n;i++)
        arr[i]=0;
    long max =LONG_MIN;
    for(long i=0;i<Q;i++){
        q[i]=new int[3];
        for(long j=0;j<3;j++){
            cin>>q[i][j];
        }
    }
    for(long i=0;i<Q;i++)
    {
        x=q[i][0];
        y=q[i][1];
        for(long j=i+1;j<q;j++)
        {
            if(q[j][0]>=x&&q[j][0]<=y)
                x=q[j][0];
            if(q[j][1]>=x&&q[j][1]<=y)
                y=q[j][1];
        }

    }
    cout<<max;
    return 0;
}
