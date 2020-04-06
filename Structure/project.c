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
		printf("%s\n  ", i->name);
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

		return(temp);
}


// list* find_number(list *start, int number){
//     list *p = NULL;
//     list *i = start;
//
//     for ( ; i != NULL ; i=i->next){
//         if (i->next == number){
//             p = i;
//             break;
//         }
//     }
//
//     return p;
// }

int main(){

    int n, count=0;
    list *start = NULL;
    list *last = NULL;
    list *i = NULL;


    while(1){
				printf("0) Exit the program \n");
        printf("1) Create the first element\n");
        printf("2) Add item to end\n");
        printf("3) Remove item from end\n");
        printf("4) Display\n");
        printf("5) Delete entire list\n");
        printf("6) Search for a given element\n");
        printf("\n");

        printf("Enter the command number: \n");
        scanf("%d", &n);

				if(n==0){
					exit(1);
				}

        if(n==1){
            char name;

            i = create(last);
            if (count>=1){
                last = i;
                count++;
                printf("Done! \n");
            }
            else {
                start = i;
                last = i;
                count++;
                printf("Done! \n");
            }
        }

        if(n==2){
            i = add_element(last);
            last = i;
            printf("Done! \n");
        }

        if(n==3){
            i = delete_element(last, start);
            printf("Done! \n");
        }

        if(n == 4){
            if(start->name != NULL){
              display(start);
            }else{
							printf("The list is empty");
						}
        }

        if(n==5){
					i = start;
						for (; i != NULL; i=i->next){

						}
            printf("Done! \n");
        }

        // if(n==6){
				// 		i = find_number(3);
				// 		printf("%d\n", i);
        // }
    }
    return 0;

}
