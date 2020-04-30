#include <stdio.h>
#include <stdlib.h>

//Fonctions//

int addition (int a, int b)
{
    return a + b;
}

int soustraction (int a, int b)
{
    return a - b;
}

int multiplication (int a, int b)
{
    return a * b;
}

int division (int a, int b)
{
   return a / b;
}

int modulo (int a, int b)
{
    return a % b;
}


int main()
{
    int choixCalcul, nbr1 = 0, nbr2 = 0;
    int resultat = 0;

            printf("____CALCULATRICE____\n");
            printf("Veuillez choisir un type de calcul\n");
            printf("1. Addition\n");
            printf("2. Soustraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Modulo\n");
            printf("6. Quitter le programme.\n");
            scanf("%d", &choixCalcul);


            switch(choixCalcul)
            {
            case 1:
                printf("1. Addition\n");
                break;
            case 2:
                printf("2. Soustraction\n");
                break;
            case 3:
                printf("3. Multiplication\n");
                break;
            case 4:
                printf("4. Division\n");
                break;
            case 5:
                printf("5. Modulo\n");
                break;
            case 6:
                printf("6. Quitter le programme\n");
                break;
            default:
                printf("Veuillez choisir parmis le menu entre 1 et 6\n");
                break;
            }

            printf("Veuillez saisir 2 nombres a calculer:\n\n");
            scanf("%d", &nbr1);
            scanf("%d", &nbr2);

            if (choixCalcul = 1)
            {
                printf("%d + %d = ", nbr1 + nbr2);
            }
            else if (choixCalcul = 2)
            {
                printf("%d - %d = ", nbr1 - nbr2);
            }
            else if (choixCalcul = 3)
            {
                printf("%d * %d = ", nbr1 * nbr2);
            }
            else if (choixCalcul = 4)
            {
                printf("%d / %d = ", nbr1 / nbr2);
            }
            else
            {
                printf("%d % %d = ", nbr1 % nbr2);
            }



    return 0;
}
