#include <stdio.h>

int main(){
    FILE *o;
    o=fopen("stack.txt", "r");
    if(o!= NULL){

    }
    else{
        printf("Couldn't open file");
    }
}