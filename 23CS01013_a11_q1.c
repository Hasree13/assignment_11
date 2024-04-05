#include<stdio.h>
#define N 50
char item[N];
int top=-1;
void push(char c);
char pop();
int main()
{
    char str[N];
    printf("Enter the string: ");
    scanf(" %[^\n]",str);
    for (int i=0;str[i]!='\0';i++){
        push(str[i]);
    }
    printf("\nString after reversing: ");
    while (top>=0){
        printf("%c",pop());
    }
    return 0;
}

void push(char c){
    if (top==N-1){
        printf("\nOverflow! String size is too big");
    }
    else{
        item[++top]=c;
    }
}

char pop(){
    if (top==-1){
        printf("\nUnderflow");
        return ('\0');
    }
    else{
        return (item[top--]);
    }
}