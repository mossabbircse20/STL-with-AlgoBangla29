#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> ms; // ms = 2 5 7 8 9 2 6 2 2 7 --> 2 2 2 2 5 6 7 7 8 9

    ms.insert(2);
    ms.insert(5);
    ms.insert(7);
    ms.insert(8);
    ms.insert(9);
    ms.insert(2);
    ms.insert(6);
    ms.insert(2);
    ms.insert(2);
    ms.insert(7);

    cout << "Multiset size : " << ms.size() << endl;

    cout << "Multiset elements : " ;

    multiset<int> :: iterator i;

    for(i=ms.begin(); i!=ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    multiset<int> :: iterator f;

    f = ms.find(2);

    ms.erase(f);

    for(i=ms.begin(); i!=ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    multiset<int> :: iterator lowbound,upbound;

    lowbound = ms.lower_bound(5);
    upbound = ms.upper_bound(7);

    ms.erase(lowbound, upbound);

    for(i=ms.begin(); i!=ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;



}
