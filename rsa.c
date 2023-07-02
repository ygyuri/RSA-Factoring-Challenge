#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the beginning of the program
 *
 * @argc: count of the command line arguments
 * @argv: name of the text file
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
long long int n;
long long int val;
FILE *fptr;
char *filename = argv[1];

fptr = fopen(filename, "r");
fscanf(fptr, "%lli", &val);
n = val;
fclose(fptr);

long long i = 2;
long long int new = 0;
while (i < n)
{
	if (n % i == 0)
	{
		new = n / i;
		if (new % i == 0)
		{
			i++;
		}
		else
		{
			break;
		}
	}
	else
	{
		i++;
	}
}
printf("%lli=%lli*%lli \n", n, new, i);
return (0);
}

