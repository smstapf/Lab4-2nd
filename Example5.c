/*
 ============================================================================
 Name        : Example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include<stdio.h>
#include<malloc.h>
void main()
{
    char *a = malloc(sizeof(char)*4);
    a = "hey";
    free( a );
	a = malloc(sizeof(char)*6);
    a = "hello";
    printf("%s",a);
}
