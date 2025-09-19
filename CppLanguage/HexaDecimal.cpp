#include<iostream>
#include<stack>

using namespace std;

void DecimalToHexadecimal(int decimal){
    stack<int> s;
    while (decimal > 0) {
        s.push(decimal % 16);
        decimal /= 16;
    }
    while (!s.empty()) {
        int hexDigit = s.top();
        s.pop();
        if (hexDigit < 10) {
            cout << hexDigit;
        } else {
            cout << char(hexDigit - 10 + 'A');
        }
    }
    cout << endl;
}

int main(){
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Hexadecimal representation: ";
    DecimalToHexadecimal(decimal);
    return 0;
}