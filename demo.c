#include<stdio.h>

void fun1(void);
void fun2(void);

int main(void){
    fun1();
    printf("this is main\n");
}
void fun1(void){
    printf("this is fun1\n ");
    fun2();
}
void fun2(void){
    printf("this is inside fun2\n");
    
}