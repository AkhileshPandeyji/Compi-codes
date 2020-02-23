#include<iostream>
#include<vector>

using namespace std;

int xor_op(int a,int b){
    int temp=a^b;
    return temp;
}

int operation(int x,int y,int last_answer,int n)
{
int i_index = (xor_op(x,last_answer)%n);
return i_index;
}

int main()
{
    int n;
    int q;
    int last_answer=0;
    int output;
    int j_index;



    cin>>n;
    cin>>q;

    //dynamic array initialization
    vector< vector<int> > arr(q);
    vector< vector<int> > v(n);



    int x;
    int y;
    int ins;
    int input;

    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){
           cin>>input;
           arr[i].push_back(input);
        }
    }

    for(int i=0;i<q;i++)
        {
        for(int j=0;j<3;)
        {
            if(j==0)
            {
            ins = arr[i][j];
            j++;
            x=arr[i][j];
            j++;
            y=arr[i][j];
            j++;
            }

            }
            if(ins==1){
               output = operation(x,y,last_answer,n);
               v[output].push_back(y);
            }
            else if(ins==2){
                output = operation(x,y,last_answer,n);

                j_index = (y % (v[output].size()));
             last_answer = v[output][j_index];
                cout<<last_answer<<endl;
            }

        }



    return 0;
}
