#include <iostream>
using namespace std;
struct node
{
    int data;
    node *pev;
    node *next;
};
void push(node **head, int newdata)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = *head;
    newnode->pev = NULL;

    if (*head != NULL)
    {
        (*head)->pev = newnode;
    }

    *head = newnode;
}
void insertatmiddel(node **head, int newdata, int key)
{
    node *newnode = new node();

    newnode->data = newdata;
    while ((*head)->data == key)
    {
        (*head) = (*head)->next;
    }

    newnode->next = (*head)->next;
    (*head)->next = newnode;
    newnode->pev = *head;
    newnode->next->pev = newnode;
}

void insertatlast(node **head, int newdata)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = NULL;
    node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->pev = temp;
}
void display(node *head)
{

    node *end = 0;
    while (head != NULL)
    {
        cout << head->data << " ";
        end = head;
        head = head->next;
    }

    cout << "moveing in backword";

    while (end != NULL)
    {
        cout << end->data << " ";
        end = end->pev;
    }
}

int main()
{

    node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    insertatmiddel(&head, 100, 2);
    insertatlast(&head, 200);
    display(head);

    return 0;
}