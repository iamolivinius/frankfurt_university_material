#include <stdio.h>
#include <stdlib.h>

struct t_node {
     int number;
     struct t_node *next;
};

struct t_node * insert (struct t_node *head, int num){
  struct t_node * new_node = malloc(sizeof(struct t_node));
  new_node->number = num;
  new_node->next = head;

  return new_node;
}


void printlistvalues(struct t_node *head){
  while (head != NULL){
    printf("%d\n", head->number);
    head = head->next;
  }
}

void deletesecond(struct t_node *head){
  if (head->next == NULL) {
    printf("Die Liste enthaelt weniger als zwei Elemente.\n");
    return;
  }

  struct t_node *snd_node = head->next;
  free(snd_node);
  head->next = head->next->next;
}

int main(){
 struct t_node *list = NULL;

 list = insert(list, 20);
 list = insert(list, 30);
 list = insert(list, 15);
 list = insert(list, 10);

 printlistvalues(list);

 return 0;
}
