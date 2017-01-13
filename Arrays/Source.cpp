//Arrays 1

#include <iostream>

//int Valid()
//{
//int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; //Valid
//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; //Invalid as the declared array size is too small to fit in all given values
//double radii[10] = (3.2, 4.7} //Invalid due to a parenthesis being closed with a bracket. 
//int table[7] = { 2, , , 27, , 45, 39 }; // Invalid due to missing expressions.
//char codes[] = { 'A', 'X', '1', '2', 's' }; //Valid
//int blanks[]; //Valid
//int collection[-20]; //Invalid due to array size being less than zero
//int hours[3] = 8, 12, 16; //Invalid tdue to lack of parenthesis
//return 0;
//}


//Arrays 2
int Array2()
{
	int x = 2;
	int values[] = { 2, 6, 10, 14 };
	std::cout << values[2] << std::endl; // Displays 10
	std::cout << ++values[0] << std::endl; //Displays 3
	std::cout << values[1]++ << std::endl; // Displays 6
	std::cout << values[++x] << std::endl; // Displays 14
	std::cout << values[4] << std::endl; //Displays huge negative number.
	system("pause");
	return 0;
}


//Arrays 3 
//Description: Array that is initialized by a loop.

void Array3()
{
	int data[10];

	for (int i = 0; i < 10; i++)
	{
		data[i] = i;
	}

	system("pause");
}


//Arrays 4
//Description: Asks for five numbers for input and puts them in reverse order.


void Array4()
{
	int inputa;
	int inputb;
	int inputc;
	int inputd;
	int inpute;

	std::cout << "Please input five numbers......" << std::endl;
	std::cin >> inputa >> inputb >> inputc >> inputd >> inpute;

	int inputData[5]{ inputa, inputb, inputc, inputd, inpute };
	for (int i = 4; i > -1; i--)
	{
		std::cout << inputData[i] << std::endl;
	}
	system("pause");
}



//Arrays 5 
//Description Stores 10 numbers in an array and displays the numbers of highest and lowest value.

void Array5()
{

	std::cout << "Please input 10 numbers... " << std::endl;
	int input[10];
	int temp;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> input[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (input[i] < input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}

	std::cout << "Bigest number is " << input[0] << std::endl;
	std::cout << "Smallest number is " << input[9] << std::endl;


	system("pause");
}


//Arrays 6
//Description: Displays a 2d Array in a 3x3 dsiplay.


int Array6()
{
	int map[3][3];
	int nums = 1;

	for (int i = 0; i < 3; i++)	// for loop to determine row of array
	{
		for (int j = 0; j < 3; j++) // for loop to determine column of array
		{
			map[i][j] = nums; // places intergers in the array
			nums++; // increases numbers by one
		}
	}

	std::cout << map[0][0] << "|||" << map[0][1] << "|||" << map[0][2] << std::endl;
	std::cout << map[1][0] << "|||" << map[1][1] << "|||" << map[1][2] << std::endl;
	std::cout << map[2][0] << "|||" << map[2][1] << "|||" << map[2][2] << std::endl;

	/*
	Should appear in console as:
	1|||2|||3
	4|||5|||6
	7|||8|||9
	*/

	system("pause");

	return 0;
}



//Arrays 7

int Array7()
{

	int days[29][5];
	//int tempa[1];
	//int tempb[1];
	int rowCount = 0;
	int colCount = 0;
	int rowSum = 0;
	int colSum = 0;
	//int tempa;
	//int tempb;

	for (int i = 0; i < 29; i++)	// for loop to determine row of array
	{
		for (int j = 0; j < 5; j++) // for loop to determine column of array
		{
			days[i][j] = rowCount; // places intergers in the array
			rowSum = days[i][j] + rowSum;
			rowCount++; // increases numbers by one

		}
	}

	for (int i = 0; i < 5; i++)	// for loop to determine row of array
	{
		for (int j = 0; j < 29; j++) // for loop to determine column of array
		{
			days[i][j] = colCount; // places intergers in the array
			colSum = days[i][j] + colSum;
			colCount++; // increases numbers by one

		}
	}


	system("pause");
	return 0;
}


//Arrays 8 

int Array8()
{


	int health[] = { 100, 100, 100, 100, 100 };
	int input;
	int attackCounter = 0;

	//std::cout << "Please select a player to take damage using keys 0 to 4." << std::endl;
	//std::cin >> input;

	for (int i = 0; i < 5;)
	{
		std::cout << "Please select a player to take damage using keys 0 to 4." << std::endl;
		std::cin >> input;
		i++;

		if (input > 4 || input < 0)
		{
			std::cout << "No Valid Input" << std::endl;
			i--;
		}

		else if (health[input] <= 0)
		{

			std::cout << "Input No longer Valid" << std::endl;
			i--;
		}

		else
		{
			health[input] = health[input] - 40;
			attackCounter++;
			if (health[input] == -20)
			{
				health[input] == 0;
				std::cout << "20 damage was dealt to your target " << std::endl;
			}
			else
			{
				std::cout << "40 damage was dealt to your target " << std::endl;
			}
		}

		if (attackCounter == 5)
		{
			std::cout << "Player HP is: " << health[0] << " HP" << std::endl;
			std::cout << "Player HP is: " << health[1] << " HP" << std::endl;
			std::cout << "Player HP is: " << health[2] << " HP" << std::endl;
			std::cout << "Player HP is: " << health[3] << " HP" << std::endl;
			std::cout << "Player HP is: " << health[4] << " HP" << std::endl;
		}

	}


	return 0;

}




int main()
{
	Array2();
	Array3();
	Array4();
	Array5();
	Array6();
	Array7();
	Array8();
}