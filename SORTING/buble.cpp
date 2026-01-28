//TO ARRANGE THE ARRAY ACORDING TO BUBLE SORT ----------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the element of the arrays: ";
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"the element is:";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     // TO ARRANGE THE ARRAY ACORDING TO BUBLE SORT
//     for (int j = 0; j < n-2; j++)
//     {
//         if (arr[j]<arr[])
//         {
//             /* code */
//         }
//     }
//}


//BUBLE SORT ALGORITHM ----------

#include<iostream>
using namespace std;
int main(){
    int n,i,j,index;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the element of the arrays: ";
    int arr[100];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // BUBEL SORT ALGORITHM -----
    for ( j = 0; j < n-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }   
    }
    cout<<"the sorted array is: ";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}