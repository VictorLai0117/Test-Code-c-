#include<stdio.h>

int min(int,int);
int main(){
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("min=%d\n",min(x,y));
}

int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}