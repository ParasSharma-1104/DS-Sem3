#include <iostream>
using namespace std;
int main() {
    char infix[100], stack[100], postfix[100];
    int top=-1,k=0;
    cin>>infix;
    for(int i=0;infix[i]!='\0';i++){
        char c=infix[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))postfix[k++]=c;
        else if(c=='(')stack[++top]=c;
        else if(c==')'){while(top!=-1&&stack[top]!='(')postfix[k++]=stack[top--];if(top!=-1)top--;}
        else stack[++top]=c;
    }
    while(top!=-1)postfix[k++]=stack[top--];
    postfix[k]='\0';
    cout<<postfix;
}

