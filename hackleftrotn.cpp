#include<iostream>
#include<vector>


using namespace std;

int main(){
int n;
int lr;

cin>>n;
cin>>lr;

vector<int> v1;


int input;

for(int i=0;i<n;i++){
    cin>>input;
    v1.push_back(input);
}

for(int i=0;i<n;i++){
    if(i<lr){
        v1.push_back(v1[i]);
    }
}

for(int i=0;i<lr;i++){
    v1.erase(v1.begin());
}
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}


return 0;

}
