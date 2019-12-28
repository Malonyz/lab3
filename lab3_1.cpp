#include<iostream>
using namespace std;
int main()
{
    int x=2,y;
    cout << "Enter y";
    cin >> y;
    while(x<50){
        cout << x << endl;
        x=x+y;
    }
    cout <<"Malony";
    return 0;
}