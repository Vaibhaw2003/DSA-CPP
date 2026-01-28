// 00---TO PRINT "ABCD" IN PATTERN CODE BELOWE----

//#include<iostream>
//using namespace std;
//int main(){
// int i, j; // i= row ,j= col, k= *
// for ( i = 0; i < 6; i++)  //for row ke liye
// {
//     for ( j = 0; j < 6-i; j++)  // for spacing ke liye
//     {
//        cout<<" ";
//     }
//     for (char name = 'a'; name <'a' +(i-1); name++) // for printing *
//     {
//        cout<<name;
//     }
//     cout<<endl; 
// }

//  01--  TO PRINT 1
            //    12
            //   123
            //  1234  THISE Ptter code below--------

// int i, j,k; // i= row ,j= col, k= *
// for ( i = 0; i < 6; i++)  //for row ke liye
// {
//     for ( j = 0; j < 6-i; j++)  // for spacing ke liye
//     {
//        cout<<" ";
//     }
//     for ( j = 0; j <i; j++) // for printing *
//     {
//        cout<<j;
//     }
//     cout<<endl; 
// }


// 02--- TO PRINT      1
            //     22
            //    333
            //   4444  THISE PATTER CODE BELOW----
// int i, j,k; // i= row ,j= col, k= *
// for ( i = 0; i < 5; i++)  //for row ke liye
// {
//     for ( j = 0; j < 5-i; j++)  // for spacing ke liye
//     {
//        cout<<" ";
//     }
//     for ( k = 0; k < i; k++) // for printing *
//     {
//        cout<<i;
//     }
//     cout<<endl;
// }


// 03----  TO PRINT PYRAMID OF * ---------

// int i, j,k; // i= row ,j= col, k= *
// for ( i = 0; i < 11; i++)  //for row ke liye
// {
//     for ( j = 0; j < 11-i; j++)  // for spacing ke liye
//     {
//        cout<<" ";
//     }
//     for ( k = 0; k < i; k++) // for printing *
//     {
//        cout<<"*";
//     }
//     cout<<endl; 
// }


// 04----- TO PRINT * BY 5 -------
    // int i, j;

    // for ( i = 0; i < 6; i++)
    // {
    //    for ( j = 0; j < i-1; j++)
    //    {
    //        cout<<" *";
    //    }
    //    cout<<endl;
// }
//}


//TO PRINT TRANGULAR PYRAMID --------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = 1; k <=(2*i)-1; k++) // containts
//         {
//             cout<<"*";   
//         }
//         cout<<endl;
//     }
// }

//TO PRINT THE HOLO TRINGULAR PYRAMID -------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //rows
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = (2*i)-1; k >=1; k--) // contents
//         {
//            if (k==1||k==(2*i)-1 || i==n )
//              cout<<"*";
//              else
//              cout<<" ";
//         }
//         cout<<endl;
//     }
// }

//TO PRINT THE REVERSE HOLO TRINGULAR PYRAMID -------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = n; i >=1; i--) //rows
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = (2*i)-1; k >=1; k--) // contents
//         {
//            if (k==1||k==(2*i)-1 || i==n )
//              cout<<"*";
//              else
//              cout<<" ";
//         }
//         cout<<endl;
//     }
// }


//TO PRINT THE KITE LIKE PATTERN ------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = 1; k <=(2*i)-1; k++) // containts
//         {
//             if (k==1||k==(2*i)-1 || i==n )
//               cout<<"*";
//               else
//              cout<<" "; 
//         }
//          cout<<endl;
//     }
//     // for lower  

//         for (i= n-1;i>= 1; i--)
//         {
//             for (j = 1; j<=n-i ; j++)
//             {
//                 cout<<" ";
//             }
//             for (k = 1; k <=(2*i)-1; k++)
//             {
//                 if (k==1||k==(2*i)-1 || i==n )
//               cout<<"*";
//               else
//               cout<<" ";
//             }
//             cout<<endl;
//         }
//     }



// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i )-1; k++) {
//             cout <<"*";
//         }
//         cout << endl;
//     }
// }


//

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = 1; k <=(2*i)-1; k++) // containts
//         {
//             if (k==1||k==(2*i)-1)
//               cout<<"*";
//               else
//              cout<<" "; 
//         }
//          cout<<endl;
//     }
//     // for lower  

//         for (i= n-1;i>= 1; i--)
//         {
//             for (j = 1; j<=n-i ; j++)
//             {
//                 cout<<" ";
//             }
//             for (k = 1; k <=(2*i)-1; k++)
//             {
//                 if (k==1||k==(2*i)-1)
//               cout<<"*";
//               else
//               cout<<" ";
//             }
//             cout<<endl;
//         }
//     }

// TO PRINT DUBBLEP YRAMID PATTERN -----

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = 1; k <=(2*i)-1; k++) // containts
//         {
//             cout<<"*"; 
//         }
//          cout<<endl;
//     }
//     // for lower  

//         for (i= n-1;i>= 1; i--)
//         {
//             for (j = 1; j<=n-i ; j++)
//             {
//                 cout<<" ";
//             }
//             for (k = 1; k <=(2*i)-1; k++)
//             {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }


// TO PRINT SOLID DUBBLEP YRAMID SIDE BY SIDE PATTERN -----

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n-i; j++)//space
//         {
//               cout<<" ";
//         }
//         for ( k = 1; k <=(2*i)-1; k++) // containts
//         {
//             cout<<"*"; 
//         }
//         for ( j = 1; j <=2*(n-i); j++)//space between two pyramid
//         {
//               cout<<" ";
//         }
//          for ( k = 1; k <=(2*i)-1; k++) // containts
//         {
//             cout<<"*"; 
//         }
//          cout<<endl;
//     }
// }

//TO PRINT PYRAMID OF NUMBERS AND REVERSE OF PYRAMID -----

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter the no.of row : ";
    cin>>n;
    for ( i = n-1; i >=1; i--) //row
    {
        for ( j = 1; j <=n-i; j++)//space
        {
              cout<<" ";
        }
        for ( k = 1; k <=(2*i)-1; k++) // containts
        {
            cout<<i; 
        }
         cout<<endl;
    }
    // for lower  

        for (i= 1;i<= n-1; i++)
        {
            for (j = 1; j<=n-i ; j++)
            {
                cout<<" ";
            }
            for (k = 1; k <=(2*i)-1; k++)
            {
                cout<<i;
            }
            cout<<endl;
        }
    }
