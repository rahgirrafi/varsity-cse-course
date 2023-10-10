#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define studentNUmber 2

bool prime(int n);

int main(){
struct student {
    char firstName[50],lastName[50], eduMail[50];
    
    int roll;
};


struct student Student;

// for(int i = 0; i<studentNUmber; i++){
    printf("First Name: ");
    fgets(Student.firstName,50,stdin);
    printf("Last Name: ");
    fgets(Student.lastName,50, stdin);
    printf("Roll: ");
    scanf("%d", &Student.roll);
// }

// for(int i=0; i<studentNUmber; i++){
    if(prime(Student.roll)){
        strcpy(Student.eduMail,Student.firstName);
        strcat(Student.eduMail,Student.lastName);
        strcat(Student.eduMail,"@gmail.com");
    }
    else{
        for (int j = 0; j < 2; j++){
        Student.eduMail[j] = Student.firstName[strlen(Student.firstName)-3+j];
        Student.eduMail[j+2] = Student.lastName[j];
        }
        strcat(Student.eduMail,"@gmail.com");
    }
    
    // for (int i = 0; i < studentNUmber; i++)
    // {
        printf("%s",Student.firstName);
        printf("%s", Student.lastName);
        printf("\n");
        printf("%s",Student.eduMail);
    // }
    

}



bool prime(int n)
{
    if(n%2==0)
        return false;
    
    for(int i = 3; i<n/2;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}