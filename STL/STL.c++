#include <bits/stdc++.h>
// #include <iostream>
// #include <utility>
//  #include <vector>
//#include<iterator>
using namespace std;

// link to https://www.geeksforgeeks.org/cpp-stl-interview-questions/?ref=shm
//  STL is one of the unique abilities of C++ which makes it stand out from every other programming language.
//  STL stands for standard template library which contains a lot of pre-defined templates in terms of containers
//   and classes which makes it very easy for
//  developers or programmers to implement different data structures easily without having to write complete code
//   and worry about space-time complexities.

// disadvantages
// It is not a standard header file of C++ library.It includes lots of unnecessary stuff and increases compilation time.
// It is non-portable.

// A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar
// functions, classes, variables etc. with the same name available in different libraries.

// Pairs
void explainPair()
{
   // included in the <utility> header file                     
   pair<int, int> p1 = {1, 3};
   cout << p1.first << " " << p1.second << endl;
   pair<int, pair<int, int>> p2 = {1, {3, 4}};
   cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;
   pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
   cout << arr[1].second;

   // make_pair(key,value) - fn creates a pair object inside any container
   pair<int, string> p1;
    p1 = make_pair(1, "GeeksforGeeks");  // Pair Initialized using make_pair()
    auto p2 = make_pair("GeeksforGeeks", 1);  // Using it with auto type deduction

}

// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or
// deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous
//  storage so that they can be accessed and traversed using iterators.

// vector.begin() – Returns an iterator pointing(address) to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from
// last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.

// sort(starting index address,ending index address) - to sort an array/vector.
//  erase() – to remove elements from a container from the specified position or range(vector.begin(),vector.begin()+3)
//  insert() – inserts new elements before the element at the specified position (v.begin(),element) or (address,count,element)

// assign() – It assigns new value to the vector elements by replacing old ones
// push_back() – It push the elements into a vector from the back
// pop_back() –  to remove elements from a vector from the back. (last element is deleted from vector)
// swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
// clear() – It is used to remove all the elements of the vector container

void explainVector()
{
   // included in <vector> header file
   vector<pair<int, int>> vec;
   vec.push_back({1, 2});
   vec.emplace_back(3, 4); // faster than push_back, doesn't need to pass the pair as objects

   for (auto it = vec.begin(); it != vec.end(); it++)
   { // instead of auto we can also use vector<int>::iterator
      cout << (*(it)).first << " ";
   }
   cout << endl;

   vector<int> v = {1, 2, 3, 4, 5};
   //  v.assign(5,10); //assigning 5 10's to v

   vector<int> v2(v); // copying vectors of same data type
   //  cout<<v2[0]<<endl;
   //   cout<<vec[1].first;
   v2.pop_back(); // delete the last index

   v2.erase(v2.begin() + 1); // pass the address that needed to be deleted

   v2.swap(v);

   cout << "V2:";
   for (auto it = v2.begin(); it != v2.end(); it++)
   { // instead of auto we can also use vector<int>::iterator
      cout << *(it) << " ";
   }
   cout << endl
        << "V:";
   for (auto it = v.begin(); it != v.end(); it++)
   { // instead of auto we can also use vector<int>::iterator
      cout << *(it) << " ";
   }
   v.clear();
   cout << endl
        << v.empty(); // returns 1 if empty else 0
}

// A list in STL is a contiguous container that allows the inserting and erasing of elements in constant time and iterating in both directions.

void explainList()
{
   // implemented using a dynamic doubly linked list with traversal in both directions.
   //  included in <list> header file
   // insertion and deletion are quick (constant time).
   list<int> ls;
   ls.push_back(2);      // {2} it is faster than insert in arrays
   ls.emplace_back(4);   // {2, 4}
   ls.push_front(5);     // {5, 2, 4};
   ls.emplace_front(10); //{10,5,2,4}
   ls.pop_front();       //{5,2,4}
   ls.reverse();
   ls.sort();
   for (auto it = ls.begin(); it != ls.end(); it++)
   {
      cout << *(it) << " ";
   }
   // rest functions same as vector
   // begin, end, rbegin, rend, clear, insert, size, swap,empty
}

