#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(6);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);

    for(int i=0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }

    v.pop_back();

    cout << endl;

    for(int i=0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.push_back(10);
    v.push_back(2);
    v.push_back(8);

    sort(v.begin(),v.end());
    cout << "v = ";
    for(int i=0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }

    vector<int> v2(3,5); // v2 = {5,5,5}

    cout << endl;
    cout << "v2 = ";
    for(int i=0 ; i<v2.size() ; i++)
    {
        cout << v2[i] << " ";
    }

    swap(v2,v);

    cout << endl;
    cout << "v2 = ";
    for(int i=0 ; i<v2.size() ; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "v = ";
    for(int i=0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }

    reverse(v2.begin(),v2.end());

    cout << endl;
    cout << "v2 = ";
    for(int i=0 ; i<v2.size() ; i++)
    {
        cout << v2[i] << " ";
    }

    vector<bool> v3;
    v3.push_back(true);
    v3.push_back(false);
    v3.push_back(true);
    v3.push_back(false);
    // v3 = {true,false,true,false}


    cout << endl;
    cout << "v3 = ";
    for(int i=0 ; i<v3.size() ; i++)
    {
        cout << v3[i] << " ";
    }

    v3.flip();

    cout << endl;
    cout << "after fliping v3 = ";
    for(int i=0 ; i<v3.size() ; i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}
