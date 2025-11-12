#include<stdio.h>
#include<stdlib.h>
struct node {int data; struct node *next;};
struct node* create (int n) {
struct node *h=NULL, *t = NULL, *p;
for(int i=0;i<n;i++){
p = malloc(sizeof(struct node));
printf("Enter data%d: ",i+1);
scanf("%d", &p->data);
p->next = NULL;
if (!h) h=t=p; else t = t->next = p;
}
return h;
}
void show(struct node *h){
while (h) { printf ("%d ", h->data); h=h->next;}
printf("\n");
}
struct node* merge (struct node *a, struct node *b){
if (! a) return b; if (!b) return a;
struct node *r = NULL, *t = NULL;
while (a && b) {
struct node *p=malloc(sizeof(struct node));
if (a->data<=b->data) {p->data=a->data; a=a->next;}
else {p->data=b->data; b=b->next;}
p->next = NULL;
if (!r) r=t=p; else t = t->next =p;
}
for (struct node *x=a? a:b;x;x=x->next) {
struct node *p = malloc(sizeof(struct node));
p->data = x->data; p->next = NULL;
if(!r)r=t=p;else t=t->next=p;
}
return r;
}
int main(){
int n1, n2;
printf("Nodes in List 1: "); scanf("%d", &n1);
struct node *h1 = create(n1);
printf("Nodes in List 2: "); scanf("%d", &n2);
struct node *h2= create(n2);
printf("\n List 1: "); show (h1);
printf("List 2: "); show (h2);
printf("\nMerged: "); show(merge(h1,h2));
return 0;
}