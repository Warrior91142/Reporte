//Libera memoria en casos de error también

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void unload(node *list);

int main(void)
{
    //Memoria para números
    node *list = NULL;

    //Construir lista
    for (int i =0; i < 3; i++)
    {
        //Asignar nodo para número
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            unload(list);
            return 1;
        }
        n->number = get_int ("Number: ");
        n->next = NULL;

        //Si la lista está vacía
        if (list == NULL)
        {
            list = n;
        }

        //Si el número pertenece al principio de la lista
        else if (n->number < list ->number)
        {
            n-> next =list;
            list = n;
        }

        //Si el número pertenece más tarde en la lista
        else
        {
            //Iterar sobre los nodos en la lista
            for (node *ptr = list; ptr !=NULL; ptr = ptr->next)
            {
                //Si al final de la lista
                if ( ptr->next == NULL)
                {
                    //Agregar nodo
                    ptr->next = n;
                    break;
                }

                //Si está en medio de la lista
                if (n->number < ptr->next->number)
                {
                    n->next = ptr ->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    //Imprimir números
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    //Liberar memoria
    unload(list);
    return 0;
}

void unload (node *list)
{
    node *ptr = list;
    while (ptr !=NULL)
    {
        node *next = ptr ->next;
        free(ptr);
        ptr = next;
    }
}
