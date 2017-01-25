//Functions 1
//Question What is the output of this program?

#include <iostream>
#include <cstdlib>

//#include <iostream>
//void PrintInteger(int variable) {
//	std::std::cout << variable << std::endl;
//}
//int main()
//{
//	int the_variable = 1;
//	PrintInteger(the_variable);
//	{
//		PrintInteger(the_variable);
//		int the_variable = 2;
//		PrintInteger(the_variable);
//		{
//			PrintInteger(the_variable);
//			int the_variable = 3;
//			PrintInteger(the_variable);
//		}
//		PrintInteger(the_variable);
//	}
//	PrintInteger(the_variable);
//	system("pause");
//}


/*ouput is:
1
1
2
2
3
2
1*/

//Functions 2
//
//float smallerFloat()
//{
//	float inputa;
//	float inputb;
//
//
//	std::cout << "Please enter 2 different numbers with decimals. " << std::endl;
//	std::cin >> inputa >> inputb;
//
//	if (inputa < inputb)
//	{
//		std::cout << "The smaller number is " << inputa << std::endl;
//		return inputa;
//	}
//
//	else if (inputb < inputa)
//	{
//		std::cout << "The smaller number is " << inputb << std::endl;
//		return inputb;
//	}
//	
//	system("pause");
//}


//Functions 3
//Should Reattempt with while loops to make evreything much smaller.

float smallerFloat()
{
	float inputa;
	float inputb;
	float inputc;

	std::cout << "Please enter 3 different numbers with decimals. " << std::endl;
	std::cin >> inputa >> inputb >> inputc;


	if (inputa > inputb)
	{
		if (inputb < inputc)
		{
			std::cout << "The smallest number is " << inputb << std::endl;
			return inputb;
		}
		else if (inputc < inputb)
		{
			std::cout << "The smallest number is " << inputc << std::endl;
			return inputc;
		}
		system("pause");
	}

	system("pause");
}


//Functions 4

float Half(float number)
{
	int i = number;
	return i / 2;
	system("pause");
}


//Functions 5

int CoinToss()
{
	int input;
	int temp;

	std::cout << "How many times do you wish to flip this coin?" << std::endl;
	std::cin >> input;
	for (int i = 0; i < input; i++)
	{
		temp = rand();



		if (temp % 2 == 0) // While loop makes answer repeat endlessly
		{
			std::cout << "It's Tails!" << std::endl;
		}

		else if (temp % 2 != 0) // While loop makes answer repeat endlessly
		{
			std::cout << "It's Heads!" << std::endl;
		}
	}

	return 0;
}


//Functions 6


//int sum(int x, int y)
//{
//	int result;
//	result = x + y;
//}

// X and Y lacking values which would be defined in a main function as int sum(5,8);

//int sum(int n)
//{
//	if (0 == n)
//		return 0;
//	else
//		n = n + n;
//}

// n has no values which will be defined in a main function as int sum(5); and there is a  need for braces for if and else statements

//
//#include <iostream>
//int main()
//{
//	double x = 13.6;
//	std::cout << "square of 13.6 = " << square(x) << std::endl;
//}
//}
//int square(int x)
//{
//	return x * x;

// square is never defined can be done as float square; or as double square;


//Functions 7

int SumTo(int N)
{
	int i;
	int temp;
	int sum = 0;


	for (i = 0; i <= N; i++)
	{
		temp = i;
		sum = temp + sum;
	}

	return sum;
}

//int main()
//{
//	int result = SumTo(3); //result = 1 + 2 + 3 = 6
//	std::cout << result << std::endl;
//	result = SumTo(15); //result should now be 120
//	std::cout << result << std::endl;
//}


//Functions 8


int SumArray(int Array[], int size)
{
	int sum = 0;
	//int temp;

	for (int i = 0; i < size;)
	{
		sum = sum + Array[i];
		i++;
	}

	return sum;
}


//int main()
//{
//	int integer_array[5] = { 7, 3, 2, 4, 9 };
//	int result = SumArray(integer_array, 5); //result = 25
//	std::cout << result << std::endl;
//}


