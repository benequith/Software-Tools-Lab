#include<stdio.h>

int main(){
    int *a = (int*)malloc(sizeof(int)*10);
    int x,i;
	
    for(i=0;i<10;i++)
        a[i]=i;
    
	i=0;
    while(i<10)
    {
        x=x+a[i];
        ++i;
    }
	
    printf("x=%d",x);
}
