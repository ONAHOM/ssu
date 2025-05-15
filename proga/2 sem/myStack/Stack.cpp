#include "StackException.cpp"
#include <iostream>

using namespace std;

template <class Item>
class Stack
{
    struct Element
    {
        Item inf;
        Element *next;
        Element(Item x, Element *p) : inf(x), next(p) {}
    };

    Element *head;

public:
    Stack() : head(nullptr)
    {}

    bool Empty()
    {
        return head == nullptr;
    }

    Item Pop()
    {
        try{
            if (Empty())
            {
                throw StackException("StackException: Pop - stack empty");
                return 0;
            }
            Element *r = head;
            Item i = r->inf;
            head = r->next;
            delete r; 
            return i;
        }catch(const StackException &e){
            cout << e.what() << endl;
            return 0;
        }

    }

    void Push(Item data)
    {
        head = new Element(data, head);
    }

    Item Top(){
        try {
            if (Empty()){
                throw StackException("StackException: Top - stack empty");
                return 0;
            }
            return head->inf;
        }catch(const StackException &e){
            cout << e.what() << endl;
            return 0;
        }
        
    }
};
