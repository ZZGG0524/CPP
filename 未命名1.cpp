#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

using namespace std;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define INFASIBLE -1
#define OVERFLOW -2

#define initsize 100
#define size_add 10
#define N 20
#define M 5

typedef int status;
typedef int elemtype;

typedef struct{
    elemtype *base;
    elemtype *top;
    int stacksize;
}Stack;

status initstack(Stack &s);   //����һ����ջ
status stackempty(Stack s);  //�ж��Ƿ�Ϊ��ջ
status gettop(Stack s,elemtype &e); //��e����ջ����ֵ
status push(Stack &s,elemtype e);  //����Ԫ��eΪ�µ�ջ��Ԫ��
status pop(Stack &s,elemtype &e);  //ɾ��ջ��Ԫ��
void conversion(int i,int num);    //����ת��

int main(){
	int a,b;
    cout<<"������Ŀ����ƣ�";
    cin>>a;
    cout<<"������ʮ��������";
    cin>>b;
    conversion(a,b);
	return 0;
}

//����һ����ջ
status initstack(Stack &s){
    s.base=(elemtype *)malloc(initsize*sizeof(elemtype));
    if(!s.base)
    {
        exit(OVERFLOW);
    }
    s.top=s.base;
    s.stacksize=initsize;
    return OK;
}
//��e����ջ����ֵ
status gettop(Stack s,elemtype &e){
    if(s.base==s.top){
        return ERROR;
    }
    e=*(s.top-1);
    return OK;
}
//����Ԫ��eΪ�µ�ջ��Ԫ��
status push(Stack &s,elemtype e){
    /*if(s.top-s.base>=initsize){
        elemtype newbase;
        newbase=(elemtype)realloc(s.base,(s.stacksize+size_add)*sizeof(elemtype));
        if(!newbase){
            exit(OVERFLOW);
        }
        s.top=s.base+s.stacksize;
        s.stacksize+=size_add;
    }*/
    *s.top++=e;
    return OK;
}
//ɾ��ջ��Ԫ��
status pop(Stack &s,elemtype &e){
    if(s.base==s.top){
        return ERROR;
    }
    e=*--s.top;
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
//����ת��
void conversion(int i,int num){
    elemtype e;
    Stack S;
    initstack(S);
    while(num){
        push(S,num%i);
        num/=i;
    }
    while(!stackempty(S)){
        e=*--S.top;
        if(e>=0 && e<=9){
			cout<<e;
		}
		else{
			cout<<(char)('A'+e-10)<<" "; 
		}

    }
    cout<<endl;
}
