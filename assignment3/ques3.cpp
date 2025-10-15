#include <iostream>
using namespace std;

int main() {
    char expr[100], stack[100];
    int top = -1;
    cout << "Enter expression: ";
    cin >> expr;

    bool balanced = true;
    for(int i = 0; expr[i] != '\0'; i++) {
        if(expr[i] == '(')
            stack[++top] = '(';
        else if(expr[i] == ')') {
            if(top == -1) {
                balanced = false;
                break;
            } else
                top--;
        }
    }
    if(top != -1) balanced = false;
    if(balanced)
        cout << "Parentheses are balanced";
    else
        cout << "Parentheses are not balanced";
    return 0;
}

