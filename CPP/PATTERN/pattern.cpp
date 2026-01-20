// #include<iostream>
// using namespace std;

// int main()

// PATTERN  =   5
            //  54
            //  543
            //  5432
            //  54321 TO PRINT THISE PATTERN CODE BELOW------
//  {
// int i,j;
// for ( i = 1; i <=5; i++)
// {
//     for ( j = 5; j>=5-(i-1); j--)  //logic = 5-(row-1),
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
//  }
// }




// TO PRINT THISE PATTERN
    //   12345
    //   1234
    //   123
    //   12
    //   1    CODE BELOW---------
// {
// int i,j;
// for ( i = 1; i <=5; i++)
// {
//     for ( j = 1; j<= 5-(i-1); j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
//  }
// }




// TO PRINT  
    // *****
    // ****
    // ***
    // **
    // *    THISE TYPE OF PATTER CODE BELOWE------
// {
//     int i,j;
//     for ( i = 5; i >=1; i--)
//     {     
//         for ( j = 1; j <= i; j++)
//         {
//               cout<<'*'<<" ";
//         }
//             cout<<endl;      
//     }
// }



// TO PRINT THE 
    // a
    // bb
    // ccc
    // dddd
    // eeeee patter code belowe-------
// {  
// int row, col;
// for ( row = 1; row <=10; row++)
// {
//    char name = 'a'+ row-1;

//     for ( col = 1; col<=row; col++)
//     {
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }
// }




 // 05 TO PRINT THE 
    //   1
    //   22
    //   333
    //   4444
    //   55555    THIS PATTERN-------BELOW
// {
//      int row, col;
//    for ( row = 1; row <=5; row++)
//    {
//        for ( col = 1; col <= row; col++)      
//          {
//            cout<<row<<" ";
//        }        cout<<endl;
//             } 
//     }




// 06 TO PRINT THISE PATTER
    //   1
    //   21
    //   321
    //   4321
    //   54321     PTINT THISE PATTER BELLOW-------
// {
//   int row, col;

//     for ( row = 1; row <=5; row++)
//      {
//          for ( col = row; col >= 1; col--)
//          {
//              cout<<col<<" ";
//          }
//          cout<<endl;        
//      } 
//  }






// TO PRINT TRANGULAR * PYRAMID------

// {
//    int n=4;
//    for(int i=0; i<n; i++){
//     // for starting space in pyramid
//     for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//     }
//     //for stars 
//     for(int k=0; k<2*i+1; k++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }
// }




  // TO PRINT SAME NUMBER IN ALL LINE ----
// {

//     int i, j;
// for ( i = 1; i <=5; i++) //j is here the number of line
// {
//     for ( j = 1; j <=5; j++) //j is here the number of number
// {

//     cout<<i;
// }
// cout<<endl;
// }
// }





// TO PRINT THE 5*5 MATRIX NUMBER------

// {
//     int i, j;
// for ( i = 1; i <=5; i++) //j is here the number of line
// {
//     for ( j = 1; j <=5; j++) //j is here the number of number
// {
//     cout<<j;
// }
// cout<<endl;
// }
// }




    // PATTERN PRINTING OF 5*3---------

// for (int  j = 1; j <=3; j++){   // for number of rowj
//     for ( int i = 1; i <=5; i++)   // for number of colum
// {
//     cout<<"*"<<" ";
// }
// cout<<endl;
// }
// }


// TO PRINT SINGLE * -------

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"*";  
// }

// TO PRINT 5 * -------
// #include <iostream>
// using namespace std;
// int main(){
//     for ( int i = 1; i < 5; i++)
//     {
//         cout<<" *"<<endl;
//     }  
// }

// TO PRINT 5*5  * MATRIX-------
// #include <iostream>
// using namespace std;
// int main(){
//     for ( int i = 1; i <=5; i++)
//     {
//         for ( int j = 1; j <=5; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }  
// }

//TO PRINT THE TRIANGLE  * PATTERN-------

// #include <iostream>
// using namespace std;    
// int main(){
//     for ( int i = 1; i <=5; i++)
//     {
//         for ( int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// TO PRINT THE REVERSE TRIANGLE  * PATTERN------- 

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for ( int i = 1; i <=n; i++)
    {
        for ( int j = n; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}