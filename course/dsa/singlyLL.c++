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
    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = nodeExists(k);

        if (ptr == NULL)
        {
            cout << "No node exists with key value " << k << endl;
        }
        else
        {

            if (nodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value :" << n->key << ".Append another node with different key value\n";
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted\n";
            }
        }
    }

    // delete a node by unique key

    void deleteNodeByKey(int k)
    {
        if (head == NULL)
        {
            cout << "Singly linked list is empty.\n";
            return;
        }
        else if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "Node unlinked with the key value.\n";
            }
            else
            {
                Node *temp = NULL;
                Node *prevptr = head;
                Node *currentptr = head->next;
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }

                if (temp != NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Node unlinked with key values.\n";
                }
                else
                {
                    cout << "Doesn't exist with key value :" << k << endl;
                }
            }
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "No nodes is singly linked list.\n";
        }
        else
        {
            cout << "Singly linked list values : ";

            Node *temp = head;

            while (temp != NULL)
            {
                cout << "(" << temp->key << " , " << temp->data << " )" << endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    SinglyLL s;
    int option;
    int key1, k1, nodeData;

    do
    {
        cout << "1. Append node\n";
        cout << "2. Prepend node\n";
        cout << "3. Insert node after\n";
        cout << "4. delete node by key\n";
        cout << "5. print the linked list values.\n";
        cout << "6. Clear screen\n";

        cout << "\n\t Your option: ";
        cin >> option;
        Node *n1 = new Node();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Append. Enter key & data of the node.\n";
            cin >> key1;
            cin >> nodeData;
            n1->key = key1;
            n1->data = nodeData;
            s.appendNode(n1);
            break;

        case 2:
            cout << "Prepend. Enter key & data of the node.\n";
            cin >> key1;
            cin >> nodeData;
            n1->key = key1;
            n1->data = nodeData;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert after. Enter key & data of the node.\n";
            cout << "\n Desired key: ";
            cin >> k1;

            cout << "Node values: ";
            cin >> key1;
            cin >> nodeData;
            n1->key = key1;
            n1->data = nodeData;
            s.insertNodeAfter(k1, n1);
            break;

        case 4:
            cout << "Which key to delete on ? ";
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;

        case 5:
            s.printList();
            break;

        case 6:
            system("cls");
            break;

        default:
            cout<<"\nEnter the proper option\n";
        }
    } while (option != 0);

    return 0;
}