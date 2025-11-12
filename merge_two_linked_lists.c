#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node * next;
};
struct node* create_list(int n){
struct node *head = NULL, *temp, *new_node;
int i;
for(i=0; i<n;i++) {
new_node = (struct node*)malloc(sizeof(struct node));
printf("Enter data for node-%d:", i+1);
scanf("%d", &new_node->data);
new_node->next = NULL;
if (head ==NULL)
head = temp = new_node;
else {
temp->next = new_node;
temp = new_node;
}
}
return head;
}
void display (struct node *head) {
struct node *temp = head;
while(temp!=NULL){
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
struct node* merge_lists(struct node *head1, struct node *head2) {
if (head1 == NULL) return head2;
if (head2== NULL) return head1;
struct node *temp = head1;
while(temp->next!=NULL)
temp = temp->next;
temp->next = head2;
return head1;
}
int main(){
struct node *head1 = NULL, *head2 = NULL, *merged = NULL;
int n1, n2;
printf("Enter number of nodes in List 1: ");
scanf("%d", &n1);
head1= create_list(n1);
printf("Enter number of nodes in List 2: ");
head2 = create_list(n2);
printf("List 1: ");
display (head1);
printf("List 2: ");
display (head2);
merged = merge_lists (head1, head2);
printf("Merged Linked List: ");
display (merged);
return 0;
}