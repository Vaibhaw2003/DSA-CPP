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

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = n-1; i >=1; i--) //row
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

//         for (i= 1;i<= n-1; i++)
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


//TO PRINT HOLLOW DIAMOND PATTERN --------

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

//TO PRINT HOLLOW DIAMOND PATTERN WITHOUT SPACE IN BETWEEN --------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=i; j++)//space
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
//             for (j = 1; j<=i ; j++)
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

//TO PRINT HOLLOW SQUARE BAUNDARY WITH INSIDE PRAMIDE --------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n; j++)//space
//         {
//               if (i==1 || j==1 || i==n)
//               cout<<"*";
//               else
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
//             for (j = 1; j<=n ; j++)
//             {
//                 if (i==1 || j==1 || i==n)
//               cout<<"*";
//               else
//               cout<<" ";
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

//TO PRINT HOLLOW SQUARE BAUNDARY WITH INSIDE INVERTED PRAMIDE --------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = n; i >=1; i--) //row
//     {
//         for ( j = 1; j <=n; j++)//space
//         {
//               if (i==1 || j==1 || i==n)
//               cout<<"*";
//               else
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

//         for (i= 2;i<= n; i++)
//         {
//             for (j = 1; j<=n ; j++)
//             {
//                 if (i==1 || j==1 || i==n)
//               cout<<"*";
//               else
//               cout<<" ";
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

//TO PRINT THE HOLLOW SQUARE PATTERN -----

// #include<iostream>
// using namespace std;    
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 0; i < n; i++)
//     {
//         if (i==0||i==n-1)
//         {
//             for ( j = 0; j < n; j++)
//             {
//                 cout<<"* ";
//             }
//             cout<<endl;
//         }
//         else{
//             for ( j = 0; j < n; j++)
//             {
//                 if (j==0||j==n-1)
//                 {
//                     cout<<"* ";
//                 }
//                 else
//                 {
//                     cout<<"  ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// }

//TO PRINT THE ADD SYMBOL PATTERN ----------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n; j++)//space
//         {
//               if (j==(n/2)+1 || i==(n/2)+1)
//               cout<<"* ";
//               else
//               cout<<"  ";
//         }
//          cout<<endl;
//     }
// }


//TO PRINT THE WAVE STAR PATTERN ----------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     cout<<"enter the no.of coloumn : ";
//     cin>>k;
//     for ( i = 1; i <=n; i++) //row
//     {
//        if (i%2!=0){
//         for ( j = 1; j <=k; j++)//space
//         {
//               if (j%4==1)
//               cout<<"* ";
//               else
//               cout<<"  ";
//         }
//        }
//          else
//        {
//         for ( j = 1; j <=k; j++)//space
//         {
//                 if (j%2!=0)
//                 cout<<"* ";
//                 else
//                 cout<<"  ";
//         }
         
//        }
//        cout<<endl;
//     }
// }

//TO PRINT THE DIAGONAL STAR PATTERN ----------
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter the no.of row : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++) //row
//     {
//         for ( j = 1; j <=n; j++)//space
//         {
//               if (j==i || j==(n-i)+1)
//               cout<<"* ";
//               else
//               cout<<"  ";
//         }
//          cout<<endl;
//     }
// }

//