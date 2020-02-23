#include<iostream>
#include<string>

using namespace std;

string caesarCipher(string s, int k)
{
string val;
for(int i=0;i<s.length();i++){
    char ch = s.at(i);
    int asci = (int) ch;
    if(k>=26){
        k%=26;
    }
    int rot_asci = asci;
    if(isalpha(ch)){
        if(asci>=65 && asci<=90){
            rot_asci = asci+k;
            if(rot_asci>90){
                rot_asci=65+(rot_asci-90);
                rot_asci-=1;
            }
        }
        else if(asci>=97 && asci<=122){
             rot_asci = asci+k;
             if(rot_asci>122){
                rot_asci=97+(rot_asci-122);
                rot_asci-=1;
            }
        }
    }
    char rotch = (char) rot_asci;
    val.push_back(rotch);

}
return val;
}


int main(){
int n;
int k;
string s;
cin>>n;
cin>>s;
cin>>k;
string res = caesarCipher(s,k);
cout<<res<<endl;
return 0;
}
