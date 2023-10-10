#include <stdio.h>
#include <string.h>
int top=-1;
void push(int arr[], int x, int size);
int pop(int arr[], int size);


int main(){
const int size= 10;
int arr[size];

push(arr, 10, size);
push(arr, 20, size);
pop(arr,size);

}

void push(int arr[], int x, int size){
    if (top == size)
        return; 

    else{
        top++;
        arr[top]=x;
        
    }
}

int pop(int arr[], int size){
    if (top == 0)
        return -1; 

    else{
        int val = arr[top];
        top--;
        return val;
    }
}