// deque - Double Ended Queue which is also called Deque is a type of queue data structure in which the insertion and
// deletion of elements can be either in front or rear. Same as list and vector
// Link  https://takeuforward.org/c/c-stl/deque-in-c-stl/

void explainStack()
{
   // included in <stack> header file
   // all the opration takes only O(1) time complexity
   stack<int> st;
   st.push(1);                // {1} 4
   st.push(2);                // {2, 1}
   st.push(3);                // {3, 2, 1}
   st.push(3);                // (3, 3, 2, 1}
   st.emplace(5);             // {5, 3, 3, 2, 1}
   cout << st.top() << endl;  // prints 5 "** st[2] is invalid **"
   st.pop();                  // st looks like {3, 3, 2, 1}
   cout << st.top() << endl;  // 3
   cout << st.size() << endl; // 4
   cout << st.empty();        // 0 - false
   stack<int> st1, st2;
   st1.swap(st2);
}

void explainQueue()
{
   // A queue is a linear list of elements in which deletions can take place only at one end called the front,
   // and insertions can take place only at the end called the rear.
   // included in <queue> header file
   queue<int> q;
   q.push(1);    // {1}
   q.push(2);    // {1, 2}
   q.emplace(4); // {1, 2, 4}
   q.back() += 5;
   cout << q.back(); // prints 9
   // Q is {1, 2, 9}
   cout << q.front(); // prints 1
   q.pop();           // {2, 9}
   cout << q.front(); // prints 2
   // size swap empty same as stack
}

void explainPQ()
{
   // priority queue - stores element based on priority ,usually in decending order,here follows heap-data structure
   // included in <queue> header file
   //  push,pop - O(logn),top-O(1)

   priority_queue<int> pq;   // intially it'll be max-heap
   pq.push(5);               // {5}
   pq.push(2);               // {5, 2}
   pq.push(8);               // {8, 5, 2}
   pq.emplace(10);           // {10, 8, 5, 2}
   cout << pq.top() << endl; // prints 10
   pq.pop();                 // {8, 5, 2}
   cout << pq.top() << endl; // prints 8
   // size,swap,empty function same as others
   // Minimum Heap
   priority_queue<int, vector<int>, greater<int>> Pq; // here it'll be min-heap
   Pq.push(5);                                        // {5}
   Pq.push(2);                                        // {2, 5}
   Pq.push(8);                                        // {2, 5, 8}
   Pq.emplace(10);                                    // {2, 5, 8, 10}
   cout << Pq.top();                                  // prints 2
}

void explainSet()
{
   // included in <set> header file.
   set<int> st;
   st.insert(1);  // {1}                insert,erase - O(logn)
   st.emplace(2); // {1, 2}
   st.insert(2);  // {1, 2}
   st.insert(4);  // {1, 2, 4}
   st.insert(3);  // {1, 2, 3, 4}
   // Functionality of insert in vector
   // can be used also, that only increases
   // efficiency
   // begin (), end(), rbegin(), rend(), size(),
   // empty() and swap() are same as those of above
   // {1, 2, 3, 4, 5}

   auto it = st.find(3); // find returns an iterator of the element
   // {1, 2, 3, 4, 5}
   auto i = st.find(6); // if not in the array it'll return an iterator pointing to set.end()
   // {1, 4, 5}
   st.erase(5); // erases 5 // takes logarithmic time
   int cnt = st.count(1);
   st.erase(it); // it takes constant time

   // {1, 2, 3, 4, 5)
   auto it1 = st.find(2);
   auto it2 = st.find(4);
   st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

   // lower_bound () and upper_bound () function works in the same way as in vector it does.
   //  auto it = st.lower_bound(2);
   //  auto it = st.upper_bound(3);
}

