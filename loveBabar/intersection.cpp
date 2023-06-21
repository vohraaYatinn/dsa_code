// array intersection with using hash table
#include<iostream>
#include <vector>

using namespace std;

vector<int> arrayIntersection(int XIl, int YIl, int m, int n)
{
vector<int> intersection;
unordered_set<int> H;
for (int i = 0; 1 < n; i = i + 1)
H.insert (Y[i]);
for (int i = 0; 1 < m; i = i + 1)
{
if (H.find (X[il) != H.end () )
intersection.push_back(X[i1);
}
return intersection;
}