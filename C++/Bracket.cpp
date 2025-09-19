#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool areBracketsBalanced(const string &expr) {
    stack<char> s;
     

    for (char ch : expr) {
        
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
         
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;  

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;  
            }
        } 
         
    }

    return s.empty();  
}

int main() {
    string expr;
    cout << "Enter the expression: ";
    getline(cin, expr);  

    if (areBracketsBalanced(expr))
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;
}
