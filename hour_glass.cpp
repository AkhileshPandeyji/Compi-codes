#include<iostream>

using namespace std;

int maximum(int arr[],int size_arr)
{
int temp_max = arr[0];
for(int i=0;i<size_arr;i++){
    if(arr[i]>temp_max){
        temp_max=arr[i];
    }
}
return temp_max;
}


int main(){

int arr[100][100];

// input array size
int n;
cin>>n;
// hour glass size
int h ;
cin>>h;

int low_i = 0;
int high_i = h;
int low_j = 0;
int high_j = h;
int sum;
int sum_arr[100];
int l=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}

while(true){
        sum = 0;

    for(int i=low_i;i<high_i;i++){
        for(int j=low_j;j<high_j;j++){
            if(((i==(low_i+1)) && (j==low_j)) || ((i==(low_i+1)) && (j==(high_j-1)))){
                continue;
            }
            else{
                sum+=arr[i][j];
            }
        }
    }
    if(high_j<n){
        high_j+=1;
        low_j+=1;
    }
    else if (high_j>=n){
        high_j=h;
        low_j=0;
        high_i+=1;
        low_i+=1;
    }
    sum_arr[l] = sum;
    l++;
    if (high_i>n){
        break;
    }


}
int size_sum_arr = l;



for(int i=0;i<size_sum_arr;i++){
    cout<<sum_arr[i];
    if (i != (size_sum_arr-1)){
        cout<<":";
    }
    else{
        cout<<endl;
    }
}


cout<<maximum(sum_arr,size_sum_arr);

return 0;
}
