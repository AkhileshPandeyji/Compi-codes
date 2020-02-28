#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

string hackerrankInString(string s) {
char ch[]= {'h','a','c','k','e','r','r','a','n','k'};
int n=10;
int j=0;
bool flag=false;

for(int i=0;i<s.length();i++){
    if(j>=n)
    break;
    if(ch[j] == s.at(i)){
        flag=true;
        j++;
    }
    else{
        flag=false;
    }
}
if(j<n){
    flag=false;
}
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
int n;
cin>>n;
for(int i=0;i<n;i++){
 string input;
cin>>input;
string res = hackerrankInString(input);
cout<<res<<endl;

}
return 0;
}
