#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    pair<int,int> pr,pr2,pr3; // pr = (1--2)

    pr = make_pair(1,2);
    pr2 = make_pair(2,5);
    pr3 = make_pair(3,7);

    cout <<"First pair : "<< pr.first << "----" << pr.second << endl;
    cout <<"Second pair : "<< pr2.first << "----" << pr2.second << endl;
    cout <<"Third pair : "<< pr3.first << "----" << pr3.second << endl;

    pr.swap(pr3);
    cout << endl;

    cout <<"First pair : "<< pr.first << "----" << pr.second << endl;
    cout <<"Second pair : "<< pr2.first << "----" << pr2.second << endl;
    cout <<"Third pair : "<< pr3.first << "----" << pr3.second << endl;

    cout << endl;

    int arr[4] = {2,4,10,3};

    cout << "Array : ";
    for(int i=0 ; i<4 ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<pair<int,int> > vp;

    for(int i=0 ; i<4 ; i++)
    {
        vp.push_back(make_pair(i,arr[i]));
    }
    cout << "Vector pair : " << endl;


    for(int i=0 ; i<4 ; i++)
    {
        cout << vp[i].first << "----" << vp[i].second << endl;
    }

    swap(vp[0].first,vp[2].first);
    swap(vp[1].first,vp[3].first);
    cout << endl;

    for(int i=0 ; i<4 ; i++)
    {
        cout << vp[i].first << "----" << vp[i].second << endl;
    }










}
