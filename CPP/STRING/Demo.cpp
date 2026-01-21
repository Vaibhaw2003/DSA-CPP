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
#include<iostream>
#include<string>
using namespace std;
int main(){ 
    string name1 = "hello";
    string name2 = "hello";
    if(name1 == name2){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"strings are not equal"<<endl;
    
    } 
    for (int i = 0; i < name1.length(); i++)
    {
        cout << name1[i] << endl;
    }

    
}

