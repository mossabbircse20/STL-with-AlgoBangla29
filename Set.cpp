#include<iostream>
#include<set>
using namespace std;

int main()
{
   set<int> s; // s = 5 6 7 9 10 5 6 7 9 10

   s.insert(10);
   s.insert(5);
   s.insert(6);
   s.insert(9);
   s.insert(7);
   s.insert(5);
   s.insert(10);

   cout << "Set size : " << s.size() << endl;

   cout << "Set element : ";

   set<int> :: iterator i;

   for(i=s.begin(); i!=s.end(); i++)
   {
       cout << *i << " ";
   }
   cout << endl;

   s.insert(9);
   s.insert(6);

   for(i=s.begin(); i!=s.end(); i++)
   {
       cout << *i << " ";
   }
   cout << endl;

   set<int> :: iterator f;

   f = s.find(9);

   s.erase(f);

   for(i=s.begin(); i!=s.end(); i++)
   {
       cout << *i << " ";
   }
   cout << endl;

   s.insert(17);
   s.insert(20);
   s.insert(30);
   s.insert(2);


   cout << "Inserting new element in the set : ";

   for(i=s.begin(); i!=s.end(); i++)
   {
       cout << *i << " ";
   }
   cout << endl;

   set<int> :: iterator lowbound,upbound;

   lowbound = s.lower_bound(7);
   upbound = s.upper_bound(20);

   s.erase(lowbound,upbound);

   for(i=s.begin(); i!=s.end(); i++)
   {
       cout << *i << " ";
   }
   cout << endl;

   set<int, greater<int> > s2;

   s2.insert(12);
   s2.insert(4);
   s2.insert(70);
   s2.insert(100);
   s2.insert(10);

   cout << "Set2 elements : ";
   for(i=s2.begin(); i!=s2.end(); i++)
   {
       cout << *i << " ";
   }
   cout << endl;

}
