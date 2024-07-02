#include<stdio.h>
#include<math.h>
void feature1(void);
void feature2(void);
void add(int x, int y);
void newfeature(void);



int main(void){
    printf("hello world\n");
    printf("my name is parth\n");
    int x = 5;
    int y = 7;
    add(x,y);

    
}

void feature1(void){
    printf("this is feature1\n");
    printf("this is best part of feature1\n");
    printf("new line in feature1\n");
    printf("next line\n");

}
void feature2(void){
    printf("this is feature2\n");
    printf("welocme to feature2\n");
}
void add(int x, int y){
    printf("the addition is : %d\n", x+y);
}

void newfeature(void){
    printf("this new-feature\n");
    printf("welcome to new feature\n");
}