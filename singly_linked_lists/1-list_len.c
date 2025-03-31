#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - fonction qui retourne le nombre d'éléments
 * @h: pointeur de list_t qui permet de circuler dans la liste châinée
 * Return: retourne le nombre d'élément de la liste chaînée list_t
 */
size_t list_len(const list_t *h)
{
	size_t first = 0;

	while (h)
	{
		first++;
		h = h->next;
	}
	return (first);
}

/*
* on initialise une variable nommé first à zéro qui va contenir
le nombre d'élément.
Ensuite on boucle avec h, qui contiendra le premier élément de la châine.
Chaque fois qu'il trouvera un élément il incrémente de 1.
Après avoir compté l'élément, le programme se déplace vers
l'élément suivant à l'aide de next qui correspond à notre noeud.
Si on le compare à un bloc ; si le bloc a un fil qui mène à un autre
bloc, on va regarder ce bloc. Si ce bloc n'a pas de fil on s'arrête.
Et une fois que le programme a compté tous les éléments dans la chaîne, il
renvoie le nombre total d'éléments.
*/
