#include<iostream>

using namespace std;

void space(int n){
for(int i=0;i<n;i++){
    cout<<" ";
}
}

int main(){

int n;
cin>>n;

int k = n/2;
int b = 1;
int low;

for(int i=0;i<n/2;i++){
    space(k);
    low = i+1;
    for(int j=k;j<n-k;j++){
      if(j == n/2){
        cout<<b;
        b+=2;
        low-=1;
      }
       else if(j<n/2){
        cout<<low;
        low+=1;
      }
      else if(j>n/2){
        cout<<low;
        low-=1;
      }
    }
    space(k);
    k-=1;
    cout<<endl;
}

low+=2;
for(int i=0;i<n;i++){
    if(i == n/2){
        cout<<b;
        b-=2;
        low-=1;
      }
    else if(i<n/2){
        cout<<low;
        low+=1;
      }
      else if(i>n/2){
        cout<<low;
        low-=1;
      }
}

cout<<endl;
for(int i=0;i<n/2;i++){
    k+=1;
    space(k);
    for(int j=k;j<n-k;j++){
        if(j == n/2){
        cout<<b;
        b-=2;
        low-=1;
      }
      else if(j<n/2){
        cout<<low;
        low+=1;
      }
      else if(j>n/2){
        cout<<low;
        low-=1;
      }
    }
    space(k);
    cout<<endl;

}
return 0;
}
