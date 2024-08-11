//Nikhil
//23070123093
//entc b1
//experiment 6a
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}