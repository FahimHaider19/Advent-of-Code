//https://adventofcode.com/2019/day/1#part2
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int x,sum=0;
    ifstream data;
    data.open("input\\day01.txt");
    while(data>>x){
        while(x>0){
            x = x/3-2;
            sum+=max(0,x);
        }
    }
    cout<<sum;
    return 0;
}
