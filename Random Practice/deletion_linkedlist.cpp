#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
struct node *deletionat_begginng(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
struct node *deletionatIndex(struct node *head, int idx)
{
    struct node *temp = head;
    struct node *temp2 = head->next;
    int i = 0;
    while (i != idx)
    {
        temp = temp->next;
        temp2 = temp2->next;
        i++;
    }
    temp->next = temp2->next;
    free(temp2);
    return head;
}
struct node *deletionatlast(struct node *head)
{
    cout<<"hue";
    struct node *temp = head;
    struct node *temp2 = head->next;
    while (temp2 != NULL)
    {
        temp = temp->next;
        temp2 = temp2->next;
    }
    temp->next =temp2->next;
    free(temp2);
    return head;
}
int main()
{
    struct node *head = NULL, *newNode = NULL, *temp = NULL;
    int n, data;
    cout << "enter the size of a linked list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of a linkedlist at the position  " << i << " : ";
        cin >> data;
        newNode = createNode(data);
        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    cout << "before deletion of linkedlist" << endl;
    traversal(head);
    // head = deletionat_begginng(head);
    // head = deletionatIndex(head, 3);
    head = deletionatlast(head);
    cout << "after deletion of linkedlist" << endl;
    traversal(head);
    return 0;
}