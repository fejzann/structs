/**
*\ file structs
*\ brief implementing lists, trees, and other structs
*\ author: fejzanN
*/
#ifndef STRUCT_H
#define STRUCT_H
#define SAIR 99

/* structures declaration */

typedef struct list{
    struct dataList* head;
    int node_number;
}list;

typedef struct dataList{
    int data;
    struct dataList* next;
}dataList;

/* methodes of manipulation */

void readListFifo(list* listPointer);
void writeListFifo(list* listPointer);
void readListLifo(list* listPointer);
void writeListLifo(list* listPointer);