#include<stdio.h>
#include<conio.h>

int work(int a,int b);
int main() {
    int a=45,b=45;
    work(a,b);
    printf("add nmber is %d",work);
    return 0;
}
int work(int a,int b){
    return a+b;
}