#include <iostream>
using namespace std;

void printStart(int num){
    for (int i = 0; i < num+1; i++)
    {
       for (int j = 0; j < i; j++)
       {
        cout<<"*";
       }
       cout<<"\n";
    }
    
}
int main(){
    int d;
    cin>>d;
    printStart(4);
    return 0;
}