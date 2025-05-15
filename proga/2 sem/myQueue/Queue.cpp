#include "QueueException.cpp"
#include <iostream>

using namespace std;

template <class Item>
class Queue{
    struct Element{
        Item inf;
        Element *next;
        Element(Item x): inf(x), next(nullptr){}
    };
    Element *head, *tail;
    public:
        Queue(): head(nullptr), tail(nullptr){}
        bool Empty(){
            return head == nullptr;
        }
        Item Get(){
            try{
                if (Empty()){
                    throw QueueException("QueueException: get - queue empty");
                    return 0;
                }else{
                    Element *t = head;
                    Item i = t->inf;
                    head = t->next;
                    if (head == nullptr){
                        tail = nullptr;
                    }
                    delete t;
                    return i;
                }
            }catch(const QueueException &e){
                cout << e.what() << endl;
                return 0;
            }
        }
        void Put(Item data){
            Element *t = tail;
            tail = new Element(data);
            if(!head){
                head = tail;
            }else{
                t->next = tail;
            }
        }
};