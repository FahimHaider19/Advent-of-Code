//https://adventofcode.com/2019/day/2
#include <iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    ifstream data;
    data.open("input\\day02.txt");
    data>>str;
    stringstream s(str);
    int n=count(str.begin(),str.end(),',');
    int arr[n];
    for(int i,index=0;s>>i;){
        arr[index++]=i;
        if(s.peek()==',') s.ignore();
    }

    arr[1]=12;
    arr[2]=2;

    for(int i=0;i<n;i+=4){
        if(arr[i]==99){continue;}
        else if(arr[i]==1) {arr[arr[i+3]] = arr[arr[i+1]]+arr[arr[i+2]];}
        else if(arr[i]==2) {arr[arr[i+3]] = arr[arr[i+1]]*arr[arr[i+2]];}
    }
    cout<<arr[0]<<endl;
    return 0;
}
