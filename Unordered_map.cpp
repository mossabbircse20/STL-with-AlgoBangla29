#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> ump; // ump = (1,2),(2,5),(3,5)

    ump.insert(make_pair(1,2));
    ump.insert(make_pair(2,5));
    ump.insert(make_pair(3,5));
    ump.insert(make_pair(5,6));
    ump.insert(make_pair(7,8));
    ump.insert(make_pair(4,9));
    ump.insert(make_pair(6,10));

    cout << "Unordered map size : " << ump.size() << endl;

    unordered_map<int,int> :: iterator i;

    for(i=ump.begin();i!=ump.end();i++)
    {
        cout << i->first << " ------ " << i->second << endl;
    }
    cout << endl;

    ump.erase(7);

    for(i=ump.begin();i!=ump.end();i++)
    {
        cout << i->first << " ------ " << i->second << endl;
    }
    cout << endl;

    int arr[10] = {1,2,1,2,1,4,6,4,6,3};

    unordered_map<int,int> ump2;

    for(int i=0; i<10 ; i++)
    {
        ump2[arr[i]]++; // frequency count
    }
    for(i=ump2.begin();i!=ump2.end();i++)
    {
        cout << i->first << " ------ " << i->second << endl;
    }
    cout << endl;



}
