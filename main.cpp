#include <iostream>
#include <stack>

using namespace std;
/*********************************
 * the list head is the stack top
 ********************************/

typedef struct StackNode
{
    int data;
    struct StackNode* next;
} StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count = 0;
}LinkStack;


int Push(LinkStack *S, int e)
{
    LinkStackPtr s = new(StackNode);
    s->data = e;
    s->next = S->top;
    S->top = s;
    S->count++;
    return 1;
}

int Pop(LinkStack *S, int *e)
{
//    *e = S->top->data;
//    S->top = S->top->next;
//    S->count--;
//    return 1;
    LinkStackPtr p;
    if(S->count = 0)
    {
        return -1;
    }

    *e = S->top->data;
    p = S->top;
    S->top = S->top->next;
    delete(p);
    S->count--;
    return 1;
}

bool StackEmpty(LinkStack *S)
{
    if(S->count == 0)
        return true;
    return false;
}


int main()
{
    LinkStack s;
    int a;
    cout << s.count << endl;
    Push(&s,1);
    Push(&s,3);
    Pop(&s,&a);


    cout << s.top->data << "----" <<s.count << "-----" << a << endl;
    return 0;
}
