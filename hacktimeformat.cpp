#include <iostream>
#include <string>
#include<stdlib.h>
#include<cassert>
#include<sstream>

using namespace std;


string timeConversion(string s) {

string result;
char buffer[100];
string hour_str = s.substr(0,2);
int hours = atoi(s.substr(0,2).c_str());

string mins = s.substr(3,2);
string secs = s.substr(6,2);
string period = s.substr(8,2);

if(period == "AM"){
    if(hours<12){
      result=hour_str+":"+mins+":"+secs;
    }
    else if(hours==12){
        result="00:"+mins+":"+secs;

    }
}
else if(period == "PM"){
    if(hours<12){
    hours+=12;
    itoa(hours,buffer,10);
    result = string(buffer)+":"+mins+":"+secs;
    }
    else if(hours==12){
        result="12:"+mins+":"+secs;

    }
}

return result;
}

int main()
{

    string s;
    cin>>s;
    string result = timeConversion(s);
    cout << result << "\n";

    return 0;
}
