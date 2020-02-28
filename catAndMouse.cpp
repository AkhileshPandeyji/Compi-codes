#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

string catAndMouse(int x, int y, int z) {

string catA= "Cat A";
string catB="Cat B";
string mouseC="Mouse C";

int diffCatA = abs(z-x);
int diffCatB = abs(z-y);

if(diffCatA<diffCatB)
    return catA;
else if(diffCatA>diffCatB)
    return catB;
else if(diffCatA==diffCatB)
    return mouseC;
else
    return "error";

}

int main(){
int n;
int x;
int y;
int z;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<catAndMouse(x,y,z)<<endl;
}

return 0;
}
