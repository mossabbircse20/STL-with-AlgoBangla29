#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s; // s =  2 5 1 4 6 7 -- > LIFO --- > 7 6 4 1 5 2

    s.push(2);
    s.push(5);
    s.push(1);
    s.push(4);
    s.push(6);
    s.push(7);

    cout << "Stack elements : " << s.size() << endl;

    cout << "Stack in LIFO : ";

    while(!s.empty())
    {
        int top = s.top();
        s.pop();
        cout << top << " ";
    }
    cout << endl;


}
