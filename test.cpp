#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

bool check(vector<int> v,vector<int>counts){

bool flag=false;
int c[] = {1,1,1,1,1,1,1,1,1,1};

for(int i=0;i<v.size();i++){
    cout<<v[i]<<":";
}
cout<<endl;
for(int i=0;i<counts.size();i++){
    cout<<counts[i]<<":";
}
cout<<endl;


for(int i=0;i<counts.size();i++){
    if(counts[i]>=c[i]){
        flag=true;
    }
    else{
        flag=false;
        return flag;
    }
}

return flag;
}

string hackerrankInString(string s) {
char ch[]= {'h','a','c','k','e','r','r','a','n','k'};

vector<int> p;
vector<int>counts;
int count=0;
int n=10;
int pos=INT_MAX;


bool flag=false;

for(int i=0;i<n;i++){
 count=0;
 pos=INT_MAX;
 for(int j=0;j<s.length();j++){
    if(ch[i]==s.at(j)){
        count++;
        pos=j;
    }

 }
 if(pos==-1 || count==0){
    return string("NO");
 }
 counts.push_back(count);
 p.push_back(pos);
}
flag = check(p,counts);

if(flag){
    string str("YES");
    return str;
}
else{
    string str("NO");
    return str;
}
}

int main(){

string input;
string result;

getline(cin,input);
result=hackerrankInString(input);
cout<<result<<endl;

return 0;
}
