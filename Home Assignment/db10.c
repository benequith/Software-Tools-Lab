#include<stdio.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    int x;
	
    *p = 25;
    free(p);
	
    x=*p;
    return x;
	
}
