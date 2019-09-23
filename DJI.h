/***********Author********************
 **********MAO JINRUI****************/ 
 
#include <stdio.h>

typedef enum myEnum
{
	ERR, SUCCESS, DONE
}
myEnum;

typedef struct myStruct
{
	myEnum var_1;
	int var_2;
	float * var_3;
}
myStruct;