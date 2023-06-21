#include <iostream>
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
    cout << "Size of array";
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArr(n,arr);

    return 0;
}