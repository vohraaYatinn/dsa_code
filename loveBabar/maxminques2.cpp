// Given an array of size N. The task is to find the maximum and the 
// minimum element of the array using the minimum number of comparisons.

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
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<endl<<"max: "<<max<<endl<<"min: "<<min;
    return 0;
}