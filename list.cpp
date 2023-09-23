#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(20); // l = null<-->3<-->20<-->10<->5<->4
    l.push_back(10);
    l.push_front(3);
    l.push_back(4);

    list<int> :: iterator i;

    for(i=l.begin();i!=l.end();i++)
    {
        cout << *i << " ";
    }

    i=l.begin();

    advance(i,3);

    l.insert(i,5);

    cout << endl;
    for(i=l.begin();i!=l.end();i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    cout << "First element of list : " << l.front() << endl;

    cout << "Last element of list : " << l.back() << endl;

    l.sort();

    for(i=l.begin();i!=l.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "First element of list : " << l.front() << endl;

    cout << "Last element of list : " << l.back() << endl;



    l.pop_front();

    for(i=l.begin();i!=l.end();i++)
    {
        cout << *i << " ";
    }

    l.pop_back();

    cout << endl;
    for(i=l.begin();i!=l.end();i++)
    {
        cout << *i << " ";
    }


}
