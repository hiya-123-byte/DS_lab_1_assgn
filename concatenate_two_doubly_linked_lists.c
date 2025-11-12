#include <stdio.h>
#include <stdlib.h>
struct node {int d; struct node *p,*n;};
struct node * create (int n){
struct node *h = NULL, *t, *x;
for (int i=0; i<n; i++){
x = malloc(sizeof(struct node));
printf("Data %d: ",i+1);
scanf("%d", &x->d);
x->n=x->p=NULL;
if (!h) h=t=x;
else { t->n=x; x->p=t;t=x;}
}
return h;
}
void show (struct node*h){
if (!h){ printf("Empty \n"); return;}
for (;h;h=h->n) printf("%d ", h->d);
printf("\n");
}
struct node * join(struct node*a, struct node* b){
if (!a) return b; if (!b) return a;
struct node *t = a; while(t->n) t=t->n;
t->n=b;b->p=t;
return a;
}
int main (){
int n1,n2;
printf("Nodes in List 1: "); scanf("%d", &n1);
struct node *h1 =create(n1);
printf("Nodes in List 2: "); scanf("%d", &n2);
struct node *h2= create(n2);
printf("\n List 1: "); show(h1);
printf("List 2: "); show(h2);
printf("Concatenated: "); show(join(h1,h2));
return 0;
}