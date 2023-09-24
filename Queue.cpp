/* Welcome to AlgoBangla29 Youtube Channel. */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q; // FIFO -- > First in First out // 10 20 30

    q.push(10);
    q.push(12);
    q.push(9);
    q.push(11);
    q.push(5); // q = {10,12,9,11};

    cout << "First element : " << q.front() << endl;

    cout << "Last element : " << q.back() << endl;

    cout << "Queue Size : " << q.size() << endl;

     // q.empty() -- >if queue has no element than it returns 1(true)
    cout << "Queue elements : ";
    while(!q.empty())
    {
        int first_element = q.front();

        cout << first_element << " ";

        q.pop();
    }
    cout << endl;

    queue<int> q2;

    q2.push(100);
    q2.push(79);
    q2.push(80);
    q2.push(20);

    cout << "Queue-2 elements : ";
    while(!q2.empty())
    {
        int first_element = q2.front();

        cout << first_element << " ";

        q2.pop();
    }



}
