#include <iostream>
#include <stack>

using namespace std;

string ReverseString(string name){
    stack<char> s;
    for (int i = 0; i < name.length(); i++){
        s.push(name[i]);
    }
    while (!s.empty()){
        cout << s.top();
        s.pop();
    } 

}

int main (){
    string name;
    cout << "Enter a string: ";
    cin >> name;
    cout << "Reversed string: ";
    ReverseString(name);
    cout << endl;
    return 0;
}