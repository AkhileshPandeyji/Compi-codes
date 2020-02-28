#include<iostream>
#include<string>
#include<vector>
#include<math.h>


using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
vector<int> rotatedArr(a.size());
vector<int> queriedVals;

int truerot = k;
int n = a.size();

if(k>n)
k=k%n;

for(int i=k-1;i>=0;i--){
    rotatedArr[i]=a[a.size()-1];
    a.pop_back();
}
cout<<a.size()<<endl;

for(int i=0;i<n-k;i++){
    rotatedArr[i+k]=a[i];
}

for(int i=0;i<queries.size();i++){
    queriedVals.push_back(rotatedArr[queries[i]]);
}
return queriedVals;
}


// 7 584440269 1

int main(){

int n,r,qu;
cin>>n;
cin>>r;
cin>>qu;

int input;
vector<int> arr;
vector<int> q;

for(int i=0;i<n;i++){
  cin>>input;
  arr.push_back(input);
}

for(int i=0;i<qu;i++){
  cin>>input;
  q.push_back(input);
}
vector<int> res = circularArrayRotation(arr,r,q);
for(int i=0;i<res.size();i++){
  cout<<res[i]<<endl;
}

return 0;

}
