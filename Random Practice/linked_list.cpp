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
// insertion at the beginning
struct node *insertion(struct node *head, int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}
//insert the element at indexx 
struct node *insertionIndex(struct node *head, int data, int index)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *temp2;
    temp->data = data;
    temp2->next = head;
    int i = 0;
    while (i != index)
    {
        temp2 = temp2->next;
        i++;
    }
    temp->next = temp2->next;
    temp2->next = temp;
    return head;
}
//insert the element at lasst 
struct node *insertionatLast(struct node *head, int data)
{
    cout<<"heuy";
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *temp2=head;
    temp->data = data;
    while (temp2->next !=NULL)
    {
        temp2 = temp2->next;
    }
    temp->next = NULL;
    temp2->next = temp;
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
    cout << "before insertion of linkedlist" << endl;
    traversal(head);
   // head = insertionatLast(head, 90);
    

    // int ele;
    // cout << "enter the element you want insert at the beginning = ";
    // cin >> ele;
    //   head=insertion(head,ele);
    // int index;
    // cout << "enter the index you want insert the element = " << endl;
    // cin >> index;

    // head = insertionIndex(head, 90, index);
    // cout << "after insertion of linkedlist" << endl;
   
     head = insertionatLast(head,80);
    cout << "after insertion of linkedlist" << endl;
    traversal(head);
}