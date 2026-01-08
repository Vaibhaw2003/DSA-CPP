// #include <iostream>
// using namespace std;

// int main()
// {
//  int num;
//     cout<< "Enter a num:";
//     cin>>num;
    
//     for(int i= 1; i<=num ; i++){
//      if (i%2==0)
//      {
//         cout<< i <<endl;
//      }
//      else{}
//     }
// }
        


//------to print the sum of array------

// #include<iostream>
// using namespace std;
// int main(){
//    int a,i;
//    cout<<"enter the number : ";
//    cin>>a;

//    for ( i = 0; i <a; i++)
//    {
//       cout<<i<<" ";
//    }
//    cout<<endl;
// }



// ---------To print the sum of all the number of user-------

// #include<iostream>
// using namespace std;

// int main(){
//    int a ,i,pre, cur;
   
//    cout<<"enter the number you want to sum : ";
//    cin>>a;

//    for ( i = 0; i < a; i++)
//    {
//       pre = 0;
//       cur = pre + i;
//       int sum = cur+ i;
//       cout<<sum<<" ";
      
//    }cout<<endl;
   
// }


//  -------TO PRINT THE TABBLE OF N NUMBER-------
// #include<iostream>
// using namespace std;

// int main(){
//    int n, i;
//    cout<<" enter the n number : ";
//    cin>>n;

//    for ( i = 1; i <= 10; i++)
//    {
//       cout<<n*i<< " ";
//    }
   
// }


// -------TO PRINT THE PATTER-------

// #include<iostream>
// using namespace std;
// int main(){
//    int r,c,i;

//    for ( r = 1; r<=5; r++)
//    {
      
//       for ( c = 1; c <= r; c++)
//       {
//         cout<<c<<" ";
//       }
//       cout<<endl;    
//    }
// }

// TO print the pattern of *--------


// #include<iostream>
// using namespace std;
// int main(){
//     int j,i;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 5;j++)
//         {
//             /* code */cout<<"*"<<" ";
//         }
//         cout<<endl; 
//     } 
// }

// to print another * pattern--------
/*  
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for ( i = 0; i <5; i++)
    {
        for ( j= 0; j < 5; j++)
        {
            cout<<"@"<<" ";
        }
        cout<<endl;   
    }
}
*/


/*  TO PRINT THE TABLE OF N NUMBER MULTIPLIED BY ITSELF

#include<iostream>
using namespace std;

int main(){
    int num, i;

    cout<<"enter the number i will give you table : ";
    cin>> num;

    for ( i = 1; i <=10; i++)
    {
        cout<<num *i<<endl;
    }
    cout<<endl;
}

*/


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter how many multiples of 4 you want: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         cout << 4 * i << " ";
//     }
//     return 0;
// }

// TO PRINT ODD NUMBERS TILL N

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i;
//     cout<<"enter the number : ";
//     cin>>n;

//     for ( i = 1; i <=n; i++)
//     {
//         if (i%2!=0)
//         {
//             cout<<i<<" ";
//         }
        
//     }cout<<endl;
// }

// TO PRINT EVEN NUMBERS TILL N

// #include<iostream>
// using namespace std;
// int main(){
//     int i, n;
//     cout<<"enter the number : ";
//     cin>>n;
//     for ( i = 1; i <=n; i++)
//     {
//         if (i%2==0)
//         {
//             cout<<i<<"even number "<<endl;
//         }else{
//             cout<<"odd number"<<i<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){ 
//     int n, i, sum=0;
//     cout<<"enter the number : ";
//     cin>>n;

//     for ( i = 1; i <=n; i++)
//     {
//         sum = sum + i;
//     }
//     cout<<"the sum is : "<<sum<<endl;
// }

// #include<iostream> 
// using namespace std;
// int main(){
//     int n, i, fact=1;
//     cout<<"enter the number : ";
//     cin>>n; 
//     for ( i = 1; i <=n; i++)
//     {
//         fact = fact * i;
//     }
//     cout<<"the factorial is : "<<fact<<endl;
// }   

// #include <iostream>
// using namespace std;
// int main() {
//     int n, i;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
//     return 0;
// }   


#include <iostream>
using namespace std;
int main() {
    int n, i, fact = 1;
    cout<<"enter the number : ";
    cin>>n;
    for ( i = 1; i <= 10; i++)
    {
        fact = fact * i;
    }
    cout<<"the factorial is : "<<fact<<endl;
}

    




 
     
        

    
