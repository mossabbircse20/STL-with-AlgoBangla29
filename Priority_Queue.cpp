#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq; // pq = 3 5 8 10 6 7 -- > FIFO // priority queue = max heap

    pq.push(3);             // output : 10 8 7 6 5 3
    pq.push(5);
    pq.push(8);
    pq.push(10);
    pq.push(6);
    pq.push(7);

    cout << "Size :  "<< pq.size() << endl;

    while(!pq.empty()){
        int top = pq.top();
        pq.pop();
        cout << top << " ";
    }
    cout << endl;

    cout << "after poped Size :  "<< pq.size() << endl;

}
