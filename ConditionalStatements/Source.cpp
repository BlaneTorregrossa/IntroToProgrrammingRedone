// Conditinal Statements Exercise 1
//Description: If statement that makes x assigned to 100 if y equals 0
#include <iostream>
int Exec1()
{
	int x;
	int y = 0;

	if (y == 0)
	{
		x = 100;
		return 0;
	}
	else
	{
		return 0;
	}

}


//Conditional Statements Exercise 2
//Description: Console asks for two interger values and displays which is the highest to the console unless they both are equal in value
int Exec2()
{
	int a;
	int b;

	std::cout << "Type two numbers (No decimals please) " << std::endl;
	std::cin >> a >> b;
	system("cls");

	if (a > b)
	{
		std::cout << a << std::endl;
	}
	else if (a < b)
	{
		std::cout << b << std::endl;
	}
	else
	{
		std::cout << "Either both numbers were equal to each other or something went wrong" << std::endl;
	}
	system("pause");
	return 0;
}



//Comditional Statements Exercise 3
//Description:Takes five numbers and if the numbers have a positive sum it displays the numbers in ascending order
//If the numbers are negative it does the opposite. If the sum equals zero it displays the numbers in the order they were entered.
int Exec3()
{
	int input[4];
	int temp;

	std::cout << "Please give 5 numbers" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> input[i];
	}

	int inputa = input[0]; int inputb = input[1]; int inputc = input[2]; int inputd = input[3]; int inpute = input[4];
	int sum = inputa + inputb + inputc + inputd + inpute;

	if (sum > 0)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (input[i] < input[j])
				{
					temp = input[i];
					input[i] = input[j];
					input[j] = temp;
				}
			}
		}
		std::cout << input[0] << std::endl << input[1] << std::endl << input[2] << std::endl << input[3] << std::endl << input[4] << std::endl;
		return 0;
	}

	else if (sum < 0)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (input[i] < input[j])
				{
					temp = input[i];
					input[i] = input[j];
					input[j] = temp;
				}
			}
		}
		std::cout << input[4] << std::endl << input[3] << std::endl << input[2] << std::endl << input[1] << std::endl << input[0] << std::endl;
		return 0;
	}

	else
	{

		std::cout << input[0] << std::endl << input[1] << std::endl << input[2] << std::endl << input[3] << std::endl << input[4] << std::endl;
		return 0;
	}

	
}



//Conditinal Statements Exercise 4
//Description: A switch statement that asks for a number and displays the number back as long as it is 1-4. If not any of these numbers than it displays invald.
int Exec4()
{
	int value;
	std::cin >> value;

	switch (value)
	{
	case 1:
		std::cout << "1";
		break;
	case  2:
		std::cout << "2 or 3";
		break;
	case 3:
		std::cout << "2 or 3";
		break;
	case 4:
		std::cout << "4";
		break;
	default:
		std::cout << "Invalid";
	}
	system("pause");
	return 0;
}


//Conditinal Statements Exercise 5
//Description: A ternary operator made from an if statement
int Exec5()
{
	int x = 10;
	int y;

	y = (x == 0) ? 0 : 10 / x;
	return 0;
}


//Conditional Statements Exercise 6
//A switch operation that takes two numbers from the user followed by the numbers 1-5 to determine a Mathematical Operation Character.
//If evreything was input correctly the console should display the correct math of what was given.
int Exec6()
{
	int numa;
	int numb;
	int numOperation;
	int numsAns = 0;
	std::cout << "Please give a basic math operation W/ 2 numbers (Note: Operators are represented by numbers 1 - 5 (Ex. (2 3 2) is (2 * 2)).";
	std::cin >> numa >> numOperation >> numb;
	

	switch (numOperation)
	{
	case 1:
		numsAns = numa + numb;
		break;
	case 2:
		numsAns = numa - numb;
		break;
	case 3:
		numsAns = numa * numb;
		break;
	case 4:
		numsAns = numa / numb;
		break;
	case 5:
		numsAns = numa % numb;
		break;
	default:
		std::cout << "Mistakes were made to bring you these words." << std::endl;
		break;
	}

	std::cout << "Answer: " << numsAns;
	system("pause");
	return 0;
}

//Conditional Statements Exercise 7
//Description: Switch statement that outputs how many days in a moth when given a number representing a month. If a value higher than 12 is given an error message is displayed.
int Exec7()
{
	int jan = 31;
	int feb = 28;
	int mar = 31;
	int apr = 30;
	int may = 31;
	int jun = 30;
	int jul = 31;
	int aug = 31;
	int sep = 30;
	int oct = 31;
	int nov = 30;
	int dec = 31;
	int monthOfTheYear;

	std::cout << "Type in 1-12 to select a month and view the days it has." << std::endl << "Ex. (5 is May)" << std::endl;
	std::cin >> monthOfTheYear;

	switch (monthOfTheYear)
	{
	case 1:
		std::cout << jan << " days in the month of Janurary." << std::endl;
		break;
	case 2:
		std::cout << feb << " days in the month of Feburary." << std::endl;
		break;
	case 3:
		std::cout << mar << " days in the month of March." << std::endl;
		break;
	case 4:
		std::cout << apr << " days in the month of April." << std::endl;
		break;
	case 5:
		std::cout << may << " days in the month of May." << std::endl;
		break;
	case 6:
		std::cout << jun << " days in the month of June." << std::endl;
		break;
	case 7:
		std::cout << jul << " days in the month of July." << std::endl;
		break;
	case 8:
		std::cout << aug << " days in the month of August." << std::endl;
		break;
	case 9:
		std::cout << sep << " days in the month of September" << std::endl;
		break;
	case 10:
		std::cout << oct << " days in the month of October" << std::endl;
		break;
	case 11:
		std::cout << nov << " days in the month of Noveber" << std::endl;
		break;
	case 12:
		std::cout << dec << " days in the month of December" << std::endl;
		break;
	default:
		std::cout << "Mistakes were made when selecting the months. Make sure you used the numbers 1-12!" << std::endl;
	}
	system("pause");
	return 0;
}

/*
Conditional Statements Exercise 8
int main()
{
bool flag = true;
int numPos = 35, numNeg = -55;
char frstChar = 'J', scndChar = 'O';
double frstPrice = 5.60;

a.) Valid
b.) Invalid
c.) Invalid
d.)	Invalid
e.) Valid
f.)	Invalid
g.) Invalid
h.)	Valid
i.) Valid
j.)	Valid
}
*/



// Conditional Statements Exercise 9
// Evaluation of given logical expresions where a is true and b is false.

//
//{

//	bool a = true;
//	bool b = false;
//
////a.) (a || b) || (a && b)
//  Valid || Invalid

////b.) !((!a) && (a)) || (a && b)
//	Invalid || Valid

//c.) !((5 || a) || (!b)) && (!(a) && b)
// Invalid || Invalid

//d.) a || b && a
// Valid || Invalid

//e.) !a&&b
//	Invalid

//}



int main()
{
	Exec1();
	Exec2();
	Exec3();
	Exec4();
	Exec5();
	Exec6();
	Exec7();
}