//Functions 9


int MinInArray(int Array[], int size)
{
	int min = Array[0];

	for (int i = 0; i < size; i++)
	{

		if (min > Array[i])
		{
			min = Array[i];
		}

	}

	return  min;
}


//int main()
//{
//	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int result = MinInArray(integer_array, 7); //result = 4
//	std::cout << result << std::endl;
//}


//Functions 10


int MultiplyByIndex(int input_array[], int output_array[], int size)

{
	int i;


	for (i = 0; i < size; i++)
	{
		output_array[i] = input_array[i] * i;
	}

	return 0;
}

//int main()
//{
//	int input_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int output_array[7] = {};
//	MultiplyByIndex(input_array, output_array, 7);
//	//output_array should be {0, 15, 14, 12, 52, 95, 48};
//	return 0;
//}


//Functions 11

int Func11(int input_array_a[], int input_array_b[], int size, int output[])
{
	int value = 0;

	for (int i = 0; i < size; i++)
	{
		int sum = input_array_a[i] + input_array_b[i];
		output[i] = sum;
	}

	return 0;
}

//int main()
//{
//	int input_array_a[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int input_array_b[7] = { 2, 5, 3, 22, 8, 14, 1 };
//	int output[7];
//	Func11(input_array_a, input_array_b, 7, output);
//}


//Functions 12

int Func12(int array_input[], int size)

{
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum = sum + array_input[i];
	}

	return sum;
}

//int main()
//{
//	int array[4] = { 3, 2, 5, 7 };	
//	Func12(array, 4);
//}



//Functions 13

int Func13(int search_array[], int size, int search)
{

	for (int i = 0; i < size; i++)
	{
		if (search == search_array[i])
		{
			return i;
		}
		else if (i > 7)
		{
			std::cout << "No number was found." << std::endl;
		}
	}

}

//
//int main()
//{
//	int searchArray[] = { 4, 2, 1, 3, 4 };
//}


//Functions 14

int Split(int inputa[], int size, int outputa[], int outputb[])
{


	int count = 0;
	for (int i = 0; i < size; i++)
	{
		//std::cin input[];		//I don't know how to get an array in the parameters to accept inputs from user via cin


		if (inputa[i] >= 0)
		{
			outputa[count] = inputa[i];
			outputb[count] = 0;
			count++;

		}


		if (inputa[i] < 0)
		{
			outputb[count] = inputa[i];
			outputa[count] = 0;
			count++;

		}


	}

	return 0;

}

//int main()
//{	
//	int inputa[7] = { 1, -2, 3, 4, -5, 73, -10 };
//	int outputa[7];
//	int outputb[7];
//	Split(inputa, 7, outputa, outputb);
//}



//Functions 15

int func15(int x, int y, int start)
{
	int sum = start;
	
	for (int i = 0; i < y; i++)
	{
		sum = x * sum;
	}

	return sum;
}


//int main()
//{
//	func15(5, 5, 1);
//}


//Functions 16


int func16(int array[], int size)
{
	int loop = 1;
	int i;
	for (i = 0; i < size; i++)
	{
		if (array[i] == array[i + 1])
		{
			loop++;
		}
		else
		{
			std::cout << loop << ", " << array[i] << "'s " << std::endl;
			loop = 1;
		}
	}
	std::cout << loop << ", " << array[i] << "'s " << std::endl;
	/*if (array[i] == -858993460)
	{
		array[i] = "blank"
	}*/
	return 1;
}


//int main()
//{
//		int looksayArray[10] = { 2, 2, 3, 4, 3, 22, 2, -2, 0, 10 };
//		func16(looksayArray, 9);
//}


//Functions 17


int func17()

