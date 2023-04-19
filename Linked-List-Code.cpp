#include <iostream>
using namespace std;

struct Node //Structure to build data and next_node_address portions of node;
{
    int data;
    Node* next;

};

class LinkedList    //Class used to build head and tail nodes of linked list.
{
    Node* head, * tail; //Head and tail nodes declared.

    public: 
    
    LinkedList() //Constructor that initializes head and tail nodes to NULL.
    {
        head = NULL;
        tail = NULL;
    }

    void newNode(int number) //Function that inserts an inputted integer into a temporary node.
    {
        Node* temp = new Node(); //Creation of the temporary node.
        temp->data = number; //Data inserted into data portion of temporary node.
        temp->next = NULL; //Next_node_address portion initialized to NULL;

        if (head == NULL) //If no node apart from the head and tail node exists, head and tail node assume the position of the newly created temporary node.
        {
            head = temp;
            tail = temp;
        }
        else //If at least one node exists:
        {
            tail->next = temp; //Next_node_address portion of node at which tail is assigned to the address of the newly created temporary node.
            tail = tail->next; //Tail node assumes position of temporary node.
        }
    }

    void printList() //Function that prints the data of each node within the linked list.
    {   
        Node* n = head;

        while (n != NULL)
        {   
            cout << n->data << endl;
            n = n->next;
        }

    }
};

//Driver code
int main()
{
    LinkedList a;
    
    a.newNode(2);
    a.newNode(4);

    a.printList();

    return 0;
}
