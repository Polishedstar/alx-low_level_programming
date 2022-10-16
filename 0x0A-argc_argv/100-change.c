#include <stdio.h>
#include <stdlib.h>
/**
 * main - funct
 * @argv: number of argument
 * @argc: len of argv
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int postn, total, change, aux;
int coins[] = {25, 10, 5, 2, 1};
postn = total = change = aux = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (total <= 0)
{
printf("0\n");
return (0);
}
while (coins[postn] != '\0')
{
if (total >= coins[postn])
{
aux = (total / coins[postn]);
change += aux;
total -= coins[postn] * aux;
}
postn++;
}
printf("%d\n", change);
return (0);
}
