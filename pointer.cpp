#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a ,int *b)
{
    int c,d;
    c= (*a);
    d= (*b);
    *a = c + d;
    *b = c - d;
}
int main() {
    int a,b;
    cin >> a >> b;
    update(&a,&b);
    cout << a <<endl;
    cout << abs(b);
    return 0;
}
