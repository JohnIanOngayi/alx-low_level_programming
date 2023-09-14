/**
  * _isupper - Checks for uppercase characters
  * @c: the character being checked
  * Return: 1 for true, o for false
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
