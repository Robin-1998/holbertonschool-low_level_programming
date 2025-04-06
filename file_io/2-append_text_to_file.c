#include "main.h"
/**
 * append_text_to_file - fonction qui aajoute du texte à la fin d'un fichier
 * @filename: le nom du fichier qui sera créer
 * @text_content: correspond à la chaîne de caractère qui sera
 * dans le fichier
 * Return: On retourne 1 en cas de réussite ou -1(échec). Donc soit 1,
 * réussite si le fichier est bien créer et une erreur s'il échoue
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byteswrite;
	int longueur = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[longueur] != '\0')
		longueur++;
		byteswrite = write(fd, text_content, longueur);

		if (byteswrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
