
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


