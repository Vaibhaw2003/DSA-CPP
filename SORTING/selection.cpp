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

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter the size of arrays: ";
//     cin>>n;
//      int arr[n];
//     cout<<"enter the element of arrays :";
//     for (int i = 0; i <=n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"you enterd the number is :";
//     for ( i = 0; i <=n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// TO ARRANGE THE ARRAYS IN ACCENDING ORDER -------

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter the number of array :";
//     cin>>n;
//     cout<<"enter the elment :";
//     int arr[n];
//     for ( i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for ( i = 0; i < n-1; i++)
//     {
//        int index =i;

//     }
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Sorting
//     sort(arr, arr + n);

//     cout << "Sorted array:\n";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]= {3,4,1,2,6};
//     int index =0;
//     for (int i = 1; i <=5; i++)
//     {
//         if (arr[i]<arr[index])
//         {
//             index=i;
//         }
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {3,4,1,2,6};
//     int index = 0;

//     for(int i = 1; i < 5; i++)   // ✅ i < 5
//     {
//         if(arr[i] < arr[index])
//         {
//             index = i;
//         }
//     }

//     cout << "Smallest element = " << arr[index] << endl;
//     cout << "Index = " << index << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {3,4,1,2,6};
//     int n = 5;

//     for(int i = 0; i < n-1; i++)
//     {
//         for(int j = 0; j < n-i-1; j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     cout << "Sorted Array: ";
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// TO ARRANGE THE GIVEN ARRAY IN SELECTION SORT ---------

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={10,4,1,3,2,7};
//     for (int i = 0; i < 5; i++)
//     {
//         int index =i;
//         for(int j = i+1; j<6; j++)
//         {
//             if(arr[j]<arr[index])
//             {
//                 index=j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }   
//     for (int i = 0; i<6; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
// }


// TO ARRANAGE THE ARRAY IN SORTED FORM ---------
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[1000];
//    int n;
//    cout<<"enter the size of element :";
//    cin>>n;
//    //TO TAKE INPUT AS A ELEMENT
//    cout<<"enter the elment of the arrays :";
//    for (int i = 1; i <= n; i++)
//    {
//      cin>>arr[i];
//    }
//    cout<<"the eleament is : ";
//    for (int i = 1; i <= n; i++)
//    {
//      cout<<arr[i]<<" ";
//    }
//    //TO SORT THE ARRAY
//    for (int i = 1; i <=n; i++)
//    {
//     int index =i;
//     for (int j = i+1; j <= n; j++)
//     {
//         if (arr[j]<arr[index])
//         {
//             index =j;
//         }
//     }
//     swap(arr[i],arr[index]);
//    }
//    cout<<"the sorted array is: ";
//    for (int i = 1; i <=n; i++)
//    {
//      cout<<arr[i]<<" ";
//    }
// }

