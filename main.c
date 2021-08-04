#include "Queue.h"

void procedure();

int main(int argc, char **argv)
{
    procedure();
    return 0;
}

void procedure()
{
    Queue *myQueue = create();
    char ans = 'n';
    int opt = 0;
    int value = 0;
    printf("\nBienvenido...");
    while(ans == 'n' || ans == 'N')
    {
        printf("\nOpciones");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\nTu opcion: ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
                printf("\nIngresa un valor: ");
                scanf("%d", &value);
                enqueue(myQueue, value);
                break;
            case 2:
                printf("\nEl valor retirado es: %d", dequeue(myQueue));
                break;
            default:
                printf("\nOpcion incorrecta");
                break;
        }
        printf("\nDeseas continuar? [s/n]: ");
        fflush(stdin);
        scanf("%c", &ans);
    }
}