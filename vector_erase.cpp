#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
     cin >> n;
     int i;
     vector<int> v(n);
     for(i=0;i<n;i++)
     {
         cin >> v[i];
     }
     int a,b,c;
     cin >> a;
     a--;//to convert 0 based index
     v.erase(v.begin()+a);
     cin >> b >> c;
     b--;//to convert 0 based index
     c--;//to convert 0 based index
     v.erase(v.begin()+b,v.begin()+c);
     cout << v.size() << endl;
     for(unsigned j=0;j<v.size();j++)
     {
         cout << v[j] << " ";
     }
    return 0;
}
