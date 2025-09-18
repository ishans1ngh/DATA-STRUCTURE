#include<iostream>
#include<stack>
using namespace std;

void DecimalToBinary(int decimal){
    stack<int> s;
    while(decimal != 0){
        s.push(decimal % 2);
        decimal = decimal / 2;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    
}

int main(){
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary representation: ";
    DecimalToBinary(decimal);
    cout << endl;
    return 0;
}