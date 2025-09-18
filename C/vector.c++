#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v; // vector = array, v is the name of vector
    v.push_back(10); // insert a new value
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Initial vector: ";
    for (int x : v) cout << x << " "; // 
    cout << endl; // endl  = new line
    
    cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl; // size = number of elements in vector and capacity = storage allocated
    cout << "element at index 2: " << v.at(2) << endl;
    
    cout << "first element: " << v.front() << endl;
    cout << "last element: " << v.back() << endl;
    
    v.insert(v.begin() + 2, 25);
    cout << "after insert: ";
    for (int x : v) cout << x << " ";
    cout << endl; 
    
    return 0;
}