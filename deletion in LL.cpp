#include<iostream>
using namespace std;

class node{
	public:
	int value;
	node*next;
	
	node(int data){
		value = data;
		next = NULL;
	}	
};

void insertatEnd(node* &head,int data){
	node* new_node = new node(data);
	node* temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	} 
temp -> next = new_node;	
}

void deleteathead(node* &head){
	node*temp = head;
	head = head -> next;
	cout << "Head is deleted"<<endl;
	 free(temp);
}

void deleteAtEnd(node* &head){
	node* secondLast = head;
	while(secondLast ->next->next != NULL){
		secondLast  = secondLast -> next;
		
	}
	cout <<" last node Deleted\n";
	//Now second Last points to second last node
	node* temp = secondLast -> next;
	secondLast -> next = NULL;
	free(temp);
}

void traverse(node*head){
	node*temp = head;
	while(temp!=NULL){
	cout<<temp->value<<" ";
	temp = temp -> next;
	
}
}
int main(){
		node*head = new node(10);
		insertatEnd(head,34);
		insertatEnd(head,54);
		insertatEnd(head,64);
//		deleteathead(head);
		deleteAtEnd(head);
		traverse(head);
		
	return 0;
}