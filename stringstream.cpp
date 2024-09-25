#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

vector<int> parseInts(string& str)
{
    vector<int> result;
     stringstream ss(str);
     string ch;
     while(getline(ss,ch,','))
     {
         result.push_back(stoi(ch));
     }
     return result;
}

int main() {
    string str;
    getline(cin, str);
    vector<int> v=parseInts(str);
    for(int num : v)
    {
        cout << num << endl;
    }
    return 0;
}
