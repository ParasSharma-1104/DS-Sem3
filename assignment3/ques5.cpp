#include <iostream>
using namespace std;
int main(){
    char postfix[100];
    int stack[100], top=-1;
    cin>>postfix;
    for(int i=0;postfix[i]!='\0';i++){
        char c=postfix[i];
        if(c>='0'&&c<='9') stack[++top]=c-'0';
        else{
            int b=stack[top--];
            int a=stack[top--];
            if(c=='+') stack[++top]=a+b;
            else if(c=='-') stack[++top]=a-b;
            else if(c=='*') stack[++top]=a*b;
            else if(c=='/') stack[++top]=a/b;
        }
    }
    cout<<stack[top];
}