void lower_upper()
{
   // upper_bound points to the target's next element/address and if there are duplicates it points to the last duplicate
   // lower_bound points to the target's element/address and if there are duplicates it points to the first duplicate
   // It is defined in <algorithm> header file.

   int a[] = {1, 9, 9, 2, 9};
   auto it = lower_bound(a, a + 5, 9); // if we put -a it'll return the index of the element orelse it point to the address
   cout << *it << endl;

   vector<int> v = {1, 2, 4, 5, 5};
   auto j = lower_bound(v.begin(), v.end(), 3) - v.begin(); // if the element is not present it'll return the number's existense position
   auto i = upper_bound(v.begin(), v.end(), 5) - v.begin(); // returns garbage value
   cout << (j) << endl
        << i << endl;

   cout << "*******Binary search using bounds******" << endl;

   // Find the first occurrence of a X in a sorted array. If it does not exits, print -1.

   int A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
   int x = 0;
   int n = sizeof(A) / sizeof(A[0]);
   int y = -1;
   int ind = lower_bound(A, A + n, x) - A; // gives the index of the element if exist orlse it's existense position
   if (ind != n && A[ind] == x)
      cout << ind; // condition:suppose if the index is n+1 A[n+1] cannot be accessed it is an error so check index!=n
   else
      cout << y;

   cout << endl;

   // Find the last occurrence of a X in a sorted array. If it does not exits, print -1.
   int B[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
   int X = 12;
   int m = sizeof(B) / sizeof(B[0]);
   int index = upper_bound(B, B + m, X) - B;
   index--;
   if (index >= 0 && B[index] == X)
      cout << index; // condition: the elements which are less than the first index  are not checked by B[-1]
   else
      cout << y;
}

void explainMultiSet()
{
   // Everything is same as set
   // can also stores duplicate elements in sorted order
   multiset<int> ms;
   ms.insert(1); // {1}
   ms.insert(1); // {1, 1}
   ms.insert(1); // {1, 1, 1}
   ms.erase(1);  // all 1's erased.
   int cnt = ms.count(1);
   // only a single one erased
   ms.erase(ms.find(1));
   // ms.erase(ms.find(1), ms.find(1)+cnt);
   // rest all function same as set
}

// unordered_set stores unique elements only but not in sorted order
// most of the cases are time-complexity-O(1)
// in rare worst cases it may go upto O(n)
// lower and upper bound doesn't work

//The insert() function returns a pair of values: - both in set and unordered_set
//The first value is an iterator pointing to the inserted element (or the existing element if it already exists).
//The second value is a boolean indicating whether the insertion was successful (i.e., whether the element was newly inserted).

void explainMap()
{
   // map stores element in the form of {key,value} pair,key can be string,char,int, pair<int,int> and the key will be in sorted ordered
   //  it is defined inside the <map> header file.

   map<int, int> mpp;  //same as pair 
   // we also set the key like these
   //  map<int, pair<int, int>> mpp;
   //  map< pair<int, int>, int> mpp;

   mpp[1] = 2;
   mpp.emplace(3, 1); //the key will be stores after 2
   mpp.insert({2, 4});
   mpp.insert({2, 6});//duplicate keys are not allowed
   for(auto it: mpp){
   cout <<it.first << " " <<it.second <<endl;
   }
   cout<<mpp[1]<<endl;
   cout<<mpp[5]<<endl; //key 5 is not in mpp so printed 0
   auto i = mpp.find(3); //find the value via key-3
   cout <<(*i).first<<endl;

   
   map<string, int> map;
   // Insert some values into the map
   map["one"] = 1;
   map["two"] = 2;
   map["three"] = 3;
   cout << "Size of map: " << map.size() << endl;
   for (auto it : map)
   {
      cout<< it.first << " " << it.second << endl;
   }
}

//multimap - it can have duplicate keys in sorted order
//same as map
//  it is defined inside the <map> header file.


//unordered_map - key cannot have duplicates and not in sorted order
//included in <unordered_map> header file
// implemented using Hash Table ,insert,delete,serach are done in O(1) Time complexity
//in  worst case it can go  upto O(n)
//condition to check if the element in the u_map or not - if (umap.find(key) == umap.end()) if it is true then it'll be not found in the u_map

//cout << itr->first << "  " << itr->second << endl; 

int main()
{

   // explainPair();
   //  explainVector();
   // explainList();
   // explainStack();
   // explainQueue();
   // explainPQ();
   // lower_upper();
   // explainMultiSet();
   explainMap();
   return 0;
}
