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

//ջ����غ���
status initstack(Stack &s);//����һ��ջ
status pop(Stack &s,elemtype &e);//����ɾ����ջ��Ԫ��
status push(Stack &s,elemtype e);//����ջ��Ԫ��
status stackempty(Stack s);//�ж��Ƿ�Ϊ��ջ
void stack_queue(elemtype *str);//����ջʵ�ֶ���

int main()
{
    elemtype str[20];
    cout<<"--����ջʵ��һ������"<<endl;
    cout<<"�������ַ�����";
    cin>>str;
    stack_queue(str);
    return 0;
}

//����һ��ջ
status initstack(Stack &s){
    s.base=(elemtype *)malloc(initsize*sizeof(elemtype));
    if(!s.base){
        exit(OVERFLOW);
    }
    s.top=s.base;
    s.stacksize=initsize;
    return OK;
}

//����ɾ����ջ��Ԫ��
status pop(Stack &s,elemtype &e){
    if(stackempty(s)){
        return ERROR;
    }
    e=*(--s.top);
    return OK;
}

//����ջ��Ԫ��
status push(Stack &s,elemtype e){
    *(s.top++)=e;
    return OK;
}

//�ж��Ƿ�Ϊ��ջ
status stackempty(Stack s){
    if(s.base==s.top){
        return OK;
    }
    else{
        return ERROR;
    }
}

//����ջʵ�ֶ���
void stack_queue(elemtype *str){
    Stack s1,s2;
    elemtype e;
    int i=0;
    if(initstack(s1)&&initstack(s2)){
        cout<<"��һ��ջ����ɹ���"<<endl;
        cout<<"�ڶ���ջ����ɹ���"<<endl;
    }
    while(i<strlen(str)){
        push(s1,str[i]);
        i++;
    }
    while(!stackempty(s1)){
        pop(s1,e);
        push(s2,e);
    }
    cout<<"-���Ϊ:";
    while(!stackempty(s2)){
        pop(s2,e);
        cout<<e;
    }
}

