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

// #include<iostream>
// using namespace std;
// //function declaration
// void chacha(){
//     cout<<"hello chacha"<<endl;
// }

// int main(){
//     //function call
//     chacha();
//     return 0;
// }



// #include<iostream>
// using namespace std;

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

// void swap(int &a, int &b){  // passing by reference
//     int c = a;
//     a=b;
//     b=c;
    
// }

// int main(){
//     int n1,n2;
//     cout<<"Enter two numbers"<<endl;
//     cin>>n1>>n2;
//     cout<<"Before swapping n1="<<n1<<" n2="<<n2<<endl;
//     //function call
//     swap(n1,n2); //actual parameters
//     cout<<"After swapping n1="<<n1<<" n2="<<n2<<endl; //function call
// }



//ASCII value of character using function------

// #include<iostream>
// using namespace std;
// int main(){
//     char a;
//     cout<<"enter the caharacter"<<endl;
//     cin>>a;
//     cout<<"ASCII value of "<<a<<" is "<<int(a)<<endl;
//     return 0;
// }




//convert lowercase to uppercase using function-----

// #include<iostream>
// using namespace std;

// char convert(char name){
//     int ans = name-'a'+'A';
//     return ans;
// }


// int main(){
//     char name;
//     cout<<"enter the name"<<endl;
//     cin>>name;
//     cout<<convert (name)<<endl;
//     return 0;
// }


//count digits in a number using function-----

// #include<iostream>
// using namespace std;

// int coutDigits(int num){
//     int count=0;
//     while(num>0){
//         count++;
//         num=num/10;
//     }
//     return count;
// }


// int main(){
//     int num;
//     cout<<"enter the number"<<endl;
//     cin>>num;
//     cout<<coutDigits(num)<<endl;
//     return 0;
// }


//check whether the number is armstrong or not using function-----

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool armstrong(int num ,int digit){
//     int n = num ,ans = 0, rem;
//     while (n>0)
//     {
//         rem = n%10;
//         n=n/10;
//         ans = ans + pow(rem,digit); 
//     }
//     if (ans==num)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int countDigits(int num){
//     int count=0;
//     while (num>0)
//     {
//         count++;
//         num=num/10;
//     }
//     return count;   
// }
// int main(){
//     int num;
//     cout<<"enter the number"<<endl;
//     cin>>num;
//     int digit = countDigits(num);
//     cout<<armstrong(num,digit)<<endl;
//     return 0;
// }