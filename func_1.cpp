#include<iostream>
using namespace std;

double myCube(double num)
{
    double answer;
    answer = num*num*num;
    return answer;
}

int main()
{
    double num;
    cout<< "Enter number: "<< endl;
    cin>> num;
    cout<< myCube(num)<<endl;
    return 0;
}