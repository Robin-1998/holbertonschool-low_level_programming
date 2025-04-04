#include "main.h"
#include <string.h>

/**
 * read_textfile - fonction qui lit un fichier et l'imprime sur la sortie
 * standard POSIX
 * @filename: correspond au chemin vers le fichier que l'on souhaite
 * ouvrir
 * @letters: correspond au caractère
 * Return: On retourne le nombre actuel de lettre
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; /* Pointeur pour stocker temporairement ce qu'on lit */
	int fd; /* Descripteur du fichier (comme un ticket pour y accéder) */
	ssize_t bytesRead, byteswrite; /* Nombre de caractères lus et écrits */

	if (filename == NULL) /* Si le nom du fichier est vide (null), on fait rien*/
		return (0);

	fd = open(filename, O_RDONLY); /* On ouvre le fichier en lecture seule */
	if (fd == -1) /* Si l'ouverture échoue (fichier introuvable par ex.) */
	{
		close(fd);/* Par précaution (même si ici fd == -1 donc pas ouvert) */
		return (0);
	}
	buffer = malloc(letters);/* On réserve de la mémoire pour lire les lettres*/
	if (buffer == NULL) /*Si l'allocation échoue (pas assez de RAM par ex.)*/
	{
		close(fd); /* On ferme le fichier qu’on a ouvert */
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	/*On lit dans le fichier et on met ça dans buffer*/
	if (bytesRead == -1) /* Si la lecture échoue */
	{
		free(buffer); /* On libère la mémoire */
		close(fd); /* On ferme le fichier */
		return (0);
	}
	byteswrite = write(STDOUT_FILENO, buffer, bytesRead);
	/* On affiche ce qu’on a lu à l’écran */
	if (byteswrite == -1) /* Si l'affichage' échoue */
	{
		free(buffer); /* On libère la mémoire */
		close(fd); /* On ferme le fichier */
		return (0);
	}
	free(buffer); /* Tout s’est bien passé, on libère la mémoire */
	close(fd); /* Et on ferme le fichier proprement */
	return (byteswrite); /* On renvoie combien de lettres ont été affichées */
}
