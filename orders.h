#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	struct Node* next;
	struct Node* pnext; //previous next
	struct bookOrder* ord;
}node;

typedef struct linkedList{
	struct Node* head, tail;
}ordersBuffer;

typedef struct bookOrder{	
	float price;
	int cID;
	char* category;
	char* title;
}bOrder; //Book Order

typedef struct customerData{
	char* name, addressm state, zipcode;
	int cID;
	float balance;
	char* sOrders[50], rOrders[50];
}cData;
