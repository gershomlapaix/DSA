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

    // Append a node to the list
    void appendNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value :" << n->key << ".Append another node with different key value\n";
        }

        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended.\n";
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }

                ptr->next = n;
                cout << "Node appended\n";
            }
        }
    }

    // Prepend node
    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value :" << n->key << ".Append another node with different key value\n";
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node appended\n";
        }
    }

    // insert a node after a particular node in the list
};

int main()
{
    return 0;
}