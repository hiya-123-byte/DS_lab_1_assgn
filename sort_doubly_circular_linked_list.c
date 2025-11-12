#include <stdio.h>
#include <stdlib.h>
struct node {int d; struct node *p,*n;};
struct node* create(int n){
struct node *h=NULL,*t,*x;
for(int i=0; i<n;i++){
x = malloc(sizeof( struct node));
printf("Enter data %d: ",i+1);
scanf("%d",&x->d);
if (!h){h=t=x;h->n=h->p=h;}
else{ t=h->p;t->n=x;x->p=t;x->n=h;h->p=x;}
}
return h;
}
void show (struct node *h){
if (! h) { printf ("Empty \n"); return;}
struct node *t=h;
do { printf ("%d ", t->d);t=t->n;} while(t!=h);
printf("\n");
}
void sort (struct node*h){
if (!h) return;
struct node *i,*j; int t;
do { j= i->n;
while (j!=h){
if (i->d > j->d) {t=i->d; i->d=j->d; j->d=t;}
j=j->n;
}
i=i->n;
} while(i->n!=h);
}
int main(){
int n; printf("Nodes: "); scanf("%d", &n);
struct node *h=create (n);
printf("Original: "); show(h);
sort(h);
printf("Sorted: "); show (h);
return 0;
}