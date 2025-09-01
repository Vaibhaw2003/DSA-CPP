#include<iostream>
using namespace std;

int main(){

// PRINT THE NUMBER IS PRIME OR NOT------

int n,i;

cout<<"enter the number : ";
cin>> n;

if (n<2)
{
   cout<<"not a prime number";
   return 0;
}

else {
    for ( i = 2; i <n ; i++)
    {
        if (n%i==0)
        {
            cout<<" not a prime number : ";
            return 0;
        }        
    } 
            cout<<" it is prime number: ";
            return 0;
}



    // --------05 TO PRINT THE FACTORIAL OF N NUMBER-------

// int n ,i, fact= 1;
// cout<<"enter the number: ";
// cin>>n;

// for ( i = 1; i <= n; i++)
// {
//     fact =fact*i;
//     cout<<fact<<" ";
// }



    //------- 04 SUM OF N NATURAL NUMBER --------

// int n, sum=0 ;

// cout<<"enter the number: ";
// cin>> n;

// for ( int i = 1; i <= n; i++)
// {

//     sum = sum+i ;
//    cout<<sum<<" ";
// }




    // --------01 = TO PRINT THE POWER OF NUMBER -------

// int n, pow ,i,num;

// cout<<"enter the number: ";
// cin>>n;

// cout<<"enter the power: ";
// cin>>pow;
// // num =n ;

// for ( i = 1; i <pow; i++)
// {
//    num =n *n ;
    
// }
// cout<<"power of number: "<<" "<<num;



      // ---------02 = TO PRINT THE TABLE OF ANY NUMBER : 

// int n, mul;
// cout<<"enter a nmber to print the table: ";
// cin>>n;
// for (int i = 1; i <=10; i++)
// {
//     /* code */mul=n*i;
//     cout<<n<<"x"<<i<<"="<<mul<<endl;
// }



     // ---------03 TO PRINT THE NUMBER DIFFRENCE OF 3 ----
     
// int n, i;
// for ( i = 1; i <=100; i=i+3)
// {
//     cout<<i<<" " ;  
// }
}