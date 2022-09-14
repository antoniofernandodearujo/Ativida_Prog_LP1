#include <stdio.h>

int main(void) {

    int opc;
    
    do {
        printf("1 - Item 1\n2 - Item 2\n3 - Item 3\n4 - Sair\n");
        scanf("%d", &opc);

        switch(opc) {
            case 1:
                printf("Item 1\n");
                break;
            case 2:
                printf("Item 2\n");
                break;
            case 3: 
                printf("Item 3\n");
                break;
            case 4:
                printf("Sair\n");
                return 0;
            default:
                printf("Opcao %d Invalida\n", opc);
                break;
        }

    } while (1);

    return 0;
}