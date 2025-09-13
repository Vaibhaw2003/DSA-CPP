// Swapping of two numbers without using function

// #include<iostream>
// using namespace std;   

// int main(){
//     int a=10;
//     int b=20;
//     cout<<"Before swapping a="<<a<<" b="<<b<<endl;
//     //swapping logic
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<"After swapping a="<<a<<" b="<<b<<endl;

//     return 0;
// }

//creation of function & function call------

#include<iostream>
using namespace std;
//function declaration
void chacha(){
    cout<<"hello chacha"<<endl;
}

// int main(){
//     //function call
//     chacha();
//     return 0;
// }



#include<iostream>
using namespace std;

// //function declaration
// int sum(int a, int b){
//     int c = a+b; //function definition
//     return c; //returning value
// }


// int main(){
//     int n1,n2;
//     cout<<"Enter two numbers"<<endl;
//     cin>>n1>>n2;
//     //function call
//     sum(n1,n2); //actual parameters
//     cout<<"The sum is "<<sum(n1,n2)<<endl; //function call

//     chacha(); //function call
//     return 0;
// }



//function declaration of swapping----

void swap(int &a, int &b){  // passing by reference
    int c = a;
    a=b;
    b=c;
    
}

int main(){
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Before swapping n1="<<n1<<" n2="<<n2<<endl;
    //function call
    swap(n1,n2); //actual parameters
    cout<<"After swapping n1="<<n1<<" n2="<<n2<<endl; //function call
}