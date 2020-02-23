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
for(int i=0;i<n/2;i++){
    space(k);
    for(int j=k;j<n-k;j++){
      cout<<"*";
    }
    space(k);
    k-=1;
    cout<<endl;
}


for(int i=0;i<n;i++){
cout<<"*";
}
cout<<endl;
for(int i=0;i<n/2;i++){
    k+=1;
    space(k);
    for(int j=k;j<n-k;j++){
        cout<<"*";
    }
    space(k);
    cout<<endl;

}

return 0;
}
