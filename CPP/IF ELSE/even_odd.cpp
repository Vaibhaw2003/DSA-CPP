// #include <iostream>
// using namespace std;

// int main(){
// int num;
   

//     cout << "Enter a number to check even or odd: " << endl;
//     cin >> num ;
//     cout << num  ;

//     if (num%2==0)
//     {
//         cout << "EVEN";
//     }
//     else
//     {
//         cout << "ODD";
//     }
// }



// Leap year program------

// #include<iostream>
// using namespace std;
// int main(){

//    int yr;
//     cout<<"Enter a year: ";
//     cin>>yr;
//     if (yr%400==0)
//     {
//         cout<<yr<<" is a leap year";
//     }
//     else if (yr%100!=0 && yr%4==0)  //&& is used for and operation
//     {
//         cout<<yr<<" is a leap year";
//     }

//     else
//     {
//         cout<<yr<<" is not a leap year";
//     }
    
// }

// Reverse integer program------

// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int x,ans = 0,rem;
//     while (x!=0)
//     {   
//           rem = x%10;
//        x/=10;
//        if (ans>INT_MAX/10 || ans<INT_MIN/10)
       
//        ans = ans*10 + rem;
//     }
//     return ans;  
// }


// power of two program------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<n;

// if(n<1)
//         return 0;

//         while(n!=1){
//               if(n%2==1)
//               return 0;
//               n=n/2;
//         }
//       return 1;
//     }



// --------TO PRINT IF ELSE PROGRAM-------

// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cout<<"enter the number: ";
//   cin>>a;
//   if (a%2==0)
//   {
//     /* code */cout<<"even number";
//   }else{
//     cout<<"odd";
//   }
  
// }


// ------To print vowel and consonat-----

// #include<iostream>
// using namespace std;
// int main(){
//   char lett;
//   cout<<"enter character";
//   cin>>lett;

//   if ( lett = "a" || lett = "e" || lett = " i" || lett = "o" || lett = " u")
//   {
//     /* code */ cout<<lett<<"vowel char"<<endl;
//   }else{
//     cout<<"consonent";
//   }
  

// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter an alphabet: ";
//     cin >> ch;

//     // Convert to lowercase to handle both upper and lower case letters
//     ch = tolower(ch);

//     if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabet
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             cout << ch << " is a vowel." ;
//         else
//             cout << ch << " is a consonant.";
//     } else {
//         cout << "Invalid input! Please enter an alphabet." ;
//     }

//     return 0;
// }


// to print age is under 18 or note--------

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter your age: ";
//     cin>>a;
//     if (a<18)
//     {
//         /* code */cout<<"your age is under 18..";
//     }else if (a=18)
//     {
//         /* code */cout<<"you are eligible";
//     }else{
//         cout<<"you are mature ";
//     }
// }

// to print the marks of the student.......

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the marks of the subject : ";
    cin>>m;
    if (m>=90)
    {
        /* code */cout<<"A++";
    }else if (m>=80)
    {
        /* code */cout<<"A";
    }else if (m>=60)
    {
        /* code */cout<<"B";
    }else{
        cout<<"fail";
    }  
}
