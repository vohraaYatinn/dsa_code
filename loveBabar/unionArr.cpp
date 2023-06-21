// Find Union and Intersection of two unsorted arrays
#include <iostream>
#include <set>

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
    int n2;
    cin >> n2;
    int arr2[n2];
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    set<int> s;
    for (i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    for (auto& num : s) {
        std::cout << num << ' ';
    }


    return 0;
}