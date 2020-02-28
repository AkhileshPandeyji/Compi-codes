#include<iostream>
#include<string>
#include<math.h>


using namespace std;

int saveThePrisoner(int n, int m, int s) {
int loop;
int val=1;
int res;

if(m==1)
return s;

if(n==1)
return 1;

else if(m>n){
    loop = floor(m/n);

    if(m%n == 0)
    loop-=1;


    for(int i=0;i<loop;i++){
        val+=n;
    }

    res = s+(m-val);

    if(res>n)
    res = (s+(m-val))%n;

    return res;
}
else if(m<=n){
    res = s+(m-1);

    if(res>n)
    res = (s+(m-1))%n;

    return res;
}
else{
    return -1;
}
}


// 7 584440269 1

int main(){
int n;
cin>>n;
int x;
int y;
int z;
for(int i=0;i<n;i++){
cin>>x;
cin>>y;
cin>>z;
int res = saveThePrisoner(x,y,z);
cout<<res<<endl;
}

return 0;

}
