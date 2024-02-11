
//Write a C++ program to display Names, ROll No. and Grades of three students who have appeared in the examination. Declare the class of name, roll and grade with a constructor. 
#include <iostream>
using namespace std;
int main(){

class student{
    public:
    string name;
    int roll;
    char grade;
    student(string n, int r, char g){
        name = n;
        roll = r;
        grade = g;
    }
};
//Create an array of objects.
student s[3] = {student("Rahim", 1, 'A'), student("Karim", 2, 'B'), student("Faruk", 3, 'C')};

//Read and Display the contents of the array
for(int i = 0; i < 3; i++){
    cout << "Name: " << s[i].name << endl;
    cout << "Roll: " << s[i].roll << endl;
    cout << "Grade: " << s[i].grade << endl;

}

}