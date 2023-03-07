#include <iostream>
using namespace std;
class Node
        {
        public:
            int Value;
            Node* pointer_to_next;
};
void insert_new_node_at_front(Node** head, int NewValue) //** a pointer to a pointer
{
    Node* new_node = new Node();
    new_node->Value = NewValue;

    new_node->pointer_to_next = *head;

    *head = new_node;
}
void print(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->Value<<endl;
        n = n->pointer_to_next;
    }
}

int main()
{
    Node* head = new Node();
    head->Value = 1;

    Node* second = new Node();
    second->Value = 2;

    Node* third = new Node();
    third->Value = 3;

    head->pointer_to_next = second;
    second->pointer_to_next = third;
    third->pointer_to_next = NULL;


    insert_new_node_at_front(&head, -1);  //passing address of head
    insert_new_node_at_front(&head, -2);
    print(head);



}
