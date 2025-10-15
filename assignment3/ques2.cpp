#include <iostream>
using namespace std;
int main() {
    char str[100], stack[100];
    int top = -1;
    cout << "Enter a string: ";
    cin >> str;
    for(int i = 0; str[i] != '\0'; i++)
        stack[++top] = str[i];
    cout << "Reversed string: ";
    while(top != -1)
        cout << stack[top--];
    return 0;
}

