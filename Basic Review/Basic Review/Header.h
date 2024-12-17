#pragma once
#include  <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> // Random Number Generator
#include <ctime> // Library to Reference Current Local Time

using namespace std;

//----------------------------------------------------------
// Function Declarations
//----------------------------------------------------------
void getNum();// Section 2-> Variables and DataTypes Part 1
void getChar();// Section 2-> Variables and DataTypes Part 2
void getBool();// Section 2-> Variables and DataTypes Part 3
void getArithmatic();// Section 2-> Arithmatic Operators
void getRelationShip();// Section 2-> Relational Operators
void warmRaining();
void constants();
void getInput();
void averageOfThree();
void madLibs();
void controlStatementsIntro();
void selectionControlStatementsIfElse();
void selectionGrades();
void repetitionControlStatements();
void repetitionSum();
void breakContinue();
void randomNumberGenerator();
void singleDiRoll();

//----------------------------------------------------------
//----------------------------------------------------------




//----------------------------------------------------------
// Function Definitions
//----------------------------------------------------------
void getNum() {

	int num;
	num = 15;

	double numDouble = 3.14592;

	cout << num << endl;
	cout << numDouble << endl;

}
void getChar() {

	char singleChar = 'a';
	string myName = "Sami";
	cout << singleChar << endl;
	cout << myName << endl;
}
void getBool() {

	bool isBool = false;
	cout << boolalpha << isBool << endl;

};
void getArithmatic() {
	/*
		+	Addition Operator
		-	Subtraction Operator
		*	Multiplcation Operation
		/	Division Operator
		%	Modulus Operator
	*/

	int a = 10;
	int b = 3;
	int sum = a + b;
	int diff = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	result += 15;


	cout << "sum  = " << sum << endl;
	cout << "diff  = " << diff << endl;
	cout << "product  = " << product << endl;
	cout << "quotient  = " << quotient << endl;
	cout << "remainder  = " << remainder << endl;
	cout << "result  = " << result << endl;


}
void getRelationShip() {
	/*
	>	Greater Than
	>=	Greater Than or Equal To
	<	Less Than
	<=	Less Than or Equal To
	==	Equal to (Equality)
	!=	Not Equal To (Equality)
	*/

	cout << boolalpha;
	int age = 30;

	int a = 15;
	int b = 20;
	bool areEqual = a == b;

	cout << (a < b) << endl;
	cout << areEqual << endl;
	cout << "Age >= 21? " << (age >= 21) << endl;


}
void warmRaining() {
	bool isRaining = true;
	bool isWarm = true;

	cout << boolalpha;
	cout << "And: " << (isRaining && isWarm) << endl;
	cout << "Or: " << (isRaining || isWarm) << endl;
	cout << "Not: " << (!isRaining) << endl;


}
void constants() {

	const double MY_PI = 3.14592;
	const string MY_NAME = "Sami";

	cout << MY_NAME << endl;


}
void getInput() {

	int age;
	string fullName;
	string location;
	int initialScore;

	cout << "What is Your Project Score (0-100): ";
	cin >> initialScore;
	cin.get(); //Clear GetLine Character

	cout << "What Is Your Full Name: ";
	getline(cin, fullName); //Capture Full String (Ingores Blank Spaces Except Next-Lines)
	cout << "What is Your City, State, Province: ";
	getline(cin, location);
	

	//cout << "Please Enter Your Age: ";
	//cin >> age;

	cout << "Your Full Name is: " << fullName << endl;
	cout << "Your City, State, Province: " << location << endl;
	cout << "Your Intial Score is: " << initialScore << ". But with + 5 is: " << (initialScore + 5)<<  endl;

	//cout << "Your Age is: " << age << endl;
	
}
void averageOfThree() {

	double num1;
	double num2;
	double num3;

	double meanValue;

	cout << "Calculate the Mean Value" << endl;
	cout << "Enter the Value For num1: ";
	cin >> num1;
	cout << "Enter the Value For num2: ";
	cin >> num2;
	cout << "Enter the Value For num3: ";
	cin >> num3;

	meanValue = (num1 + num2 + num3) / 3;
	cout << "The Mean Value of" << num1 << " , " << num2 << ", and " << num3 << " is: " << meanValue << endl;

}
void madLibs() {
	
	string adjective0;
	string girlsName;
	string adjective1;
	string occupation0;
	string place;
	string clothing;
	string hobby;
	string adjective2;
	string occupation1;
	string boysName;
	string mansName;

	cout << "Please Enter an adjective0: ";
	getline(cin, adjective0);
	cout << "Please Enter a girlsName: ";
	getline(cin, girlsName);
	cout << "Please Enter Another adjective1: ";
	getline(cin, adjective1);
	cout << "Please Enter an occupation0: ";
	getline(cin, occupation0);
	cout << "Please Enter a place: ";
	getline(cin, place);
	cout << "Please Enter a clothing: ";
	getline(cin, clothing);
	cout << "Please Enter an hobby: ";
	getline(cin, hobby);
	cout << "Please Enter a adjective2: ";
	getline(cin, adjective2);
	cout << "Please Enter an occupation1: ";
	getline(cin, occupation1);
	cout << "Please Enter an boysName: ";
	getline(cin, boysName);
	cout << "Please Enter a mansName: ";
	getline(cin, mansName);
	
	cout << "There was once a " << adjective0 << " girl named " << girlsName << ", who was a " << adjective1 << " " << occupation0 << " in the Kingdom of " << place
		<< ". She Loved to wear " << clothing << " and " << hobby << ". She wanted to marry the " << adjective2 << " " << occupation1 << ", " << boysName << ", but her Father, King "
		<< mansName << " forbid her from seeing him." << endl;





}
void controlStatementsIntro() {
	//Three Primary Control Statements
	// Sequential Statements 
	// Selection Statements 
	// Repetition Statements 

	//Sequential Begin---
	int age = 15;
	cout << "Age: " << age << endl;
	//Sequential End---

	//Selection Begin---
	if (age >= 16) {
		cout << "You can Drive!" << endl;
	}
	else {
		cout << "You Cannot Drive Yet!" << endl;
	}
	// Selection End---

	//Repetition Begin
	//for-loop
	for (int i = 1; i <= age; i++) {
		cout << "Happy Birthday! " << i << endl;
	}
	//Repetition End


}
void selectionControlStatementsIfElse() {

	int age;

	cout << "Welcome to the Pub and Grille!" << endl;
	cout << "Please Enter Your Age: ";
	cin >> age;

	if (age >= 21) {
		cout << "Here! Have a beer!" << endl;
	}
	else { 
		cout << "Here! Have a Coke!" << endl; 
	}

	cout << "Thanks for coming to the Pub and Grille" << endl;

}
void selectionGrades() {

	char grade;

	cout << "Please Enter Your Letter Grade: ";
	cin >> grade;

	switch (grade) 
	{
		case 'A':
			cout << "Great Job!" << endl;
			break;
		case 'B':
			cout << "Good Job!" << endl;
			break;
		case 'C':
			cout << "You Can Do Better!" << endl;
			break;
		case 'D':
			cout << "You are getting close to failing" << endl;
			break;
		case 'F':
			cout << "You are Failing the course" << endl;
			break;
		default:
			cout << "You have entered and invalid Grade" << endl;

	}//end switch

}
void repetitionControlStatements() {
	int count = 0;

	cout << "While Loop: " << endl;
	while (count < 10) {
		cout << count << endl;
		count++;

	}

	cout << endl << endl;

	cout << "Do-While Loop: " << endl;
	int count2 = 10;
	do {
		cout << count2 << endl;
		count2++;
	} while (count2 < 10);

	cout << endl << endl;

	cout << "For-Loop: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	cout << endl << endl;

	int input; //Priming
	cout << "Please Enter a non-negative integer to continue,";
	cout << "or negative if you want to quit!" << endl;
	cin >> input;
	while (input >= 0) {
		cout << "Please Enter a non-negative integer to continue,";
		cout << "or negative if you want to quit!" << endl;
		cin >> input;
		cout << "Your Input is: " << input << endl;
	}
}
void repetitionSum() {

	int input;
	int sum = 0;

	do {
		cout << "Please Enter a Postive Real Integer, or Negative if you want to Exit." << endl;
		cin >> input;
		sum += input;
		cout << "The New Sum is: " << sum << endl;
		

	} while (input >= 0);
	cout << "Your Final Sum is: " << sum;

}
void breakContinue() {

	int count = 0;

	cout << "While loop w/Continue: " << endl;
	while (count < 10) {

		if (count == 5) {
			count++;
			continue;
		}
		cout << count << endl;
		count++;
	}
	cout << endl << endl;

	cout << "For Loop w/Continue: " << endl;

	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		cout << i << endl;
	}

	cout << endl << endl;

	cout << "For Loop w/Break: " << endl;

	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}


	cout << endl << endl;

	cout << "For Loop -- Even Only: " << endl;
	for (int i = 0; i < 10; i++) {
		if ((i % 2) == 0 ) {
			cout << i << endl;
			continue;
		}
		
	}


}
void randomNumberGenerator() {

	srand(time(nullptr));
	int val1 = rand() % 10; // Val1 Will be between 0 and 9
	
	int val2 = rand() % 10 + 1; // Val2 will be between 1 and 10

	cout << "Value 1: " << val1 << endl;
	cout << "Value 2: " << val2 << endl;
}
void singleDiRoll() {

	srand(time(nullptr));
	int diRoll;

	int count = 1;
	do {

		diRoll = rand() % 6 + 1;
		cout << "Dice Roll " << count << " is: " << diRoll << endl;
		count++;

	} while (count <= 10);

}
//----------------------------------------------------------
//----------------------------------------------------------