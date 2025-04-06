#include "main.h"

/**
 * create_file - fonction qui créé un fichier
 * @filename: le nom du fichier qui sera créer
 * @text_content: correspond à la chaîne de caractère qui sera
 * dans le fichier
 * Return: On retourne 1 en cas de réussite ou -1(échec). Donc soit 1,
 * réussite si le fichier est bien créer et une erreur s'il échoue
 */
int create_file(const char *filename, char *text_content)
{
	int fd, byteswrite;
	int longueur = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	/* si filename est NULL on retourne une erreur*/

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
/* On ouvre le fichier, avec O_CREAT on le créé si il n'existe pas encore*/
/* avec O_Wroly on lui dit que l'on écrit seulement et O_trunc on le tronc*/
/* rw------- : lecture/écriture pour le propriétaire seulement*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
/* si l'ouverture échoue on retourne une erreur*/

	if (text_content)
	{
		while (text_content[longueur] != '\0')
		longueur++;
		/* on calcul la longueur de text_content*/
		byteswrite = write(fd, text_content, longueur);
		/* on écrit des caractères dans le fichier*/
		if (byteswrite == -1) /* Si l'affichage' échoue */
		{
			free(text_content); /* On libère la mémoire */
			close(fd); /* On ferme le fichier */
			return (0);
		}
	}

	close(fd);
	return (1);
}

/*
* La fonction write() en C est une fonction système bas niveau (POSIX)
qui permet d'écrire directement dans un fichier, socket,
ou autre descripteur de fichier.
exemple :
prototype : ssize_t write(int fd, const void *buf, size_t count);

fd : le descripteur de fichier (retourné par open(), socket(), etc.)

buf : un pointeur vers les données à écrire (ex. une chaîne de caractères)

count : le nombre d'octets à écrire (souvent la longueur de la chaîne)

*/
