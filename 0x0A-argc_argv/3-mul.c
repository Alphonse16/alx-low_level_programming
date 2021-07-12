#include <stdio.h>
#include <stdio.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int count;
	int first_num;
	int second_num;
	int results;

	(void)argc;

	count = 1;
	if (argc[count] != '\0')
	{
		if (argv[count] == NULL || argv[count + 1] == NULL)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			first_num = atoi(argv[count]);
			second_num = atoi(argv[count + 1]);
			result = first_num * second_num;

			printf("%d\n", result);
		}
	}
	return (0);
}

