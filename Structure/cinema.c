#include <stdio.h>
#include <stdlib.h>

typedef struct cinema{
	char *name;
  int *time;
  int *quantity;
	struct cinema *next;
  struct cinema *prev;
}cinema;

void display(cinema *start){
	cinema *i = start;
  for ( ; i != NULL; i=i->next){
		printf("%s\n", i->name);
	}
}

cinema* create (cinema *last){
	cinema *i = (cinema*)malloc(sizeof(cinema));
	char name_of_element[10];
  printf("Enter the name of the element: ");
  scanf("%s", name_of_element);
  i->name = strdup(name_of_element);
	i->next = NULL;

	return i;
}

cinema* add_element(cinema *last) {
    cinema *p;
    cinema *i = (cinema*)malloc(sizeof(cinema));
    char name_of_element[10];
    if(last != NULL){
    printf("Enter the name of the movie: ");
    scanf("%s", name_of_element);

    p = last->next;
    last->next = i;
    i->name = strdup(name_of_element);
    i->next = p;
    printf("\n>>The new movie was created<<\n");
    return i;
    }else{
    printf(">>Wrong! For start, enter the Head movie<<");
    printf("\n");
  }
}

cinema* delete_element(cinema *last, cinema *start){
    cinema *temp;
    temp = start;
    if(last != NULL){
    while(temp->next != last){
        temp = temp->next;
    }
    temp->next = last->next;
    free(last);
    printf("\n>>The last movie was deleted<<\n");
		return temp;
  }else{
    printf("\n>>Wrong! The list is empty<<\n");
  }
}


cinema* search_element(cinema *start, char *name){
    cinema *tmp = start;

    for(;tmp!=NULL;tmp=tmp->next){
      if(strcmp(tmp->name, name)==0){
            return tmp;
            break;
      }
			tmp = tmp->next;
		}
    return NULL;
}

cinema* deleteList(cinema *start){
   cinema *current = start;
	 cinema *tmp;

   while (current != NULL)
   {
       tmp = current->next;
       free(current);
       current = tmp;
   }
   start = NULL;
}


int main(){
    int n, count=0;
    cinema *start = NULL;
    cinema *last = NULL;
    cinema *i = NULL;

    while(1){
				printf("\n");
        printf("MENU:\n");
				printf("\t~0) Exit the program \n");
        printf("\t~1) Create the first movie\n");
        printf("\t~2) Add the movie to the end\n");
        printf("\t~3) Remove the movie from the end\n");
        printf("\t~4) Display list\n");
        printf("\t~5) Delete entire list\n");
        printf("\t~6) Search for a given movie\n");
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
                printf("\n>>The Head movie was changed<<\n");
            }
            else {
                start = i;
                last = i;
                count++;
                printf("\n>>The Head movie was created<<\n");
            }
        }

        if(n == 2){
            i = add_element(last);
            last = i;
        }

        if(n == 3){
            i = delete_element(last, start);
        }

        if(n == 4){
            if(start != NULL){
              display(start);
            }else{
							printf("\n>>The list is empty<<\n");
						}
        }

        if(n == 5){
					i = deleteList(start);
          last = NULL;
        }

        if(n == 6){
						char k[20];
            cinema *temp = NULL;
            printf("Enter the name of the movie\n");
            scanf("%s", k);
            temp = search_element(start, k);
            if(temp!=NULL){
                printf("%s\n",temp->name);
            }
            else{
                printf("\n>>There is no such movies<<\n");
            }
        }
    }
    return 0;
}
