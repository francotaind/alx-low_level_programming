#include "main.h"
/*
 *read_textfile- reads a text file and prints
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
	return(0);
	}
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
	return(0);
	}
	char *buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
	fclose(file);
	return(0);
	}

	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
	free(buffer);
	fclose(file);
	return(0);
	}
	free(buffer);
	fclose(file);
	return bytesRead;

}
