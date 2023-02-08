//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    /*int c=5;
    struct node a,b,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8*/
   
  /*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
  */
  
    /*struct node d;
    b.next=&d;
    d.value=11;
    d.next=NULL;
    printf("\n%d\n", d.value );
    printf("%d\n", b.next->value );
    printf("%d\n", a.next->next->value );
    printf("%d\n", head->next->next->value );*/
  
    
  /*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
  */
    
    /*struct node z;
    head=&z;
    head->value=2;
    z.next=&a;
    printf("\n%d\n", head->value );
    printf("%d\n", head->next->value );
    printf("%d\n", head->next->next->value );
    printf("%d\n", head->next->next->next->value );*/

  /*  Exercise III Use loop to print everything
      int i,n=5;
      for(i=0;i<n;i++){
          printf("%3d", tmp->value);
        // What is missing???
      }
  */
  
    /*printf("\n");
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
    int i, n=4;
    for(i=0;i<n;i++){
      printf("%3d",tmp->value);
      tmp=tmp->next;
    }*/
  
  /*  Exercise IV change to while loop!! (you can use NULL to help)
        while(){
          printf("%3d", tmp->value);
          // What is missing???
      }
  */
  
    /*printf("\n\n");
    tmp=head;  
    while(tmp!=NULL){
      printf("%3d", tmp->value);
      tmp=tmp->next;
    }*/
    
  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
        //use a loop to help
          
  */

  int c=5;
  struct node b,*head;
  typedef struct node Node;
  typedef Node* NodePtr;
  NodePtr tmp;
  NodePtr p=(NodePtr) malloc(sizeof(Node));
  head=p;
  p->value=c;
  int i,n=4;
  for(i=0;i<n;i++){
    p->next=(NodePtr) malloc(sizeof(Node));
    p=p->next;
    p->value=c+i+1;
    p->next=NULL;
    
  }
  
  p=head;
  while(p!=NULL){
      printf("%3d", p->value);
      p=p->next;
  }
  printf("\n");
  
    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
  p=head;
  tmp=p;
  while(tmp!=NULL){
    printf("Deleting %d\n",tmp->value);
    tmp=p->next;
    free(p);
    p=tmp;
    
  }
    return 0;
}
