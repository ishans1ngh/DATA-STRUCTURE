#include<iostream>
#include<stack>
using namespace std;

void DecimalToBinary(int decimal, int base){
    stack<int> s;
    while(decimal != 0){
        s.push(decimal % base);
        decimal = decimal / base;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    
}

int main(){
    int decimal, base;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Representation in base " << base << ": ";
    DecimalToBinary(decimal, base);
    cout << endl;
    return 0;
}