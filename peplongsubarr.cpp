#include<iostream>
#include<vector>

using namespace std;

int main(int argc,char* argv){

    int siz_arr;
    cin>>siz_arr;

    vector<int> vec;
    vector<int[]> vec2;
    int input;
    int arr[100];
    for(int i=0;i<siz_arr;i++){
        cin>>input;
        vec.push_back(input);
    }
    int k=0
    for(int i=0;i<siz_arr;i++){
            k=0;
        for(int j=i;j<siz_arr;j++){
            arr[k++] = vec[j];
        }
    vec2.push_back(arr);
    }
      for(int i=0;i<siz_arr;i++){
            k=0;
        for(int j=0;j<i;j++){
            arr[k++] = vec[j];
        }
    vec2.push_back(arr);
    }

    return 0;

}
