#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << " entera num to check pos neg or 0: ";
    cin >> num;
    cout<< num<< endl;

    if (num>0)
    {
        cout<<"Positive";
    }
    else if (num == 0){
        cout<< "Equal to 0";
    }
    else
    cout<<"Negative";

}