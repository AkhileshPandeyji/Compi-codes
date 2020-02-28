#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

int alternatingCharacters(string s) {
int dels=0;
int i=0;
while(true){
if(i==s.length()-1)
break;
else{
 if(s.at(i) == s.at(i+1)){
s.erase(i,1);
dels++;
i-=1;
}
}
i++;
}
return dels;
}



int main(){
int n;
string s;
cin>>n;
for(int i=0;i<n;i++){
cin>>s;
int res = alternatingCharacters(s);
cout<<res<<endl;
}
return 0;
}
