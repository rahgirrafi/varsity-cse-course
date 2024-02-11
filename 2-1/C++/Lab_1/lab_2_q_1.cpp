//Four level inheritance, Animal,Dog, GUradDog, GermanShepherd.

#include<iostream>
using namespace std;   

class Animal {
    private:
    string name = "A";

    public:
    //constructor
    Animal(string name){
        this->name = name;
    }

    //getter
    string getName(){
        return name;
    }
};

class Dog : public Animal {
    private:
    int weight = 20;

    public:
    //constructor
    Dog(string name, int weight) : Animal(name){
        this->weight = weight;
    }
    

    //getter 
    int getWeight(){
        return weight;
    }

  

};  

class GuardDog : public Dog {
    private:
    int age = 5;

    public:
    //constructor
    GuardDog(string name, int weight, int age) : Dog(name, weight){
        this->age = age;
    }

    //getter
    int getAge(){
        return age;
    }
}; 

class GermanShepherd : public GuardDog {
    private:
    string color = "black";

    public:
    //constructor
    GermanShepherd(string name, int weight, int age, string color) : GuardDog(name, weight, age){
        this->color = color;
    }

    //getter
    string getColor(){
        return color;
    }

    //destructor
    ~GermanShepherd(){
        cout << "Destructor called" << endl;
    }
};

int main(){
    GermanShepherd gs("Tommy", 30, 10, "black");
    //print
    cout << "Name: " << gs.getName() << endl;
    cout << "Weight: " << gs.getWeight() << endl;
    cout << "Age: " << gs.getAge() << endl;
    cout << "Color: " << gs.getColor() << endl;


    return 0;
}