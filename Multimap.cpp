#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,int> mmp; // multimap =(1,2),(2,1),(3,2),(1,3),(2,4),(3,6)

    mmp.insert(make_pair(1,2));
    mmp.insert(make_pair(2,1));
    mmp.insert(make_pair(3,2));
    mmp.insert(make_pair(1,3));
    mmp.insert(make_pair(2,4));
    mmp.insert(make_pair(3,6));
    mmp.insert(make_pair(4,7));


    cout << "Multimap size : " << mmp.size() << endl;

    multimap<int,int> :: iterator i;

    for(i=mmp.begin();i!=mmp.end();i++)
    {
        cout << i->first << " ----- " << i->second << endl;
    }
    cout << endl;


    mmp.erase(mmp.find(3));

    mmp.erase(3); // all elements in 3 index

    for(i=mmp.begin();i!=mmp.end();i++)
    {
        cout << i->first << " ----- " << i->second << endl;
    }
    cout << endl;

    mmp.insert(make_pair(3,5));
    mmp.insert(make_pair(3,9));
    mmp.insert(make_pair(5,10));
    mmp.insert(make_pair(6,12));
    mmp.insert(make_pair(7,20));

    for(i=mmp.begin();i!=mmp.end();i++)
    {
        cout << i->first << " ----- " << i->second << endl;
    }
    cout << endl;

    multimap<int,int> :: iterator lowbound,upbound;

    lowbound = mmp.lower_bound(4);
    upbound = mmp.upper_bound(6);

    mmp.erase(lowbound,upbound);

     for(i=mmp.begin();i!=mmp.end();i++)
    {
        cout << i->first << " ----- " << i->second << endl;
    }
    cout << endl;

    mmp.clear();

    cout << "Multimap Size: " << mmp.size() << endl;

}
