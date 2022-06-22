#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLL
{
public:
    Node *head;

    SinglyLL()
    {
        head = NULL;
    }

    SinglyLL(Node *n)
    {
        head = n;
    }

    // check if the node exists using key value
    Node *nodeExists(int k)
    {
        Node *temp = NULL;

        Node *ptr = head;

        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }

            ptr = ptr->next;
        }

        return temp;
    }

   

    // insert a node after a particular node in the list
};

int main()
{
    return 0;
}