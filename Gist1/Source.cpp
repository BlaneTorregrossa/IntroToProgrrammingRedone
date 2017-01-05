#include <iostream>

//Gist 1
float sumMult(float numa, float numb, float numc)
{
	float Sum = numa + numb + numc;	// Variable of type float that is assigned the value of the sum of variables numa, nub, and numc.
	float SumMult = Sum * 5;	// Variable of type float that is assigned the value of varible Sum multiplied by 5.
	return SumMult;	// Returning Varible SumMult.
}


//Gist 2
void evenNums(int num[], int size)
{
	num[0] = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			num[i] = i;
		}
	}
}


void stringReverse()
{
	char name[] = "kroWdlouhSI"; //A char array with a string of "Hello" contained.
	int size = 11; // variable of type int with a value of 5.
	for (int i = 0; i < size / 2; i++) // A for loop that increments variable i of type int if it's value is less than half of variable size's value.
	{
		char temp = name[i]; // Assigns interger temp of type int the value of the array at the index of i
		name[i] = name[(size - i) - 1]; // Assigns the value of i the value of what was the array's size minus the value of i minus 1.
		name[(size - i) - 1] = temp; // Assigns value of what was the array's size minus the value of i minus 1 to equal what the variable temp's value was.
	}
}

int main()
{
	sumMult(5, 1.5, 3);
	evenNums(0, 11);
	stringReverse();

}