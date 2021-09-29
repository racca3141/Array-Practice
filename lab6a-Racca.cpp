// Emerson Racca
// September 29, 2021
// Lab 6a - Array Practice

/*
Write three (3) for loop statements in the main that perform the following one-dimensional array operations on a 10-element integer array called a. That is,

const int size = 10;
int a[size];
1. In a for loop, populate each element to 5. Print the array.
2. In a for loop, populate each element with a random decimal from 1 to 100. Print the array.
3. In a for loop, set each element to sequential multiples of 5, that is {0, 5, 10, 15,...}. Print the array.

Write three (3) more for loop statements in the main. Declare another array to hold doubles called b:

const int n = 100;
double b[size];
4. In a for loop, populate this array b with the decimals {0.2, 0.4, 0.6, 0.8,...}. Print the array.
5. In a for loop, add all the numbers in array b.  Print the sum.
6. In a for loop, print the previous array b backwards.
---

Turn in one .cpp file with six (6) for loops in the main.
*/

#include<iostream>
#include<cstdlib> // srand(), rand()
#include<ctime> // time(0)

#include<iomanip> // setprecision()

using namespace std;

int main(void) {

	cout << "Array Practice\n\n";

	const int size = 10;
	int a[size];

	cout << "Write three (3) for loop statements in the main that perform the following one-dimensional array operations\n";
	cout << "on a 10 - element integer array called a.\n\n";

	//1

	cout << "1. In a for loop, populate each element to 5. Print the array.\n\n";

	for (int i = 0; i < size; i++) {
		a[i] = 5;
		cout << "a[" << i << "] = " << a[i] << endl;
	};

	cout << endl << endl;

	//2

	cout << "2. In a for loop, populate each element with a random decimal from 1 to 100. Print the array.\n\n";
	
	srand((unsigned int) time(0)); //modified to silence unsigned error.

	for (int i = 0; i < size; i++) {
		a[i] = 1 + rand() % 100;
		cout << "a[" << i << "] = " << a[i] << endl;
	};

	cout << endl << endl;

	//3

	cout << "3. In a for loop, set each element to sequential multiples of 5, that is {0, 5, 10, 15,...}. Print the array.\n\n";

	for (int i = 0; i < size; i++) {
		a[i] = i * 5;
	};

	for (int i = 0; i < size; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	cout << endl << endl;

	//Part 2

	cout << "Write three (3) more for loop statements in the main. Declare another array to hold doubles called b.\n\n";

	const int n = 100;
	double b[n];

	//4

	cout << fixed << setprecision(1); // to make it look balanced

	cout << "4. In a for loop, populate this array b with the decimals{ 0.2, 0.4, 0.6, 0.8,... }. Print the array.\n\n";

	double c = 0; // accumulates 

	for (int i = 0; i < n; i++) {
		c = c + 0.2;
		b[i] = c;
		cout << "b[" << i << "] = " << b[i] << endl;
	};

	cout << endl << endl;

	//5

	cout << "5. In a for loop, add all the numbers in array b.  Print the sum.\n\n";

	c = 0; //recycled variable

	for (int i = 0; i < n; i++) {
		c = c + b[i];
	};

	cout << "The sum of the contents of array b[] = " << c << " ." << endl << endl << endl;

	//6

	cout << "6. In a for loop, print the previous array b backwards.\n\n";

	for (int i = n - 1; i >= 0; i--) {
		cout << "b[" << i << "] = " << b[i] << endl;
	}

	return 0;
}
