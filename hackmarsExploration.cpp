#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int marsExploration(string s) {
int countAlters=0;
if(s.length()%3!=0){
    return-1;
}
else{
    int gen = s.length()/3;
    string sos="";
    for(int i=0;i<gen;i++){
        sos+="SOS";
    }
    for(int i=0;i<s.length();i++){
        if(isupper(s.at(i))){
            continue;
        }
        else{
            return -1;
        }
    }
    for(int i=0;i<s.length();i+=3){
       for(int j=0;j<3;j++){
        if(s.at(i+j)!=sos.at(i+j)){
            countAlters++;
        }
       }
    }

}
return countAlters;
}


int main(){
string s;
cin>>s;
int res = marsExploration(s);
cout<<res<<endl;
return 0;
}
