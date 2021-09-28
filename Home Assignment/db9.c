#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char buff[15];
    int pass = 0;
	
    printf("\n Enter the password : \n"); //provide input greater than 15 characters in length
    gets(buff);
	
    if(strcmp(buff, "csen2152lab"))
        printf ("\n Wrong Password \n");
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }
	
    if(pass)
        printf ("\n Root privileges given to the user \n");
    
	return 0;
}
 /*Execute this code TWICE
 First time provide any random input less than 15 characters long
 Second time provide input greater than 15 characters in length
 Obserrve and reason out the difference using GDB*/