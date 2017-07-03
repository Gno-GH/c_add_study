#pragma once
class Customer
{
private :
    long arrive;
    int processtime;
public :
    Customer(){arrive=processtime=0;}
    void set(long when);
    long when() const{return arrive;}
    int ptime() const{return processtime;}
};
typedef Customer Item;
class Queue
{
private :
    struct Node {Item item;struct Node * next;};
    enum{Q_SIZE = 10};
    Node *front;
    Node *rear;
    int items;
    const int qsize;
    Queue(const Queue &q):qsize(0){}//复制函数私有化
    Queue &operator=(const Queue &q){return *this;}//赋值函数私有化
public :
    Queue(int qs=Q_SIZE);
    ~Queue();
    bool isfull() const;
    bool isempty() const;
    int queuecont() const;
    bool enqueue(const Item &item);
    bool delqueue(Item &item);
};

