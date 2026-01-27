// CPP program to demonstrate array
// An array is a collection of items stored at contiguous memory locations.

// #include<iostream>
// using namespace std;
// int main(){

//     int i;
//     int name[5]={1,2,3,4,5};

//     for (i=0; i<5; i++)
//     {
//         cout<<name[i]<<endl;
//     }
// }


// CPP program to demonstrate array initialization-------
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int a [3]={0};
//     cout<<a[0]<<endl;
// }


// CPP program to demonstrate array input and output-------

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int a[4]={};
//     cin>>a[0,1,2,3];
//     cout<<a[0,1,2,3]<<endl;
// }



// CPP program to demonstrate array access---------

// #include<iostream>
// using namespace std;
// int main(){
//     int name []={1,2,3,4,5};
//     cout<<name[2]<<endl;
// }


//printing the ararys------

// #include<iostream>
// using namespace std;
// int main(){
//     int name [4]={1,2,3,4};
//     for ( int i = 0; i < 4; i++)
//     {
//         cout<<name[i]<<endl;
//     } 
// }


// TO TAKE INPUT FROM THE USER AND PRINT THE ARRAY ELEMENTS-----

// #include <iostream>
// using namespace std;    
// int main(){
//     int arr[5];
//     cout<<"enter the elements of array : "<<endl;
//     for ( int i = 0; i < 5; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"the elements of array are : "<<endl;
//     for ( int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

// TO PRINT THE SUM OF ARRAY ELEMENTS-----

// #include <iostream>
// using namespace std;
// int main(){ 
//     int arr[5];
//     cout<<"enter the elements of array : "<<endl;
//     for ( int i = 0; i < 5; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"the elements of array are : "<<endl;
//     for ( int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

// TO PRINT THE MAXIMUM ELEMENT IN THE ARRAY-----
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] ={2,4,6,8,3};
//     int max = arr[0];
//     for ( int i = 1; i < 5; i++)
//     {
//         if (arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }cout<<"the maximum element in the array is : "<<max<<endl;
// }
    
// TO PRINT THE MINIMUM ELEMENT IN THE ARRAY-----

// #include <iostream>
// using namespace std;
// int main(){ 
//     int arr[5] ={2,4,6,8,3};
//     int min = arr[0];
//     for ( int i = 1; i < 5; i++)
//     {
//         if (arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }cout<<"the minimum element in the array is : "<<min<<endl;
// }


// TO FIND ELEMENT IS PRESENT IN THE ARRAY OR NOT---------

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] ={2,4,6,8,3};
//     int n;
//     cout<<"enter the element to be searched : "<<endl;
//     cin>>n;
//     bool found = false;
//     for ( int i = 0; i < 5; i++)
//     {
//         if (arr[i]==n)
//         {
//             found = true;
//             break;
//         }
//     }
//     if (found)
//     {
//         cout<<"element is present in the array "<<endl;
//     }
//     else
//     {
//         cout<<"element is not present in the array "<<endl;
//     }
// }


// TO FIND ELEMENT IN THE ARRAY -------

#include<iostream>
using namespace std;
int main(){
    int n,i;
    int arr[5]={23,24,55,24,22};
    cout<<"enter the element which you find :";
    cin>>n;
    bool fnd = false;
    for (i = 0; i < 5; i++)
    {
        if (arr[i]==n)
        {
            fnd = true;
            break;
        } 
    }
    cout<<"element is found : "<<arr[i]<<endl;
    cout<<"index of element is : "<<i<<endl;
    
}