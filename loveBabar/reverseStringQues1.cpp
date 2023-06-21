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
    int j = n - 1;
    i = 0;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}