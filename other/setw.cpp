/*for insertnode in link list call function by refrance function name=(insert_front)


 for insertin middel call function (insertmiddel)


for insertnode  in last call function (insertattail) */

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insert_front(node **head, int newdata)
{

    node *nwnode = new node();
    nwnode->data = newdata;

    nwnode->next = *head;
    *head = nwnode;
}

void printlist(node *n)
{

    while (n != 0)
    {
        cout << n->data << " " << endl;

        n = n->next;
    }
}
void insertmiddel(node *raushan, int newdata2)
{

    node *newnode = new node();

    newnode->data = newdata2;

    newnode->next = raushan->next;

    raushan->next = newnode;
}

void insertatlast(node *t, int newdata3)
{

    node *newnode = new node();
    newnode->data = newdata3;

    newnode->next = NULL;
    t->next = newnode;
    t = newnode;
}
void todelete(node *head1, int key)
{
    node *temp = head1;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    node *delete1 = temp->next;

    temp->next = temp->next->next;

    delete delete1;
}

int main()
{

    node *head = NULL;

    insert_front(&head, 67);

    insert_front(&head, 68);
    insert_front(&head, 69);
    insert_front(&head, 60);

    insertmiddel(head->next->next, 258);
    node *tale = head->next->next->next->next;

    insertatlast(tale, 1000);

    insertatlast(tale, 2000);
    printlist(head);
    cout << "after delete" << endl;
    todelete(head, 258);

    printlist(head);

    return 0;
}