#include <stdio.h>
/**
 * main - A funtion that multiplies two integers
 * @X: First Integer input
 * @Y: Second Integer input
 * @z: The result of the multiplication
 */
int main(void)
{
	int X, Y;/*Declaration of two integers X and Y*/
	printf("Input two numbers X and Y:\n");/*displays user request*/
        scanf("%d\n""%d", &X, &Y);/*This accepts inputs*/
	int z = (X * Y);/*Multiplies the inputs to give an output*/
	printf("**********************************************\n"); /*creates a demacation to differentiate result*/
	printf("%d\n", z);/*prints the output to screen*/
	return (0);
}
