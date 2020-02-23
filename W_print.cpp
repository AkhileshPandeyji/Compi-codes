#include<iostream>

using namespace std;


int main(){
int n;
cin>>n;
int k = n/2;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(((j==0 || j==n-1) || (j==i || j+i == n-1) && k<=0)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    k-=1;
    cout<<endl;
}
return 0;
}
