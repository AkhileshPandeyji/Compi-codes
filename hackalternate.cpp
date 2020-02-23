#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>

using namespace std;

bool validString(string s){
    bool flag = false;
    if(s.length() == 0){
        return flag;
    }
    if(s.length()==1){
        return true;
    }
    if(s.length()==2){
        return true;
    }
    for(int i=0;i<s.length()-2;i++){
        if(s.at(i) == s.at(i+2)){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}

string distinctChars(string s){
sort(s.begin(),s.end());
string val;
char ch = s.at(0);
val.push_back(ch);
for(int i=1;i<s.length();i++){
    if(ch != s.at(i)){
        ch=s.at(i);
        val.push_back(ch);
    }
}
return val;
}

string removeChar(char ch,string s){
    string val;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!=ch){
            val.push_back(s.at(i));
        }
    }
    return val;
}

int alternate(string s) {
int maxLen = 0;
string dis = distinctChars(s);
string str=s;
for(int i=0;i<dis.length();i++){
for(int j=i+1;j<dis.length();j++){
for(int k=0;k<dis.length();k++){
    if(k==i || k==j){
        continue;
    }
    else{
        str =removeChar(dis.at(k),str);
    }
}
if(validString(str)){
if(str.length()>=maxLen){
maxLen = str.length();
}
}
str=s;

}
}
return maxLen;
}

int main(){

string input;
int result;


getline(cin,input);
result=alternate(input);
cout<<result<<endl;

return 0;
}
