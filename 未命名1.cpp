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

status initstack(Stack &s);   //构造一个空栈
status stackempty(Stack s);  //判断是否为空栈
status gettop(Stack s,elemtype &e); //用e返回栈顶的值
status push(Stack &s,elemtype e);  //插入元素e为新的栈顶元素
status pop(Stack &s,elemtype &e);  //删除栈顶元素
void conversion(int i,int num);    //进制转换

int main(){
	int a,b;
    cout<<"请输入目标进制：";
    cin>>a;
    cout<<"请输入十进制数：";
    cin>>b;
    conversion(a,b);
	return 0;
}

//构造一个空栈
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
//用e返回栈顶的值
status gettop(Stack s,elemtype &e){
    if(s.base==s.top){
        return ERROR;
    }
    e=*(s.top-1);
    return OK;
}
//插入元素e为新的栈顶元素
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
//删除栈顶元素
status pop(Stack &s,elemtype &e){
    if(s.base==s.top){
        return ERROR;
    }
    e=*--s.top;
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
//进制转换
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
