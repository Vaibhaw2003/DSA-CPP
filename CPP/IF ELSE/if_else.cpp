// #include <iostream>
// using namespace std;

// int main()
// {
//     // int salary;

//     // cout << " enter your offer sallry: ";
//     // cin >> salary;
//     // cout<< salary<< endl;

//     // if (salary>=1000)
//     // {
//     //     cout<<" i accept you";
//     // }
//     // else {
//     //     cout<< "not accept ";
//     // }

//     float marks;
//     cout << "Enter yourr 12th boards marks: " << endl;
//     cin >> marks;
//     cout << "YOUR MARKS : " << marks << endl  ;

//     if (marks <= 33)
//     {
//         cout << "You Have been failed" << endl  << marks;
//     }
//     else
//     {
//         cout << "You Have been promoted" << endl << marks;
//     }
// }


// -------to check fail or pass -----

#include<iostream>
using namespace std;
 int main(){
    int mark;
    cout<<"enter the marks : ";
    cin>>mark;
    if (mark>=90)
    {
        /* code */cout<<"A+";
    }else if (mark>=60)
    {
        /* code */cout<<"B";
    }else if (mark>=40)
    {
        /* code */cout<<"c";
    }else{
        cout<<" fail";
    }
    
 }