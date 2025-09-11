
   // TO print numbers from 1 to 10 using while loop------

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=10){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }




// TO print multiplication table of a number using while loop------

// #include<iostream>
// using namespace std;

// int main(){

//   int n, i=1;
// cout<<"Enter the number: ";
// cin>>n;


//   while (i<=10)
//   {
//     cout<<i*n<<" ";
//     i++;

//   }
  
// }


// TO print all the factors of a number using while loop------

// #include<iostream>
// using namespace std;
// int main(){
// int n=10;
// int i=1;
// while (i<=n)
// {
// if (n%i==0)
// {
//   cout<<i<<endl;
// } i++;
// }
// }




    // TO print numbers from 10 to 1 using while loop------

    // #include<iostream>
    // using namespace std;

    // int main(){
    //     int i=10;
    //     while(i>=1){
    //         cout<<i<<endl;
    //         i--;
    //     }
    //     return 0;
    // }



      // TO check whether a number is even or odd------
    // #include<iostream>
    // using namespace std;

    // int main(){
    //   int n;
    //   cout<<"Enter a number: ";
    //   cin>>n;
    //   cout<<n<<endl;

    //  if (n%2==0)
    //  {
    //   cout<<"The number is even"<<endl;
    //  }
    //  else{
    //   cout<<"The number is odd"<<endl;
    //  }
    //   return 0;

    // }


// TO print numbers from 1 to n using do while loop------

// #include<iostream>
// using namespace std;

// int main(){
// int  n;
// cout<<"Enter a number: "; 
// cin>>n;
// cout<<n<<endl;
// int i=1;  // initialization
// do
// {
//  cout<<i<<" ";
//  i++;  // updation

// } while (i<=n); // condition break.

// }


// TO check whether a number is positive or negative using if else------

#include<iostream>
using namespace std;
int main(){

  int i;
  cout<<"Enter a number: ";
  cin>>i;
  cout<<i<<endl;
  switch (i)
  {
  case 1:
    cout<<"Hello"<<endl;
    break;
  case 2:
    cout<<"Hi"<<endl;
    break;
  
  default:
    cout<<"I am default"<<endl;
    break;
  }
}