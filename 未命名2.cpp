#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

using namespace std;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define INFASIBLE -1
#define OVERFLOW -2

#define initsize 100
#define lenth_add 10

typedef int status;
typedef char elemtype;

typedef struct{
    elemtype *top;
    elemtype *base;
    int stacksize;
}Stack;

//栈的相关函数
status initstack(Stack &s);//构造一个栈
status pop(Stack &s,elemtype &e);//返回删除的栈顶元素
status push(Stack &s,elemtype e);//插入栈顶元素
status stackempty(Stack s);//判断是否为空栈
void stack_queue(elemtype *str);//两个栈实现队列

int main()
{
    elemtype str[20];
    cout<<"--两个栈实现一个队列"<<endl;
    cout<<"请输入字符串：";
    cin>>str;
    stack_queue(str);
    return 0;
}

//构造一个栈
status initstack(Stack &s){
    s.base=(elemtype *)malloc(initsize*sizeof(elemtype));
    if(!s.base){
        exit(OVERFLOW);
    }
    s.top=s.base;
    s.stacksize=initsize;
    return OK;
}

//返回删除的栈顶元素
status pop(Stack &s,elemtype &e){
    if(stackempty(s)){
        return ERROR;
    }
    e=*(--s.top);
    return OK;
}

//插入栈顶元素
status push(Stack &s,elemtype e){
    *(s.top++)=e;
    return OK;
}

//判断是否为空栈
status stackempty(Stack s){
    if(s.base==s.top){
        return OK;
    }
    else{
        return ERROR;
    }
}

//两个栈实现队列
void stack_queue(elemtype *str){
    Stack s1,s2;
    elemtype e;
    int i=0;
    if(initstack(s1)&&initstack(s2)){
        cout<<"第一个栈构造成功！"<<endl;
        cout<<"第二个栈构造成功！"<<endl;
    }
    while(i<strlen(str)){
        push(s1,str[i]);
        i++;
    }
    while(!stackempty(s1)){
        pop(s1,e);
        push(s2,e);
    }
    cout<<"-输出为:";
    while(!stackempty(s2)){
        pop(s2,e);
        cout<<e;
    }
}

