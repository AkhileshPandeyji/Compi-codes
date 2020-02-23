#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<int> a;
vector<int> b;

int input;

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        if(i==0){
            cin>>input;
            a.push_back(input);
        }
        else{
            cin>>input;
            b.push_back(input);
        }
    }
}

vector<int> result(2,0);

for(int k=0;k<a.size();k++){
    if(a[k]>b[k]){
        result[0]+=1;
    }
    else if(a[k]<b[k]){
        result[1]+=1;
    }
    else if(a[k]==b[k]){
        continue;
    }
}

for(int i=0;i<result.size();i++){
    cout<<result[i];
}

return 0;
}
