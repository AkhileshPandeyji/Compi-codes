#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

bool isPalindrome(string s){
    bool flag = false;
   for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--){
       if(s[i]==s[j]){
           flag = true;
       }
       else{
           flag = false;
           break;
       }
   }
   return flag;
}


int theLoveLetterMystery(string s) {
int count=0;
if(isPalindrome(s)){
    return 0;
}
for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--){
    if(s.at(i) != s.at(j)){
        if(s[i]>97)
        s[i]-=1;
        cout<<s<<endl;
        if(isPalindrome(s)){
            count++;
            break;
        }
        else{
            if(s[i]>97)
            s[i]+=1;
            if(s[j]>97)
            s[j]-=1;
            cout<<s<<endl;
            if(isPalindrome(s)){
                count++;
                break;
            }
        }

    }
}
return count;
}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
string input;
cin>>input;
int res = theLoveLetterMystery(input);
cout<<res<<endl;
}
return 0;
}
