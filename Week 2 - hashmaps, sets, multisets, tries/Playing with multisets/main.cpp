#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    multiset<int, greater<int>> one;

    one.insert(40);
    one.insert(30);
    one.insert(60);
    one.insert(20);
    one.insert(50);
    one.insert(50);
    one.insert(10);

    for (auto it = one.begin(); it != one.end(); it++)
        cout << *it << endl;

    cout << endl;

    multiset<int> two(one.end(), one.begin());

    for (auto it = two.begin(); it != two.end(); it++)
        cout << *it << endl;



    return 0;
}