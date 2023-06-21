// Move all negative numbers to beginning and positive to end with constant extra space
// order not neccesarry

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
    int j = 0;
    for( i = 0; i < n; i++){
        if(arr[i] < 0){
            swap(arr[j], arr[i]);
            j++;
        }
    }

// printing
    for (i = 0; i < n; i++)

    {
        cout<<arr[i];
    }
    

    return 0;
}