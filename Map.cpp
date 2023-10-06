#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> mp; // map = pair-->(1,3) , (2,6) , (3,5) , (4,8)

    mp.insert(make_pair(1,3));
    mp.insert(make_pair(2,6));
    mp.insert(make_pair(3,5));
    mp.insert(make_pair(4,8));

    cout << "Map size : " << mp.size() << endl;

    cout << "Map elements using for loop : ";

    for(int i=1 ; i<=mp.size() ; i++)
    {
        cout << mp[i] << " ";
    }
    cout << endl;

    map<int,int> :: iterator i;

    cout << "Map elements using iterator pointer: ";

    for(i=mp.begin();i!=mp.end();i++)
    {
        cout << i->second << " ";
    }
    cout << endl;

    mp[5]=10;
    mp[6]=11;
    mp[7]=9;

    for(i=mp.begin();i!=mp.end();i++)
    {
        cout << i->first << "--->" << i->second << endl;
    }
    cout << endl;

    mp.erase(3);

    for(i=mp.begin();i!=mp.end();i++)
    {
        cout << i->first << "--->" << i->second << endl;
    }
    cout << endl;

    mp[3]=12;
    mp[8]=20;
    mp[9]=6;

    for(i=mp.begin();i!=mp.end();i++)
    {
        cout << i->first << "--->" << i->second << endl;
    }
    cout << endl;

    map<int,int> :: iterator lowbound,upbound;

    lowbound = mp.lower_bound(5);
    upbound = mp.upper_bound(8);

    mp.erase(lowbound,upbound);

    for(i=mp.begin();i!=mp.end();i++)
    {
        cout << i->first << "--->" << i->second << endl;
    }
    cout << endl;

    mp.clear();

    cout << "Map size : " << mp.size() << endl;
    cout << "Map is empty : " << mp.empty() << endl;

}
