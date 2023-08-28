#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *insert(node *head)
{
    int data;
    printf("Enter Data: ");
    scanf("%d", &data);

    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = data;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
        head->next = head;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        p->next = head;
        temp->next = p;
    }

    return head;
}
int total_time(node *head, int process_time)
{
    node *p = head;
    node *temp = head;
    int time = 0;
    while (temp != NULL)
    {
        if (length(temp) == 1)
        {
            if (temp->data <= 0)
            {
                temp = NULL;
            }
            else if (temp->data < process_time)
            {
                time += temp->data;
                temp = NULL;
            }
            else
            {
                time = time + process_time;
                temp->data = temp->data - process_time;
                temp = temp->next;
            }
        }
        else if (length(temp) > 1)
        {
            if (temp->data > 0)
            {
                if (temp->data > process_time)
                {
                    time = time + process_time;
                    temp->data = temp->data - process_time;
                    p = temp;
                    temp = temp->next;
                }
                else
                {
                    time = time + temp->data;
                    temp->data = temp->data - temp->data;
                    p->next = temp->next;
                    temp = p->next;
                }
            }
            else
            {
                p->next = temp->next;
                temp = p->next;
            }
        }
    }
    return time;
}

int length(node *head)
{
    int count = 0;
    node *temp = head;
    do
    {
        if (temp == NULL)
        {
            return 0;
        }
        count++;
        temp = temp->next;
    } while (temp != head);

    return count;
}

int main()
{
    int choice;
    node *head = NULL;
    int nodes, process_time, time = 0;

    printf("Enter numbers of nodes: ");
    scanf("%d", &nodes);
    for (int i = 0; i < nodes; i++)
    {
        head = insert(head);
    }

    printf("Enter the time:");
    scanf("%d", &process_time);
    time = total_time(head, process_time);
    printf("Total time: %d ms", time);

    return 0;
}
