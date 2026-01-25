// ----------TO take string as input using char array-------------

// #include<iostream>
// using namespace std;
// int main(){

//     char name[20];
//     cout<<"enter your name"<<endl;  
//     cin>>name;
//     cout<<"your name is "<<name<<endl;
// }

//----------TO take string as input using string class-------------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){

//     string name;
//     cout<<"enter your name"<<endl;  
//     getline(cin,name);
//     cout<<"your name is "<<name<<endl;
// }

//----------TO concatenate two strings-------------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string name1 , name2;
//     cout<<"enter the first name"<<endl;
//     getline(cin,name1);
//     cout<<"enter the second name"<<endl;
//     getline(cin,name2);
//     cout<<name1 + " " + name2<<endl;
// }

// ---------TO find length of string-------------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter the name"<<endl;
//     getline(cin,name);
//     cout<<name.length()<<endl;
// }

// ---------TO find length of string-------------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){ 
//     string name;
//     cout<<"enter the name"<<endl;
//     getline(cin,name);
//     for(int i=0; i<name.length(); i++){
//         cout<<name[i]<<" at index: "<<i<<endl;
//     }
// }

// ---------TO compare two strings-------------

// #include<iostream>
// #include<string>    
// using namespace std;
// int main(){
//     string name1 = "hello";
//     string name2 = "world";
//     if(name1.compare(name2) == 0){
//         cout<<"strings are equal"<<endl;
//     }
//     else{
//         cout<<"strings are not equal"<<endl;
    
//     }
// }

//  TO compare two strings------------- 

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){ 
//     string name1 = "hello";
//     string name2 = "hello";
//     if(name1 == name2){
//         cout<<"strings are equal"<<endl;
//     }
//     else{
//         cout<<"strings are not equal"<<endl;
    
//     }
// }

// TO compare two strings-------------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){ 
//     string name1 = "hello";
//     string name2 = "hello";
//     if(name1 == name2){
//         cout<<"strings are equal"<<endl;
//     }
//     else{
//         cout<<"strings are not equal"<<endl;
    
//     } 
//     for (int i = 0; i < name1.length(); i++)
//     {
//         cout << name1[i] << endl;
//     }
// }

// TO FIND THE space OF STRING ----------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int count = 0;
//     cout<<"enter the name : ";
//     string name;
//     getline(cin,name);
   
//     for (int i = 0; i < name.length(); i++)
//     {
//         if (name[i]== ' ')
//         {
//              count++;
//         }   
//     }
//     cout<<"number of space is : "<< count;
// }

// TO PRINT THE * IN PLACE OF GAP--------

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int count =0;
//     string name;
//     cout<<"enter the name : ";
//     getline(cin, name);
//     for (int i = 0; i < name.length(); i++)
//     {
//         if (name[i]==' ')
//         {
//             count++;
//         } 
//     }
//     cout<<" the size of space is : "<< count;
// }


//TO CAPTILIZE THE GIVEN LAETTER------

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     char str[30] ;
//     cout<<"enter the name : ";
//     cin>>str;
//     for ( i = 0; str[i]!='\0'; i++)
//     {
//         if (str[i]>=97 && str[i]<=122)
//         {
//             str[i]= str[i]-32;
//         }  
//     }
//     cout<<"the letter is capitaal: "<<str; 
// }


//TO FIND THE LENGHT OF STRING -------

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int count = 0;
//     char str[30] ;
//     cout<<"enter the name : ";
//     cin>>str;
//     for ( i = 0; str[i]!='\0'; i++)
//     {
//         count++; 
//     }
//     cout<<count<<endl; 
// }

// TO CONVERT THE LETTER IN THE TITAL FORAMTE -------

// #include<iostream>
// using namespace std;
// int main(){
//     char str [30];
//     cout<<"enter the string: ";
//     cin>>str;
//     for (int i = 0; str[i]!='\0' ; i++)
//     {
//         if (i==0)
//         {
//             if (str[i]>=97 && str[i]<=122)
//             {
//                 str[i]=str[i]-32;
//             }
//         }
//         else if(str)
        
//     }
// }

//TO Print the pattern -------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k;
//     for ( i = 1; i <=5; i++) // row
//     {
//         for ( j = 1; j >=i-5; j--) // space
//        {
//          cout<<" ";
//        }
//        for ( k = 1; k <=(2*i)-1; k++) // content
//         {
//          cout<<k;
//         } cout<<endl; 
//     }  
// }

// TO PRINT THE ODD PATTER OF TRANGULAR -------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for ( i = 1; i < 10; i++)
//     {
//         if (i%2!=0)
//         {
//         for ( j =1; j < i; j++)
//         {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }   
// }

// TO PRINT THE TRIANGULAR SERISE OF ODD NUMBER ---------
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number of row : ";
    cin>>n;
    for ( i =1 ; i <=n; i++)
    {
        if (i%2==0)
        {
            for ( j = 1; j <=i; j++)
            {
                if (i>j)
                {
                    cout<<"*";
                }   
            }
        }cout<<endl;   
    } 
}




#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number of row : ";
    cin>>n;
    for ( i =1 ; i <=n; i++)
    {
        if (i%2==0)
        {
            for ( j = 1; j <=i; j++)
            {
                if (i>j)
                {
                    cout<<"7";
                }   
            }
        }cout<<endl;   
    } 
}