// Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

// This problem is also the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra. The problem is as follows:

// Given an array (or string), the task is to reverse the array/string.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size of array";
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low=0,med=0,high=n;
    while(med < high) {
        if(arr[med] == 0){
            swap(arr[low],arr[med]);
            low++;
            med++;
        }
        else if(arr[med] == 1){
            med++;
        }
        else if(arr[med]>1){
            swap(arr[high],arr[med]);
            high--;
            med++;
        }
    }
    cout<<endl;
    for (i = 0; i < n; i++)

    {
        cout<<arr[i];
    }
    

    return 0;
}