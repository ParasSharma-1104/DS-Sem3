// Stack operations using array (menu driven)
#include <iostream>
using namespace std;

int main() {
    int stack[100], top = -1, n, ch, val;
    cout << "Enter size of stack: ";
    cin >> n;

    do {
        cout << "\n1.Push\n2.Pop\n3.isEmpty\n4.isFull\n5.Display\n6.Peek\n7.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 1) {
            if (top == n - 1)
                cout << "Stack is Full\n";
            else {
                cout << "Enter value to push: ";
                cin >> val;
                top++;
                stack[top] = val;
                cout << "Item pushed\n";
            }
        }

        else if (ch == 2) {
            if (top == -1)
                cout << "Stack is Empty\n";
            else {
                cout << "Popped element: " << stack[top] << endl;
                top--;
            }
        }

        else if (ch == 3) {
            if (top == -1)
                cout << "Stack is Empty\n";
            else
                cout << "Stack is not Empty\n";
        }

        else if (ch == 4) {
            if (top == n - 1)
                cout << "Stack is Full\n";
            else
                cout << "Stack is not Full\n";
        }

        else if (ch == 5) {
            if (top == -1)
                cout << "Stack is Empty\n";
            else {
                cout << "Stack elements: ";
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }
        }

        else if (ch == 6) {
            if (top == -1)
                cout << "Stack is Empty\n";
            else
                cout << "Top element: " << stack[top] << endl;
        }

    } while (ch != 7);
  return 0;
}
