#include <iostream>
using namespace std;
template <class Type>
class Stack
{
private :
    enum {MAX=10};
    Type items[MAX];
    int top;
public :
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type &item);
    bool pop(Type &item);
    int getlen()const;
};
    template<class Type>
Stack<Type>::Stack()
{
    top = 0;
}
    template<class Type>
bool Stack<Type>::isempty()
{
    return top == 0;
}
    template<class Type>
bool Stack<Type>::isfull()
{
    return top == MAX;
}
    template<class Type>
bool Stack<Type>::pop(Type &item)
{
    if(top<0)return false;
    item = items[--top];
    return true;
}
    template<class Type>
bool Stack<Type>::push(const Type &item)
{
    if(top>=MAX)return false;
    items[top++] = item;
    return true;
}
template<class Type>
int Stack<Type>::getlen()const
{
    return top;
}
int main()
{
    Stack<int> s;
    int item;
    int i = 0;
    for(i =0;i<10;i++)
    {
        cin>>item;
        s.push(item);
    }  
    cout<<"stack item length  "<<s.getlen()<<endl;
    while(!s.isempty())
    {
        s.pop(item);
        cout<<item<<endl;
    }
    return 0;
}
