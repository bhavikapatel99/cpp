#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    private:
    int age;
    string first_name,last_name;
    int std;
    public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_fn(string firstname)
    {
        first_name = firstname;
    }
    string get_fn()
    {
        return first_name;
    }
    void set_ln(string lastname)
    {
        last_name = lastname;
    }
    string get_ln()
    {
        return last_name;
    }
    void set_std(int stnd)
    {
        std = stnd;
    }
    int get_std()
    {
        return std;
    }
}stud;
int main() {
    int a,s;
    string fn,ln;
    cin >> a;
    cin >> fn;
    cin >> ln;
    cin >> s;
    stud.set_age(a);
    stud.set_fn(fn);
    stud.set_ln(ln);
    stud.set_std(s);
    cout << stud.get_age() << endl;
    cout << stud.get_ln() << ", "<< stud.get_fn() << endl;
    cout << stud.get_std() << endl << endl;
    
    cout << stud.get_age() << "," << stud.get_fn() << ","<< stud.get_ln() << ","<<stud.get_std();
   
    return 0;
