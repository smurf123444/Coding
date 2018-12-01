#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "functions.h"

int main() {

    node_t * test_list = malloc(sizeof(node_t));
    test_list->val = 123;
    test_list->next = malloc(sizeof(node_t));
    test_list->next->val = 223;
    test_list->next->next = malloc(sizeof(node_t));
    test_list->next->next->val = 354;
    test_list->next->next->next = malloc(sizeof(node_t));
    test_list->next->next->next->val = 464;
    test_list->next->next->next->next = NULL;
   int quit = 0;
   int val = 1;
    while(!quit){
    
   
    
    printf("Welcome to Linked Lists, What would you like to push?\n");
    scanf("%d", &val);  
    if (val > 0){
    push(&test_list, val);
    printf("\n");
    print_list(test_list);
    printf("\n");
    printf("What would you like to remove by value?\n");
    scanf("%d", &val);
    printf("\n");
    remove_by_value(&test_list, val);
    printf("What would you like to remove by index?\n");
    scanf("%d", &val);
    remove_by_index(&test_list, val);
    printf("\n");
    print_list(test_list);
    printf("\n");
    quit = 1;
    //printf("Deleting last one on list now\n");
    //remove_last(test_list);
    //print_list(test_list);
    }
    else
    {
        quit = 1;
    }
    }
    //print_list(test_list);
    return (0);
}