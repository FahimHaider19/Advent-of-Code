//https://adventofcode.com/2019/day/1
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int x,sum=0;
    ifstream data;
    data.open("input\\day01.txt");
    while(data>>x){
        sum += x/3-2;
    }
    cout<<sum;
    return 0;
}