{

	int Player_Select = 0;
	int Opponent_Select = 0;

	std::cout << "Input 1 for Rock, Input 2 for Paper, Input 3 for Scissors" << std::endl;


	bool win = true;
	while (win == true)
	{
		std::cin >> Player_Select;

		Opponent_Select = rand() % 3 + 1;
		switch (Player_Select)

		{
		case 1:
		{
			switch (Opponent_Select)
			{
			case 1:			

				std::cout << "Computer used Rock" << std::endl;
				std::cout << "Tie" << std::endl;

			case 2:

				std::cout << "Computer used Paper" << std::endl;
				std::cout << "You Lost" << std::endl;
				break;

			case 3:

				win = false;
				std::cout << "Computer used Scisors" << std::endl;
				std::cout << "You Won" << std::endl;
				break;
				
			}
		}
		break;

		case 2:
		{
			switch (Opponent_Select)
			{
			case 1:

				win = false;
				std::cout << "Computer used Rock" << std::endl;
				std::cout << "You Won" << std::endl;
				break;

			case 2:

				std::cout << "Computer used Paper" << std::endl;
				std::cout << "Tie" << std::endl;

			case 3:

				std::cout << "Computer used Scisors" << std::endl;
				std::cout << "You Lost" << std::endl;
				break;
				
			}
		}
		break;

		case 3:
		{
			switch (Opponent_Select)
			{
			case 1:

				std::cout << "Computer used Rock" << std::endl;
				std::cout << "You Lost" << std::endl;
				break;

			case 2:

				win = false;
				std::cout << "Computer used Paper" << std::endl;
				std::cout << "You won" << std::endl;
				break;

			case 3:
				std::cout << "Computer used Scisors" << std::endl;
				std::cout << "Tie" << std::endl;
				
			}
		}
		break;

		}
	}
	return 1;
}



////Does not work
//void func17(int Player_Select, int Opponent_Select)
//
//{
//	std::cout << "Input 1 for Rock,Input 2 for Paper, Input 3 for Scissors" << std::endl;
//
//	int choice = 0;
//	int o_choice = 0;
//
//	bool Picking = true;
//	while (Picking == true)
//	{
//		std::cin >> Player_Select;
//
//		Opponent_Select = rand() % 3 + 1;
//		switch (Player_Select)
//
//		{
//		case 1:
//		{
//
//
//			choice = 1;
//
//			break;
//		}
//
//
//
//		case 2:
//		{
//
//
//			choice = 2;
//
//			break;
//		}
//
//		case 3:
//		{
//
//
//			choice = 3;
//
//			break;
//		}
//
//		default:
//		{
//			std::cout << "wrong input" << std::endl;
//		}
//
//		}
//		switch (Opponent_Select)
//		{
//		case 1:
//		{
//			{
//				o_choice = 1;
//			}
//			break;
//		}
//		case 2:
//		{
//
//			o_choice = 2;
//
//			break;
//		}
//		case 3:
//		{
//
//			o_choice = 3;
//
//			break;
//		}
//
//		if (choice == 1 && o_choice == 3)
//		{
//			Picking == false;
//			std::cout << "You won!" << std::endl;
//		}
//		if (choice == 1 && o_choice == 2)
//		{
//			std::cout << "You lost!" << std::endl;
//		}
//		if (choice == 1 && o_choice == 1)
//		{
//			std::cout << "Tie" << std::endl;
//		}
//
//		if (choice == 2 && o_choice == 1)
//		{
//			Picking == false;
//			std::cout << "You won!" << std::endl;
//		}
//		if (choice == 2 && o_choice == 3)
//		{
//			std::cout << "You lost!" << std::endl;
//		}
//		if (choice == 2 && o_choice == 2)
//		{
//			std::cout << "Tie" << std::endl;
//		}
//
//		if (choice == 3 && o_choice == 2)
//		{
//			Picking == false;
//			std::cout << "You won!" << std::endl;
//		}
//		if (choice == 3 && o_choice == 1)
//		{
//			std::cout << "You lost!" << std::endl;
//		}
//		if (choice == 3 && o_choice == 3)
//		{
//			std::cout << "Tie" << std::endl;
//		}
//
//		}
//	}
//}

int main()
{
	smallerFloat();
	Half(42);
	CoinToss();
	func17();
}