#include<iostream>
#include<vector>


using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
vector<int> v;
int count=0;
for(int i=0;i<queries.size();i++){
    count=0;
    for(int j=0;j<strings.size();j++){
        if(queries[i] == strings[j]){
            count++;
        }
    }
    v.push_back(count);
}

return v;
}

int main()
{
    vector<string> strings;
    vector<string> queries;
    vector<int> v;
    int n;
    int m;
    cin>>n;
    cin>>m;
    string input;

    for(int i=0;i<n;i++){
       cin>>input;
       strings.push_back(input);
    }
    for(int i=0;i<m;i++){
        cin>>input;
        queries.push_back(input);
    }

    v = matchingStrings(strings,queries);

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    return 0;
}
