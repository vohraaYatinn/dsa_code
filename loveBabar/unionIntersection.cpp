// Find Union and Intersection of two unsorted arrays
#include <bits/stdc++.h>
using namespace std;

void printArr(int n, int arrayToPrint[]){
    for (int i = 0; i < n; i++)
    {
        cout<<arrayToPrint[i];
    }
    
}
int main()
{
    int n;
    cout << "Size of array 1: ";
    cin >> n;
    int arr1[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Size of array 2: ";
    cin >> n;
    int arr2[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    

    return 0;
}