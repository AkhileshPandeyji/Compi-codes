/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in your array.

For example, the length of your array of zeros . Your list of queries is as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indexes  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is 10 after all operations are performed.
*/

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;


int main()
{

long n;
long q;
long input;

cin>>n;
cin>>q;

if ((n>pow(10,7) )|| n<3 ){
    return 0;
}
if (q<1 || (q>(2*pow(10,5)))){
    return 0;
}

long a,b,value;

vector<long> arr(n,0);
long max =LONG_MIN;
for(long i=0;i<q;i++){
    for(long j=0;j<3;){
        cin>>a;
        j++;
        cin>>b;
        j++;
        cin>>value;
        j++;
    }
    if((a>=1 || a<=n)&&(a<=b)&&(b>=1 || b<=n)&& (value>=0 || value<=pow(10,9) )){
     for(long k=a;k<=b;k++){
        arr[k-1]+=value;
        if(arr[k-1]>max)
            max=arr[k-1];
    }
    }
    else{
        continue;
    }


}



 for(long k=0;k<arr.size();k++){
        if(arr[k]>max){
            max=arr[k];
        }

    }

cout<<max;


return 0;
}
