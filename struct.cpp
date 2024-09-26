#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int age;
    string first_name;
    string last_name;
    int std;
}stud;

int main() {
    cin >> stud.age;
    cin >> stud.first_name;
    cin >> stud.last_name;
    cin >> stud.std;
    cout << stud.age << " " << stud.first_name << " " << stud.last_name << " " << stud.std;   
    return 0;
}
