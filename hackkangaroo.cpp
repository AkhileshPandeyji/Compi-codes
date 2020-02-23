#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
int dk1 = x1;
int dk2 = x2;
int jumps=1;
int temp=abs(x2-x1);
int diff;
string result;

while(true){
    dk1=x1+jumps*v1;
    dk2=x2+jumps*v2;

    diff = abs(dk2-dk1);
    if(diff>=temp){
        result = "NO";
        break;
    }

    else if(diff<temp){
        jumps++;
        if(dk1==dk2){
            result="YES";
            break;
        }
    }
    temp=diff;
    }
    return result;
   }

int main(){
string result;
int x1;
int v1;
int x2;
int v2;

cin>>x1;
cin>>v1;
cin>>x2;
cin>>v2;

result = kangaroo(x1,v1,x2,v2);
cout<<result;

return 0;
}
