#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	char *name;
	struct list *next;
	struct list *prev;
}list;

void display(list *start){
	list *i = start;
	for ( ; i != NULL; i=i->next){
		printf("%s\n", i->name);
	}
}


list* create (list *last){
	list *i = (list*)malloc(sizeof(list));
	char name_of_element[10];
  printf("Enter the name of the element: ");
  scanf("%s", name_of_element);
  i->name = strdup(name_of_element);
	i->next = NULL;
	i->prev = NULL;

	return i;
}

list* add_element(list *last) {
    list *p;
    list *i = (list*)malloc(sizeof(list));
    char name_of_element[10];

    printf("Enter the name of the element: ");
    scanf("%s", name_of_element);

    p = last->next;
    last->next = i;
    i->name = strdup(name_of_element);
    i->next = p;

    return i;
}

list* delete_element(list *last, list *start){
    list *temp;
    temp = start;
    while(temp->next != last){
        temp = temp->next;
    }
    temp->next = last->next;
    free(last);

		return temp;
}


list* search_element(list *start, char name){
    list *tmp = start;

    while(tmp!=NULL){
			if(tmp->name == name){
				return tmp;
			}
			tmp = tmp->next;
		}

    return NULL;
}

list* deleteList(list *start)
{
   list *current = start;
	 list *tmp;

   while (current->next != NULL)
   {
       tmp = current->next;
       free(current);
       current = tmp;
   }
   start = NULL;
}

int main(){

    int n, count=0;
    list *start = NULL;
    list *last = NULL;
    list *i = NULL;


    while(1){
				printf("\n");
				printf("0) Exit the program \n");
        printf("1) Create the first element\n");
        printf("2) Add the element to the end\n");
        printf("3) Remove the element from the end\n");
        printf("4) Display list\n");
        printf("5) Delete entire list\n");
        printf("6) Search for a given element\n");
        printf("\n");
        printf("Enter the command number: \n");
        scanf("%d", &n);

				if(n == 0){
					exit(1);
				}

        if(n == 1){
            char name;

            i = create(last);
            if (count>=1){
                last = i;
                count++;
								printf("\n");
                printf(">>The Head element was changed<<\n");
            }
            else {
                start = i;
                last = i;
                count++;
								printf("\n");
                printf(">>The Head element was created<<\n");
            }
        }

        if(n == 2){
            i = add_element(last);
            last = i;
            printf(">>The new element was created<<\n");
        }

        if(n == 3){
            i = delete_element(last, start);
            printf(">>The last element was deleted<<\n");
        }

        if(n == 4){
            if(start->name != NULL){
              display(start);
            }else{
							printf("The list is empty");
						}
        }

        if(n == 5){
					i = deleteList(start);

        }

        if(n == 6){
						char k;
						printf("Enter the name of the element\n");
						scanf("%s", &k);
						i = search_element(start, k);
						printf("The position of the element is %d\n", i);
        }
    }
    return 0;

}
