#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

string sortAndDistinct(string s){
sort(s.begin(),s.end());
string res;
int i=0;
for(i=0;i<s.length()-1;i++){
    if(s.at(i)!=s.at(i+1)){
      res.push_back(s.at(i));
    }
}
res.push_back(s.at(i));
return res;
}

string intersect(string s1,string s2){
string s3;
set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(s3));
return s3;
}

int gemstones(vector<string> arr) {
string str1;
string str2;
str1=arr[0];
for(int i=0;i<arr.size()-1;i++){
    str2 = arr[i+1];
    str1 = sortAndDistinct(str1);
    str2 = sortAndDistinct(str2);
    str1 = intersect(str1,str2);
    if(str1.length()==0){
        break;
    }
}
return str1.length();
}


int main(){
string s;
int n;
vector<string> v;
cin>>n;
for(int i=0;i<n;i++){
    cin>>s;
    v.push_back(s);
}
int res = gemstones(v);
cout<<res<<endl;
return 0;
}
