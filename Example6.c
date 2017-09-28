/*
 ============================================================================
 Name        : Example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
	char *ch;
	*ch=malloc(sizeof(char)*3);
	ch[0]='3';
	ch[1]='a';
	while (ch[0] > '0')
	{
		printf("Character: %c and %c\n", ch[0], ch[1]);
		ch[0]--;
	}
	printf(" main:%p\n ch:%p\n ch+1:%p\n ",&main,ch,ch+1);
	return ch[1];
}


