#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
#define LEN 21
#define over"exit"
typedef struct ps Person;
struct ps
{
	char name[LEN];
	int pwd;
	struct ps* next;
	
};