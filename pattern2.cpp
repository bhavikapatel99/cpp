#include <iostream>
using namespace std;
int main()
{
    int i=1,j=1;
    for(i=1;i<=5;i++)
    {
       
        for(j=1;j<=i;j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
    return 0;
}
