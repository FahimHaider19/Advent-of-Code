//https://adventofcode.com/2019/day/2#part2
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

    for(int noun=0;noun<100;noun++)
        for(int verb =0;verb<100;verb++){
            int resetArray[n];
            for(int i=0;i<n;i++) resetArray[i]=arr[i];
            resetArray[1]=noun;
            resetArray[2]=verb;

            for(int i=0;i<n;i+=4){
                if(resetArray[i]==99){continue;}
                else if(resetArray[i]==1) {resetArray[resetArray[i+3]] = resetArray[arr[i+1]]+resetArray[resetArray[i+2]];}
                else if(resetArray[i]==2) {resetArray[resetArray[i+3]] = resetArray[resetArray[i+1]]*resetArray[resetArray[i+2]];}

                if(resetArray[0]==19690720){
                    cout<<"Noun = "<<noun<<endl;
                    cout<<"Verb = "<<verb<<endl;
                    cout<<"Answer = "<<100*noun+verb<<endl;
                    return 0;
                }
            }
        }   
    return 0;
}

