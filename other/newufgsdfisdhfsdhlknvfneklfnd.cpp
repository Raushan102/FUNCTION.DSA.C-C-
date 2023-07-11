#include <iostream>
using namespace std;
struct node
{

    int data;
    node *next;
};
void print(node *head)
{
    while (head != NULL)
    {

        cout << head->data << " " << endl;
        head = head->next;
    }
}
void insertatfront(node **head, int newdata)
{

    node *newnode = new node();

    newnode->data = newdata;
    newnode->next = *head;

    *head = newnode;
}
void insertatmiddel(node *raushan, int newdata)
{
    node *newnode = new node();

    newnode->data = newdata;
    newnode->next = raushan->next;

    raushan->next = newnode;
}
void insertatlast(node *tail, int newdata)
{

    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = NULL;
    tail->next = newnode;
    tail=newnode;
}

int main()
{

    node *head = NULL;
    insertatfront(&head, 1);
    insertatfront(&head, 3);
    insertatfront(&head, 4);
    insertatfront(&head, 5);

    insertatmiddel(head->next, 2);

    node *tail = head->next->next->next->next;

    insertatlast(tail, 6);

    print(head);

    return 0;
}