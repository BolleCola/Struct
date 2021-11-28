#include <stdio.h>

struct cord // création de la struct
{
    int x;
    int y;
};

void mafonction(struct cord *pnt);

int main ()
{
    struct cord mavariable; // création d'une variable "mavariable" du type de ma struct "cord".

	struct cord *pnt; // création d'un pointeur qui point vers ma struct.

    mavariable.x = 100; // modif. de la valeur de ma variable x.
    mavariable.y = 100; // modif. de la valeur de ma variable y.

	mafonction(pnt); // envoie de l'adresse de ce pointeur (struct) à la fonction.

	printf("mavariable = %d et %d\n", mavariable.x, mavariable.y); // cela va imprimer 100 et 100 la variable n'et pas lié avec l'autre elles sont indépendantes

	printf("*pnt : %d et %d\n", pnt->x, pnt->y); // cela va imprimer 50 et 50 les 2 variable ne sont pas liée
	return (0);
}

void mafonction(struct cord *pnt) // récup de ce pointeur (type c'est la struct)
{
	pnt->x = 50; // assignation de ma variable "->" pour les pointeurs.
	pnt->y = 50; // assignation de ma variable "->" pour les pointeurs.

	// on peut aussi écrire comme ça (*pnt).x = 0.
}