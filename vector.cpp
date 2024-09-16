#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,q;
    cin >> n >> q;
    vector<vector <int>> v(n);
    for(i=0;i<n;++i)
    {
        int k; // size of inner array.
        cin >> k;
        
        v[i].resize(k);
         
        for(j=0;j<k;++j)
        {
            cin >> v[i][j];
        }  
    }
    
    for(i=0;i<q;i++)
    {
        int outerv,innerv;
        cin >> outerv >> innerv;
        
        cout<<v[outerv][innerv]<<endl;
    }
    return 0;
}
