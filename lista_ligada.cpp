#include <iostream>
#include <string>
using namespace std;


class cList {
protected:
    class Node
    {
    public:
        Node* next;
        int age;
        string name;
        Node(int _age, string _name)
        {
            age = _age;
            name = _name;
        }
    };
    Node* list;
public:
    void addNode(int age, string name);
    void printList();
    void deleteNode();
    void deleteLastNode();
    int getLength();
};

void cList::addNode(int age, string name)
{
    Node* newNode = new Node(age, name);
    if (list == NULL)
    {
        list = newNode;
    }
    else
    {
        Node* aux = list;
        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = newNode;
    }
}

void cList::deleteNode()
{
    // Node aux

}

void cList::deleteLastNode()
{
    Node* aux = list;
    while (aux->next != NULL)
    {
        aux = aux->next;
    }
    delete aux;
}

int cList::getLength()
{
    int counter = 0;
    Node* aux;
    for (aux = list; aux != NULL; aux = aux->next)
    {
        counter++;
    }
    return counter;
}


void cList::printList()
{
    Node* aux = list;
    
    // -> Standard way to print each node

    /*for (aux = list; aux != NULL; aux = aux->next)
    {
        cout << "Hello my name's " << aux->name << " and i'm " << aux->age << " years old." << endl;
    }*/

    // -> Another FUNY road to print all nodes
    int i = -1;
    while (i++, i < getLength())
    {
        cout << "Hello my name's " << aux->name << " and i'm " << aux->age << " years old." << endl;
        aux = aux->next;
    }
}

// aux length

int main()
{
    cList* list = new cList();
    list->addNode(21, "alexis");
    list->addNode(15, "Diego");
    list->addNode(12, "Melissa");
    list->addNode(12, "Jose");
    cout << list->getLength();
    list->printList();
    return 0;
}