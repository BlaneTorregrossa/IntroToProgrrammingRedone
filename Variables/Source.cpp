//Exercise 1
// Math for several problems with the result priniting to console.
#include <iostream>
int Exec1()
{
	float a = 2.f / 3.f + 3.f / 5.f; //Sum is 1.26667
	float b = 2 % 3 + 3 % 5; // Sum is 5
	float c = 23 % 15 % -2; //there is no remainder by the end so a 0 is displayed
	float d = 25.f * 1.f / 2.f; // The final result is 12.5
	float e = 25.f * 1.0f / 2.f; // The final result is 12.5
	float f = 25.f * (1.f / 2.f); // The final result is 12.5
	float g = 235.f / 8.f + 7.f;  // The final result is 36.375 
	float h = 235.f / 8.0f + 7.f; // The final result is 36.375 
	float i = ((20.f + 1.f) / 2.f - 2.0f) / (23.f + 3.f) * 0.2f; // The final result is 0.0653846

	{
		// Prints out the results of the math from floats a through i to the console
		std::cout << "Exercise 1 results in order" << std::endl << a << std::endl << b << std::endl << c << std::endl << d << std::endl << e << std::endl << f << std::endl << g << std::endl << h << std::endl << i;
		std::cin.get();
		return 0;
	}
}

/*
Exercise 2
Selection off of varible names based on prompts given

a.) The average height of students in your class
Answer: int avgStudentHeight

b.) The tax rate for incomes over $65000
Answer: int taxRateHighIncome

c.) The tax rate for income below $5000
Answer: int taxRateLowIncome

d.) The total cost of all the games on your Steam library
Answer: int personalSteamLibrayValue
*/

/*
Exercise 3
Matching data types with given values

a.) 121
Answer: int / interger
b.) 9.4
Answer: float / floating varible
c.) r
Answer: char / character
d.) 100000
Answer: int / interger
e.) False
Answer: bool
*/


//Exercise 4
//Create a program that swaps two numbers.
int Exec4()
{
	int a = 0;
	int b = 0;
	int tmp;
	// Asks user for two nubers to assign and then prints them to console
	std::cout << "please give a number for character a (no decimals) " << std::endl;
	std::cin >> a;
	std::cout << "please give a number for character b (no decimals) " << std::endl;
	std::cin >> b;
	std::cout << "a" << std::endl << a << std::endl << "b" << std::endl << b;
	std::cin.get();
	system("pause");

	{
		// swaps the value of the t2o intergers
		tmp = a;
		a = b;
		b = tmp;

	}
	// prints the swapped values
	std::cout << "The values have been swapped" << std::endl << "a" << std::endl << a << std::endl << "b" << std::endl << b;
	std::cin.get();
	system("pause");
	return 0;
}


//Exercise 5
#include <iostream>

int Exec5()
{
	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "/nch: " << ch << "/nf: " << f << std::endl;
	system("pause");

	/*a.) i = 1 ch = A f = 45
	b.) i = 1 ch = A f = 45
	c.) i = 1 ch = 9 f = 45
	d.) i = 1 ch = 9 f = 45
	e.) i = 0 ch = a f = 0
	f.) i = 1 ch = B f = 0*/

	return 0;
}

//Exercise 6
// Asks for 5 intergers from the user to then average them out.
#include <iostream>
int Exec6()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int avg;

	{
		// Takes in 5 intergers and averages them out.
		std::cout << "Please give 5 seperate numbers" << std::endl;
		std::cin >> a >> b >> c >> d >> e;
		avg = (a + b + c + d + e) / 5;
		std::cout << "The average (rounded) is " << avg << std::endl;
		system("pause");
		return 0;
	}
}


//Exercise 7
//Description: Takes two letters and outputs the letter in the middle position in character value.
#include <iostream>
int Exec7()
{
	char a;
	char b;
	char inbetween;
	std::cout << "Please insert either the capital or lowercase letters of (a-z) to get the letter in the middle." << std::endl;;
	std::cin >> a >> b;
	inbetween = (a + b) / 2;
	std::cout << "The middle letter is... " << inbetween << std::endl;
	system("pause");
	return 0;
}


int main()
{
	Exec1();
	Exec4();
	Exec5();
	Exec6();
	Exec7();
}