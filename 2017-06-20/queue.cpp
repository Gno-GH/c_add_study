#include"queue.h"
#include<cstdlib>
void Customer::set(long when)
{
    arrive = when;
    processtime = std::rand()%3+1;
    return ; 
}
Queue::Queue(int qs):qsize(qs)
{
    rear = front =NULL;
    items = 0;
}
Queue::~Queue()
{
    Node *temp;
    while(front!=NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}
bool Queue::isfull() const
{
    return items == qsize;
}
bool Queue::isempty() const
{
    return items == 0;
}
int Queue::queuecont() const
{
    return items;
}
bool Queue::enqueue(const Item &item)
{
    if(isfull())return false;
    Node *node = new Node;
    node->item = item;
    node->next = NULL;
    items++;
    if(front==NULL)
        front = node;
    else rear->next = node;
    rear = node;
    return true;
}
bool Queue::delqueue(Item &item)
{
    if(isempty())return false;
    items--;
    item = front->item;
    Node *temp;
    temp = front;
    front = front->next;
    delete temp;
    if(items==0)rear=NULL;
    return true;
}
