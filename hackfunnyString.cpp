#include<iostream>
#include<string>
#include<string.h>

using namespace std;

string funnyString(string s) {
bool flag=false;
string rev;
string res;
for(int i=(s.length()-1);i>=0;i--){
    rev.push_back(s.at(i));
}
for(int i=0;i<s.length()-1;i++){
    int diff1 = abs(s.at(i) - s.at(i+1));
    int diff2 = abs(rev.at(i) - rev.at(i+1));
    if(diff1 == diff2){
        flag = true;
    }
    else{
        flag = false;
        break;
    }
    }

if(flag){
res="funny";
}
else{
res="not funny";
}
return res;
}


int main(){
string s;
getline(cin,s);
string res = funnyString(s);
cout<<res<<endl;
return 0;
}
