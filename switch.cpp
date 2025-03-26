#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter number: " << endl;
    cin>> num;

    switch (num)
    {
    case 0:
        cout<< "Today is sunday" << endl;
        break;
    case 1:
        cout<< "Today is Monday" << endl;
        break;    
    case 2:
        cout<< "Today is Tuesday" << endl;
        break;
    case 3:
        cout<< "Today is Wednesday" << endl;
        break;  
    case 4:
        cout<< "Today is Thursday" << endl;
        break;  
    case 5:
        cout<< "Today is Friday" << endl;
        break; 
    case 6:
        cout<< "Today is Saturday" << endl;
        break;           
    default:
       cout<< "Invalid input" <<endl;
       break;
    }
    return 0;
}