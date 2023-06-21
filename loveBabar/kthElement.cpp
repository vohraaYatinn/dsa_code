// Given an array and a number k where k is smaller than the s
// ize of the array, we need to find the k’th smallest element in the given ar
// ray. It is given that all array elements are distinct.

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
   sort(arr, arr+n);
   int k;
   cout<<"kth element";
   cin>>k;
   cout<<"the kth smallest element"<<arr[k-1]<<endl<<"kth largest element"<<arr[n-k];
    return 0;
}