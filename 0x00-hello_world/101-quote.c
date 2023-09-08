#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: Writes a string into stderr
  * Return: A zero integer value
  */
int main(void)
{
	char str1[40] = "and that piece of art is useful\"";
	char str2[3] = " -";
	char str3[30] = " Dora Korpar, 2015-10-19\n";
	char str4[75] = "";

	strcat(str4, str1);
	strcat(str4, str2);
	strcat(str4, str3);
	fputs(str4, stderr);

	return (1);
}
