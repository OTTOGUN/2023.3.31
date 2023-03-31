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
        printf("���������ַ�\n");
        c = 0;
        scanf("%c", &c);
        getchar();
        if (islower(c) != 0) {
            c = toupper(c);
            switch (c) {
                case 'M':
                    printf("����һ\n");
                    c = rand();
                    break;
                case 'T':
                    printf("��������һ���ַ�\n");
                    if ((c = getchar()) != EOF && c == 'U') {
                        printf("���ڶ�\n");
                        c = rand();
                        break;
                    } else {
                        printf("������\n");
                        c = rand();
                        break;
                    }
                case 'W':
                    printf("������\n");
                    c = rand();
                    break;
                case 'F':
                    printf("������\n");
                    c = rand();
                    break;
                case 'S':
                    printf("��������һ���ַ�\n");
                    if ((c = getchar()) != EOF && c == 'T') {
                        printf("������\ns");
                        c = rand();
                        break;
                    } else {
                        printf("������\n");
                        c = rand();
                        break;
                    }
                default:
                    printf("�����ַ������ϱ�׼������������\n");
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
    printf("����a,b,c����ѡ����Ҫɾ�����ַ�\n");
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