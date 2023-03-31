//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

#ifndef _DEFINE_H
#define _DEFINE_H
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;

#endif
/*
int main() {
    char c = 0;
    c = rand();
    while (c) {
        printf("请输入首字符\n");
        c = 0;
        scanf("%c", &c);
        getchar();
        if (islower(c) != 0) {
            c = toupper(c);
            switch (c) {
                case 'M':
                    printf("星期一\n");
                    c = rand();
                    break;
                case 'T':
                    printf("请输入下一个字符\n");
                    if ((c = getchar()) != EOF && c == 'U') {
                        printf("星期二\n");
                        c = rand();
                        break;
                    } else {
                        printf("星期三\n");
                        c = rand();
                        break;
                    }
                case 'W':
                    printf("星期四\n");
                    c = rand();
                    break;
                case 'F':
                    printf("星期五\n");
                    c = rand();
                    break;
                case 'S':
                    printf("请输入下一个字符\n");
                    if ((c = getchar()) != EOF && c == 'T') {
                        printf("星期六\ns");
                        c = rand();
                        break;
                    } else {
                        printf("星期日\n");
                        c = rand();
                        break;
                    }
                default:
                    printf("输入字符不符合标准，请重新输入\n");
                    c = rand();
            }
        }
    }
    return 0;
}*/

/*
void delete(char* Pointer,char c){
    if(strcmp(Pointer[0],c) == 0){
        *Pointer = ' ';
    }else{
        if(Pointer != NULL){
            Pointer++;
            delete(Pointer,c);
        }
    }
}

int main(){
    char target_string[] = {'a','b','c','\0'};
    printf("请在a,b,c中挑选出想要删除的字符\n");
    char target_character = 0;
    scanf("%c",&target_character);
    delete(target_string,target_character);
    printf("%s",target_character);
}*/

#define SQLMAXSIZE 100
typedef int SqlElemType;
typedef struct _Sqlist{
    SqlElemType *base;
    int length;
} Sqlist;

Status Getelem(Sqlist *L,int position,SqlElemType *e){
    if(position < 1 || position > L->length)
        return ERROR;
    *e = L->base[position - 1];
    return OK;
}