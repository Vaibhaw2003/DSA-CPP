//SELECTION SORT ALGORITHM--------

/*  
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    //selection sort
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
    
}
*/

//binary search after selection sort--------
/*
#include <iostream>
using namespace std;
int main(){
    int i,j;
    int arr[6] = {29,10,14,37,13,25};
    for ( i = 0; i < 5; i++)
    {
        int index = i;
        for ( j = i+ 1; j <6; j++)
        {
            if (arr[j]< arr[index])
            {
                index = j;
            }   
        }   
        swap(arr[index], arr[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    } 
}
*/

//binary search after selection sort--------

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int arr[6] = {29,10,14,37,13,25};
//     for ( i = 0; i < 5; i++)
//     {
//         int index = i;
//         for ( j = i+ 1; j <6; j++)
//         {
//             if (arr[j]< arr[index])
//             {
//                 index = j;
//             }   
//         }   
//         swap(arr[index], arr[i]);
//     }
//     for ( i = 0; i < 6; i++)
//     {
//         cout<<arr[i]<<" ";
//     } 
// }

// TO SORT N NUMBER OF ARRAYS -------

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];

//     cout << "Enter 5 numbers:\n";
//     for(int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     cout << "You entered:\n";
//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }

// TO TAKE SIZE AND ELEMENT OF THE ARRAY -------

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the size of arrays: ";
    cin>>n;
     int arr[n];
    cout<<"enter the element of arrays :";
    for (int i = 0; i <=n; i++)
    {
        cin>>arr[i];
    }
    cout<<"you enterd the number is :";
    for ( i = 0; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}