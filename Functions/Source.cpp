//Functions 1
//Question What is the output of this program?

#include <iostream>
#include <cstdlib>

//#include <iostream>
//void PrintInteger(int variable) {
//	std::cout << variable << std::endl;
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

	else if (inputb > inputa)
	{
		if (inputa < inputc)
		{
			std::cout << "The smallest number is " << inputa << std::endl;
			return inputa;
		}
		else if (inputc < inputa)
		{
			std::cout << "The smallest number is " << inputc << std::endl;
			return inputc;
		}
	}
	system("pause");
}


//Functions 4

float Half(float number)
{
	int i = number;
	return i/2;
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


//int main()
//{
//	int integer_array[5] = { 7, 3, 2, 4, 9 };
//	int result = SumArray(integer_array, 5); //result = 25
//	std::cout << result << std::endl;
//}


//Functions 9


//int main()
//{
//	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int result = MinInArray(integer_array, 7); //result = 4
//	std::cout << result << std::endl;
//}


//Functions 10


//int main()
//{
//	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int output_array[7] = {};
//	MultiplyByIndex(integer_array, output_array, 7);
//	//output_array should be {0, 15, 14, 12, 52, 95, 48};
//	return 0;
//}

//Functions 11


//Functions 12


//Functions 13


//Functions 14


//Functions 15


//Functions 16


//Functions 17

int main()
{
	smallerFloat();
	Half(42);
	CoinToss();
}