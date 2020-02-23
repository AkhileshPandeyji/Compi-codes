#include<iostream>
#include<vector>


using namespace std;

int firstFactor(vector<int> a){
    int val;
    bool flag=false;
    int result;
    while(true){
        val = a[a.size()-1];
        a.pop_back();
        for(int i=0;i<a.size();i++)
        {
          if(val%a[i]==0){
            flag=true;
          }
          else if(val%a[i]!=0){
            flag=false;
                break;
          }
        }
        if(flag){
            result=val;
            break;
        }
        else{
            continue;
        }
        if(a.empty())
        {
            break;
        }

    }
    return result;
}

int getTotalX(vector<int> a, vector<int> b) {
    int firstVal = firstFactor(a);
    int count=0;
    int times=1;
    int multi;
    bool flag=false;
    while(true){
        multi = firstVal*times;
        for(int i=0;i<b.size();i++){
         if(b[i]%multi==0){
            flag = true;
         }
         else if(b[i]%multi!=0){
            flag=false;
            break;
         }
        }
        if(flag){
            count++;
        }
        if(multi<=b[0]){
            break;
        }
        times++;
    }
	return count;
}


int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;

	vector<int> arr1;
	vector<int> arr2;
	int input;
	for(int i=0;i<n;i++){
		cin>>input;
		arr1.push_back(input);
	}
	for(int i=0;i<m;i++){
		cin>>input;
		arr2.push_back(input);
	}

	int result = getTotalX(arr1,arr2);
	cout<<result;

	return 0;
}
