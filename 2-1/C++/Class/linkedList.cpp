#include <iostream>

//class for linked list
class linkedList{
    private:
        struct node{
            int data;
            node* next;
        };
        node* head;
        node* tail;
    public:
        linkedList(){
            head = NULL;
            tail = NULL;
        }
        void addNode(int n){
            node* temp = new node;
            temp->data = n;
            temp->next = NULL;
            if(head == NULL){
                head = temp;
                tail = temp;
            }
            else{
                tail->next = temp;
                tail = tail->next;
            }
        }
        void display(){
            node* temp = new node;
            temp = head;
            while(temp != NULL){
                std::cout << temp->data << " ";
                temp = temp->next;
            }
        }
};

int main(){
    linkedList list1;
    int n;
    std::cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        std::cin>>temp;
        list1.addNode(temp); 
    }
    
    list1.display();


}