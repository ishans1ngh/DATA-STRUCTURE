#include<iostream>
#include<stack>

using namespace std;

void Palindrome(string word){
    stack<char> s;
    for (int i = 0; i < word.length(); i++){
        s.push(word[i]);
    }
    string rev = "";
    while (!s.empty()){
        rev.push_back(s.top());
        s.pop();
    }
    if (word == rev){
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
}

int main(){
    string word;
    cout << "Enter a word:";
    cin >> word;
    Palindrome(word);
    return 0;
}
