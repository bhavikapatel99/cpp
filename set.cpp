#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int q,x;
        cin >> q >> x;
        if(q == 1)
        {
            s.insert(x);
        }
        else if(q == 2)
        {
            s.erase(x);
        }
        else
        {
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
