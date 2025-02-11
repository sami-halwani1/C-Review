/* 
	Udemy C++ Course Review
*/

#include <iostream>
#include "Header.h"

using namespace std;
//int counter = 0;

//int getResult(int num1, int num2);
//string getResult(string str1, string str2);
//int getResult(int);

int main() {
	//cout << "Hello, World!" << endl;
	//getNum();
	//getChar();
	//getBool();
	//getArithmatic();
	//getRelationShip();
	//warmRaining();
	//constants();
	//getInput();
	//averageOfThree();
	//madLibs();
	//controlStatementsIntro();
	//selectionControlStatementsIfElse();
	//selectionGrades();
	//repetitionControlStatements();
	//repetitionSum();
	//breakContinue();
	//randomNumberGenerator();
	//singleDiRoll();
	//jamOftheMonth();
	//oddsAndEvens();
	//guessTheNumber();
	//arrays();
	//moreArrays();
	//arrayClass();
	//vectorClass();
	//twoDArrays();
	//arrayData();
	//vectorData();
	//weightTracking();

	//int num1 = giveMe10();
	//int num2 = 10;
	//int sum  = addThese(num1, num2);
	//cout << sum << endl;
	//int squared;
	//squared = square(num2);
	//cout << squared << endl;
	
	//int num1 = 20;
	//int newNum;
	//passingSchemes(num1);
	//cout << num1 << endl;

	//int num1 = 100;
	//int num2 = 15;
	//threeTimeN(num1, num2);
	//cout << "num1: " << num1 << endl;
	//cout << "num2: " << num2 << endl;

	//cout << "Before: " << counter << endl;
	//modifyGlobal(counter);
	//cout << "After: " << counter << endl;

	//int sum = getResult(30,20);
	//string catStr = getResult("John", "Bob");
	//double product_3 = getResult(10);
	//cout << "sum: " << sum << endl;
	//cout << "Names: " << catStr << endl;
	//cout << "Product ^3: " << product_3 << endl;
	//mathReview();

	recursionCountDown(10);
	int totalSum = sumvalues(10);
	cout << "Sum of " << to_string(10) << " is " << totalSum << endl;
	int factorialTotal = factorialFun(5);
	cout << "Factorial is " << factorialTotal << endl;



	return 0;
}

//int getResult(int num1, int num2) {
//
//	return num1 + num2;
//}
//string getResult(string str1, string str2) {
//
//	return str1 + " " + str2;
//}
//int getResult(int num1) {
//	return pow(num1, 3);
//}