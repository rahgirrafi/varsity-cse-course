#include <stdio.h>
#include <string.h>
#define size 10
int top=0;
void push(int x);
int pop();
int arr[10];
int main(){

int n;

push(10);
push(30);
n = pop();

for (int i = 0; i < size; i++)
{
    printf("%d\n",arr[i]);
}

printf("n = %d\n",n);

}

void push(int x){
    if (top == size)
        return; 

    else{
        arr[top]=x;
        top++;
    }
}

int pop(){
    if (top == 0)
        return -1; 

    else{
        int val = arr[top-1];
        top--;
        return val;
    }
}