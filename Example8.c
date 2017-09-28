/*
 ============================================================================
 Name        : Lab48.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

#include<string.h>

#include<malloc.h>

int main(void)

{
	char *s = malloc(sizeof(char)*100);
	char *dyn_s;

	int ln;

	printf("Enter the input string\n");

	scanf("%s",s);

	ln = strlen(s);

	dyn_s = s;

	dyn_s[strlen(s)]='\0';

	printf(dyn_s);

return 0;

}

