#include <iostream>
using namespace std;

class Human{
    private:
    string name;
    int age;

    public:
    Human(string name,int age) {
        this->name= name;
        this->age = age;
    }

    void  set_age(string name, int age){
        
    }
    int get_age(){
        return age;
    }

    string get_name(){
        return name;
    }
};

class Student : public Human{
   private:
    int level;
    int id;
    
    public:
    Student(int level, int id, string name, int age): Human(name, age){
        this->level = level;;
        this->id = id;
    }
    void print(){
        cout << "Name: " <<  get_name() << endl;
        cout << "Age: " << get_age() << endl;
        cout << "Level: " << level << endl;
        cout << "ID: " << id << endl;
    }
};

int main(){
    Student s1(1, 123, "John", 20);
    s1.print();
    return 0;
}