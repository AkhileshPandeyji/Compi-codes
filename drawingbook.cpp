#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int pageCount(int n, int p) {
  int diff_end = abs(n-p);
  int diff_start = abs(0-p);
  int final_diff;
  bool flag;
  int pages;

  if(diff_start<diff_end){
      final_diff = diff_start;
      flag=true;
  }
  else if(diff_end<diff_start){
      final_diff = diff_end;
      flag=false;
  }

    if((final_diff==2 && flag==true && p%2==0) || (final_diff==1 && flag==false && p%2!=0)){
        pages=1;
    }
    else if(((final_diff==1 && flag==false && p%2==0)) || (final_diff==2 && p%2!=0 && flag==true)){
        pages=0;
    }
    else{
        pages=final_diff/2;
    }
    if(p==1){
        pages=0;
    }
    return pages;

}

int main(){

int x;
int y;

cin>>x;
cin>>y;

int res = pageCount(x,y);
cout<<res<<endl;


return 0;
}
