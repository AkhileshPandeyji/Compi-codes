#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

string reduceMe(string s)
{
bool flag = true;
int k=0;
while(flag){
char ch =s.at(k);
int i=k+1;
int c=1;
if(i==s.length()){
    break;
}
while(ch==s.at(i)){
       i++;
       c++;
    if(i==s.length()){
        break;
    }


}
if(c>1){
    if(c%2==0){
        s.erase(k,c);
    }
    else{
        s.erase(k,c-1);
    }
    flag=false;
}
else{
    k+=1;
}
}
string st =s;
cout<<st<<endl;
return st;
}

string superReducedString(string s) {
int min1 = s.length();
s = reduceMe(s);
if(s.length() == 0){
    string str("Empty String");
    return str;
}
else{
    int min2 = s.length();
    if(min2<min1){
        s = superReducedString(s);
        return s;
    }
    else if(min2>=min1){
        return s;
    }
}
return s;
}

int main(){

string input;
string result;

getline(cin,input);

result = superReducedString(input);
cout<<result;

return 0;
}
