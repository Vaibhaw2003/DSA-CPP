#include <iostream>
using namespace std;

int main(){
int num;
   

    cout << "Enter a number to check even or odd: " << endl;
    cin >> num ;
    cout << num  ;

    if (num%2==0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}