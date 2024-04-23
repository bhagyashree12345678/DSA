#include<iostream>
#include <cstdlib>

using namespace std;

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
};

void push(struct stack* ptr , int val){
    if(isFull(ptr)){
        cout<<"stack overflow"<<endl;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;

    };
}

int pop(struct stack* ptr , int val){
       if (isEmpty(ptr)){
      cout<<"stack underflow"<<endl;
      return -1;
    }else
    {
       int val = ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}

int main(){
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size  = 80;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    cout<<"stack has been created sucessfully"<<endl;
   
    
}