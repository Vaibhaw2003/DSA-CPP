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

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n;

if(n<1)
        return 0;

        while(n!=1){
              if(n%2==1)
              return 0;
              n=n/2;

        }
      return 1;
        
    }