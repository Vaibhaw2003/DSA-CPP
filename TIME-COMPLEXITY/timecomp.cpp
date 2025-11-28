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
/*  
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
*/


// binary search------
/*  

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter element to find: ";
    cin >> key;

    int low = 0, high = n - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == key){
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    cout << "Element not found";
    return 0;
}
*/

//hashing------

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to find: ";
    cin >> key;

    // Create a hash set
    unordered_set<int> hashSet;

    // Insert all elements in hash set (O(n))
    for(int i = 0; i < n; i++)
        hashSet.insert(arr[i]);

    // Check if key exists (O(1))
    if(hashSet.find(key) != hashSet.end())
        cout << "Element found!";
    else
        cout << "Element not found!";

    return 0;
}

