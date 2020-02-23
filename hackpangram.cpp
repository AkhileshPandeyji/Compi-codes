#include<iostream>
#include<string>
#include<string.h>

using namespace std;

string pangrams(string s) {
bool flag ;
string res;
int asci;
char ch;
for(int i=97;i<=122;i++){
    flag = false;
    for(int j=0;j<s.length();j++){
       ch = s.at(j);
       if(isalpha(ch) && isupper(ch)){
        ch = tolower(ch);
       }
       asci=(int) ch;
       if(asci == i){
           flag=true;
           break;
       }
    }
    if(flag){
        continue;
    }
    else{
        break;
    }
}
if(flag){
res="pangram";
}
else{
res="not pangram";
}
return res;
}


int main(){
string s;
getline(cin,s);
string res = pangrams(s);
cout<<res<<endl;
return 0;
}
