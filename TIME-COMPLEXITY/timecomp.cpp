// TO FIND THE ELEMENT IN THE ARRAY-------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//    int  i = [1,2,3,4,5,6];
//     cout<<"enter the arraay element : ";
//     cin>>n;
//     for ( i = 0; i < n; i++)
//     {
//         /* code */if ([i]==n)
//         {
//             /* code */cout<<"gote it";
//         }break;   
//     }
// }

// TO FIND THE ELEMENT IN THE ARRAY-------

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter element to find: ";
    cin >> key;

    // Linear Search
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
