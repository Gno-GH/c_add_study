#include <iostream>
using namespace std;
template<class Type>
class Stack
{
private :
    enum {MAX= 10};
    Type * items;
    int stacksize;
    int top;
public :
    explicit Stack(int ss = MAX);
    Stack(const Stack &st);//复制函数
    ~Stack(){delete [] items;}//析构函数
    bool isfull(){return top==stacksize;}
    bool isempty(){return top==0;}
    bool pop(Type &item); 
    bool push(const Type &item); 
    Stack & operator=(const Stack &st);
};
    template<class Type>
Stack<Type>::Stack(int ss):stacksize(ss),top(0)
{
    items = new Type[stacksize];
}
    template<class Type>
Stack<Type>::Stack(const Stack &st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new Type[stacksize];
    for(int i =0;i<top;i++)
        items[i] = st.items[i];
}
    template<class Type>
bool Stack<Type>::pop(Type &item)
{
    if(top>0)
    {
        item = items[--top];
        return true;
    }
    return false;
}
    template<class Type>
bool Stack<Type>::push(const Type &item)
{
    if(top<stacksize)
    {
        items[top++]=item;
        return true;
    }
    return false;
}
    template<class Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> &st)
{
    if(&st == this)return *this;
    delete []items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type[stacksize];
    for(int i=0;i<top;i++)
        items[i] = st.items[i];
    return *this;
}
int main()
{
    Stack<const char *> st1(3);
    Stack<const char *> st2(4);
    const char * items[4] = {"hello 1","hello 2","hello 3","hello 4"};
    st1.push(items[0]);
    st1.push(items[1]);
    st1.push(items[2]);
    const char *ss[10];
    st2.pop(ss[0]);
    cout<<ss[0]<<endl;
    st1.pop(ss[1]);
    cout<<ss[1]<<endl;
    return 0;
}
