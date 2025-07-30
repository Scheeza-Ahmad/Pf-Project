#include<iostream> //adding necessary header files
#include<fstream>
using namespace std;
void display(int* array, int rows, int columns) //function to display the matrix
{
	ofstream fout;
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)// display on console
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				cout << array[i * columns + j] << " ";
			}
			cout << endl;
		}
	}
	else if (OutChoice == 2)//display in file
	{
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				fout << array[i * columns + j] << " ";
			}
			fout << endl;
		}
		cout << "Matrix sent to file " << UserOut << endl;
		fout.close();
	}
	else
	{
		cout << "Invalid input,choose from 1 and 2" << endl;
	}
}
void display2(double* array, int rows, int columns)// same as display function but for double type array
{
	ofstream fout;
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)//display on console
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				cout << array[i * columns + j] << " ";
			}
			cout << endl;
		}
	}
	else if (OutChoice == 2)//display in file
	{
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				fout << array[i * columns + j] << " ";
			}
			fout << endl;
		}
		fout.close();
		cout << "Matrix sent to file " << UserOut << endl;
	}
	else
	{
		cout << "Invalid input,choose from 1 and 2" << endl;
	}
}
void sum(int* array, int rows, int columns)// function to find the sum of a matrix
{
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)
	{
		int sumM = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				sumM += array[i * columns + j];
			}
		}
		cout << "Sum: " << sumM << endl;
	}
	else if (OutChoice == 2)
	{
		ofstream fout;
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		int sumM = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				sumM += array[i * columns + j];
			}
		}
		fout << sumM;
		fout.close();
		cout << "Sum sent to file " << UserOut << endl;
	}
	else
	{
		cout << "Invalid input,choose from 1 and 2" << endl;
	}
}
void product(int* array, int rows, int columns)// function to find the product of a matrix
{
	long double product = 1;
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)// different choices for console or file output
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				product *= array[i * columns + j];
			}
		}
		cout << "Product: " << product << endl;
	}
	else if (OutChoice == 2)
	{
		ofstream fout;
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				product *= array[i * columns + j];
			}
		}
		fout << product;
		fout.close();
		cout << "Product sent to file " << UserOut << endl;
	}
	else
	{
		cout << "Invalid input,choose from 1 and 2" << endl;
	}
}
void RowWiseAvg(int* array, int rows, int columns)// function to find row wise average of a matrix
{
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)
	{
		for (int i = 0; i < rows; ++i)
		{
			int rowSum = 0;
			for (int j = 0; j < columns; ++j)
			{
				rowSum += array[i * columns + j];
			}
			double rowAverage = static_cast<float>(rowSum) / columns;
			cout << "Row " << i + 1 << " average: " << rowAverage << endl;
		}
	}
	else if (OutChoice == 2)
	{
		ofstream fout;
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		for (int i = 0; i < rows; ++i)
		{
			int rowSum = 0;
			for (int j = 0; j < columns; ++j)
			{
				rowSum += array[i * columns + j];
			}
			double rowAverage = static_cast<float>(rowSum) / columns;
			fout << "Row " << i + 1 << " average: " << rowAverage << endl;
		}
		fout.close();
		cout << "Row Wise Average Sent to file." << endl;
	}
	else
	{
		cout << "Invalid input,choose from 1 and 2" << endl;
	}
}
void ColWiseAvg(int* array, int rows, int columns)// function to find column wise average of a matrix
{
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)
	{
		for (int i = 0; i < columns; ++i)
		{
			int ColSum = 0;
			for (int j = 0; j < rows; ++j)
			{
				ColSum += array[i * columns + j];
			}
			double ColAverage = static_cast<float>(ColSum) / columns;
			cout << "Column " << i + 1 << " average: " << ColAverage << endl;
		}
	}
	else if (OutChoice == 2)
	{
		ofstream fout;
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		for (int i = 0; i < columns; ++i)
		{
			int ColSum = 0;
			for (int j = 0; j < rows; ++j)
			{
				ColSum += array[i * columns + j];
			}
			double ColAverage = static_cast<float>(ColSum) / columns;
			fout << "Column " << i + 1 << " average: " << ColAverage << endl;
		}
		fout.close();
		cout << "Row Wise Average Sent to file." << endl;
	}
	else
	{
		cout << "Invalid input,choose from 1 and 2" << endl;
	}
}
void Average(int* array, int rows, int columns)// function to find the average of A whole matrix
{
	cout << "Do You Want Output on console or in file?" << endl;
	cout << "Press 1 for console and 2 for file" << endl;
	int OutChoice = 0;
	cin >> OutChoice;
	if (OutChoice == 1)
	{
		int size = rows * columns;
		int sumM = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				sumM += array[i * columns + j];
			}
		}
		cout << "Average: " << sumM / size << endl;
	}
	else if (OutChoice == 2)
	{
		ofstream fout;
		char UserOut[100];
		cout << "Enter file name: ";
		cin >> UserOut;
		fout.open(UserOut);
		int size = rows * columns;
		int sumM = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				sumM += array[i * columns + j];
			}
		}
		fout << "Average: " << sumM / size << endl;
		cout << "Average sent to file " << UserOut << endl;
		fout.close();
	}
	else
	{
		cout << "Invalid Input, choose from 1 And 2" << endl;
	}
}
void RowWiseSort(int* array, int rows, int columns)// function to sort the matrix row wise
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns - 1; j++) {
			for (int k = 0; k < columns - j - 1; k++) {
				if (array[i * columns + k] > array[i * columns + (k + 1)]) {
					int temp = array[i * columns + k];
					array[i * columns + k] = array[i * columns + (k + 1)];
					array[i * columns + (k + 1)] = temp;
				}
			}
		}
	}
	display(array, rows, columns);
}
void ColWiseSort(int* array, int rows, int columns)//function to sort the matrix column wise
{
	for (int j = 0; j < columns; j++) {
		for (int i = 0; i < rows - 1; i++) {
			for (int k = 0; k < rows - i - 1; k++) {
				if (array[k * columns + j] > array[(k + 1) * columns + j]) {
					int temp = array[k * columns + j];
					array[k * columns + j] = array[(k + 1) * columns + j];
					array[(k + 1) * columns + j] = temp;
				}
			}
		}
	}
	cout << "Column wise sorted Matrix: " << endl;
	display(array, rows, columns);
}
void ScalarAddition(int* array, int rows, int columns)// function to do scalar addition of a matrix
{
	int scalar = 0;
	cout << endl << "Enter the Scalar Value: ";
	cin >> scalar;
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i * columns + j] += scalar;
		}
	}
	cout << "Matrix After Scalar Addition " << endl;
	display(array, rows, columns);
}
void sumMatrices(int* array, int* array2, int rows, int columns) // function to find sum of two matrices
{
	int* result = new int[20 * 20];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; ++j) {
			result[i * columns + j] = array[i * columns + j] + array2[i * columns + j];
		}
	}
	cout << "Matrix after addition: " << endl;
	display(result, rows, columns);
	delete[] result;
}
void ScalarSubtraction(int* array, int rows, int columns)// function to find the scalar subtraction of a matrix
{
	signed int scalar = 0;
	cout << endl << "Enter the Scalar Value: ";
	cin >> scalar;
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i * columns + j] -= scalar;
		}
	}
	cout << "Matrix After Scalar Subtraction " << endl;
	display(array, rows, columns);
}
void subMatrices(int* array, int* array2, int rows, int columns)// function to find the subtraction of two matrices
{
	int* result = new int[20 * 20];
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			result[i * columns + j] = array[i * columns + j] - array2[i * columns + j];
		}
	}
	cout << "Matrix after Subtraction: " << endl;
	display(array, rows, columns);
	delete[]result;
}
void ScalarMultiplication(int* array, int rows, int columns)// function to find the scalar multiplication of matrices
{
	int scalar = 1;
	cout << endl << "Enter the Scalar Value: ";
	cin >> scalar;
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i * columns + j] *= scalar;
		}
	}
	cout << "Matrix After Scalar Multiplication " << endl;
	display(array, rows, columns);
}
void MulMatrices(int* array, int* array2, int rows, int columns, int rows2, int columns2)// function to multiply two matrices
{
	int* result = new int[rows * columns];
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			result[i * columns + j] = array[i * columns + j] * array2[i * columns + j];
		}
	}
	display(result, rows, columns);
	delete[]result;// deleting the result array
}
void ScalarDivision(double* array, int rows, int columns)// function to find the scalar division of a matrix
{
	signed int scalar = 1;
	cout << endl << "Enter the Scalar Value: ";
	cin >> scalar;
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i * columns + j] = array[i * columns + j] / scalar;
		}
	}
	cout << "Matrix After Scalar Division " << endl;
	display2(array, rows, columns);//display2 because this receives double array
}
void transpose(int* array, int rows, int columns)//function to find the transpose of a matrix
{
	int NewRows = columns;
	int NewColumns = rows;
	int* array1 = new int[5 * 5];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array1[j * columns + i] = array[i * columns + j];
		}
	}
	display(array1, rows, columns);
	delete[]array1;
}
void determinant(int* array, int rows, int columns)// function to find the determinant of a matrix
{
	if (rows != columns)//if rows and columns are not same it will give error
	{
		cout << "Determinant not Possible as rows and columns are of different sizes..." << endl;
	}
	else if (rows == 3 && columns == 3)
	{
		cout << "Do You Want Output on console or in file?" << endl;
		cout << "Press 1 for console and 2 for file" << endl;
		int OutChoice = 0;
		cin >> OutChoice;
		if (OutChoice == 1)//console and file output in the function itself because output is not a matrix.
		{
			int** mat;
			mat = new int* [rows];
			for (int i = 0; i < 3; ++i) {
				mat[i] = new int[columns];
			}
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					mat[i][j] = array[i * columns + j];
				}
			}
			float determinant = 0;
			for (int i = 0; i < rows; i++)
			{
				determinant = determinant + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
			}
			cout << "Determinant of said Array is: " << determinant << endl;
			for (int i = 0; i < rows; i++)
			{
				delete[]mat[i];
			}
			delete[]mat;
		}
		else if (OutChoice == 2)
		{
			ofstream fout;
			char UserOut[100];
			cout << "Enter file name: ";
			cin >> UserOut;
			fout.open(UserOut);
			int** mat;
			mat = new int* [rows];
			for (int i = 0; i < 3; ++i) {
				mat[i] = new int[columns];
			}
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					mat[i][j] = array[i * columns + j];
				}
			}
			float determinant = 0;
			for (int i = 0; i < rows; i++)
			{
				determinant = determinant + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
			}
			fout << "Determinant of said Array is: " << determinant << endl;
			cout << "Determinant sent to " << UserOut << endl;
			fout.close();
			for (int i = 0; i < rows; i++)
			{
				delete[]mat[i];
			}
			delete[]mat;
		}
		else
		{
			cout << "Invalid Input." << endl;
		}
	}
	else
	{
		cout << "Only 3x3 Matrix is acceptable currently" << endl;
	}
}
void inverse(double* array, int rows, int columns)//function to find inverse of a matrix
{
	if (rows != columns) {
		cout << "Inverse not possible as rows and columns are of different sizes..." << endl;
	}
	else {
		double** mat = new double* [rows];
		for (int i = 0; i < rows; ++i) {
			mat[i] = new double[columns];
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				mat[i][j] = array[i * columns + j];
			}
		}
		//calculating det to find inverse
		float determinant = 0;
		for (int i = 0; i < rows; i++) {
			//det formula
			determinant = determinant + (mat[0][i] * (mat[1][(i + 1) % rows] * mat[2][(i + 2) % rows] - mat[1][(i + 2) % rows] * mat[2][(i + 1) % rows]));
		}

		if (determinant == 0.0)
		{
			cout << "Matrix is singular, inverse does not exist." << endl;
		}
		else
		{
			int UserChoice = 0;
			cout << "Do You Want Output on console or in file?" << endl;
			cout << "Press 1 for console and 2 for file" << endl;
			cin >> UserChoice;
			if (UserChoice == 1)
			{
				cout << endl << "Inverse of matrix is: " << endl;
				for (int i = 0; i < rows; i++) {
					for (int j = 0; j < columns; j++) {
						//inverse formula
						cout << ((mat[(j + 1) % rows][(i + 1) % rows] * mat[(j + 2) % rows][(i + 2) % rows]) - (mat[(j + 1) % rows][(i + 2) % rows] * mat[(j + 2) % rows][(i + 1) % rows])) / determinant << "    ";
					}
					cout << endl;
				}
			}
			else if (UserChoice == 2)
			{
				ofstream fout;
				char UserOut[100];
				cout << "Enter file name: ";
				cin >> UserOut;
				fout.open(UserOut);
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < columns; j++)
					{
						fout << ((mat[(j + 1) % rows][(i + 1) % rows] * mat[(j + 2) % rows][(i + 2) % rows]) - (mat[(j + 1) % rows][(i + 2) % rows] * mat[(j + 2) % rows][(i + 1) % rows])) / determinant << "    ";
					}
					fout << endl;
				}
				cout << "Matrix sent to file " << UserOut << endl;
				fout.close();
			}
		}
		for (int i = 0; i < rows; ++i) {
			delete[] mat[i];
		}
		delete[] mat;
	}
}
void menu()//menu function to provide user with choices
{
	cout << "      {{{{{{{{{{}}}}}}}}}" << endl
		<< "   {{{{{{{{   MENU   }}}}}}}" << endl
		<< "      {{{{{{{{{{}}}}}}}}}" << endl;
	cout << endl;
	cout << endl;
	cout << "\tA.)Matrix Sum " << endl;
	cout << "\tB.)Matrix Product " << endl;
	cout << "\tC.)Matrix Row Wise Average " << endl;
	cout << "\tD.)Matrix Column-wise Average " << endl;
	cout << "\tF.)Matrix Average  " << endl;
	cout << "\tG.)Matrix Row-wise sorting  " << endl;
	cout << "\tH.)Matrix Column-wise sorting  " << endl;
	cout << "\tI.)Scalar Matrix Addition " << endl;
	cout << "\tJ.)Matrices Addition " << endl;
	cout << "\tK.)Scalar Matrix Subtraction " << endl;
	cout << "\tL.)Matrices Subtraction " << endl;
	cout << "\tM.)Scalar Matrix Multiplication " << endl;
	cout << "\tN.)Matrices Multiplication " << endl;
	cout << "\tO.)Scalar Matrix Division " << endl;
	cout << "\tP.)Matrix Transpose " << endl;
	cout << "\tQ.)Matrix Determinant " << endl;
	cout << "\tR.)Matrix Inverse " << endl;
	cout << "\tPress E to exit " << endl;
}
int* ConInput(int* array, int rows, int columns)//function to take input from user on console
{
	cout << "Enter Elements for the array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> array[i * columns + j];
		}
		cout << endl;
	}
	return array;
}
double* ConInput2(double* array, int rows, int columns)//same as ConInput with exception of parameters
{
	cout << "Enter Elements for the array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> array[i * columns + j];
		}
		cout << endl;
	}

	return array;
}
int RowInput(int rows)//function to input rows on console
{
	cout << "Enter number of rows : ";
	cin >> rows;
	return rows;
}
int ColumnInput(int columns)//function to input columns on console
{
	cout << "Enter number of columns : ";
	cin >> columns;
	return columns;
}
int* fileInput(int* array, int rows, int columns, char* UserFile)//function to take input from file
{
	ifstream fin;
	bool open = true;
	if (open)
	{
		fin.open(UserFile);
	}
	else
	{
		open = false;
	}
	if (fin.is_open())
	{
		cout << "File Opened Successfully" << endl;
		fin >> rows >> columns;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				fin >> array[i * columns + j];
			}
		}
	}
	else
	{
		cout << "Could Not Find the File" << endl;
	}
	fin.close();
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << array[i * columns + j] << " ";
		}
		cout << endl;
	}
	return array;
}
double* fileInput2(double* array, int rows, int columns, char* UserFile)//function to take input from file but done with a double array
{
	ifstream fin;
	bool open = true;
	if (open)
	{
		fin.open(UserFile);
	}
	else
	{
		open = false;
	}
	if (fin.is_open())
	{
		cout << "File Opened Successfully" << endl;
		fin >> rows >> columns;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				fin >> array[i * columns + j];
			}
		}
	}
	else
	{
		cout << "Could Not Find the File" << endl;
	}
	fin.close();
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << array[i * columns + j] << " ";
		}
		cout << endl;
	}
	return array;
}
int fileRowInput(char* UserFile)//function to input rows from file into variable
{
	ifstream fin;
	int rows = 0;
	bool open = true;
	if (open)
	{
		fin.open(UserFile);
	}
	else
	{
		open = false;
	}
	fin >> rows;
	fin.close();
	return rows;
}
int fileColInput(char* UserFile)//function to input columns from file into variable
{
	ifstream fin;
	int columns = 0;
	int rows = 0;
	bool open = true;
	if (open)
	{
		fin.open(UserFile);
	}
	else
	{
		open = false;
	}
	fin >> rows;
	fin >> columns;
	fin.close();
	return columns;
}
int main()
{
	ifstream fin;
	ofstream fout;
	//allocating memory to arrays for performing all the functions
	int* Sum = new int[20 * 20];
	int* Product = new int[20 * 20];
	int* R_W_avg = new int[20 * 20];
	int* C_W_avg = new int[20 * 20];
	int* avg = new int[20 * 20];
	int* R_W_sort = new int[20 * 20];
	int* C_W_sort = new int[20 * 20];
	int* Scalar_Add = new int[20 * 20];
	int* Matrice_Add = new int[20 * 20];
	int* Matrice_Add2 = new int[20 * 20];
	int* Scalar_Sub = new int[20 * 20];
	int* Matrice_Sub = new int[20 * 20];
	int* Matrice_Sub2 = new int[20 * 20];
	int* Scalar_Mul = new int[20 * 20];
	int* Matrice_Mul = new int[20 * 20];
	int* Matrice_Mul2 = new int[20 * 20];
	double* Scalar_Div = new double[20 * 20];
	int* Transpose = new int[20 * 20];
	int* Determinant = new int[20 * 20];
	double* Inverse = new double[20 * 20];
	//declaring and initializing all the variables needed for the program
	int rows = 0;
	int columns = 0;
	int rows2 = 0;
	int columns2 = 0;
	char choice;
	int Rows = 0;
	int Columns = 0;
	int Rows2 = 0;
	int Columns2 = 0;
	int NotAccept = 2;
	int* result = new int[20 * 20];
	int* result2 = new int[20 * 20];
	double* result3 = new double[20 * 20];
	bool Exit = false;
	char UserFile[100];
	char UserFile2[100];
	do {// do while loop in case of invalid inputs
		rows = 0;
		columns = 0;
		menu();//calling menu function
		char User_choice = 0;
		cin >> User_choice;
		switch (User_choice)
		{
		case 'E'://case for exiting the program
		case 'e':
			cout << "\t{{{{{{{{Hope Your Experience Was Satisfactory}}}}}}}" << endl << "Exiting Now...";
			exit(0);
			break;
		case 'A':
		case 'a'://case to find the sum of a matrix
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions
			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Sum, Rows, Columns);
				sum(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(Sum, Rows, Columns, UserFile);
				sum(result, Rows, Columns);
			}
			else//in case of invalid data entry
			{
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'B'://case to find the product of a matrix
		case 'b':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Product, Rows, Columns);
				product(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(Product, Rows, Columns, UserFile);
				product(result, Rows, Columns);
			}
			else
			{//in case of invalid entry
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'C'://case to find row avg
		case 'c':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions
			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(R_W_avg, Rows, Columns);
				RowWiseAvg(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(R_W_avg, Rows, Columns, UserFile);
				RowWiseAvg(result, Rows, Columns);
			}
			else
			{// in case of invalid entry
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'D'://case to find column avg
		case 'd':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(C_W_avg, Rows, Columns);
				ColWiseAvg(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(C_W_avg, Rows, Columns, UserFile);
				ColWiseAvg(result, Rows, Columns);
			}
			else
			{//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'F'://case to find avg of whole matrix
		case 'f':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions
			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(avg, Rows, Columns);
				Average(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(avg, Rows, Columns, UserFile);
				Average(result, Rows, Columns);
			}
			else
			{
				//in case of invalid entry
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'G'://case to sort the matrix row wise
		case 'g':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions
			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(R_W_sort, Rows, Columns);
				RowWiseSort(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(R_W_sort, Rows, Columns, UserFile);
				RowWiseSort(result, Rows, Columns);
			}
			else
			{
				//in case of invalid entry
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'H'://case to column wise sort the matrix
		case 'h':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(C_W_sort, Rows, Columns);
				ColWiseSort(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(C_W_sort, Rows, Columns, UserFile);
				ColWiseSort(result, Rows, Columns);
			}
			else
			{
				//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'I'://case for scalar addition of the matrix
		case 'i':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Scalar_Add, Rows, Columns);
				ScalarAddition(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(Scalar_Add, Rows, Columns, UserFile);
				ScalarAddition(result, Rows, Columns);
			}
			else
			{
				//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'J'://case for addition of two matrices
		case 'j':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
		//calling all the necessary functions

			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				rows2 = 0;
				columns2 = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Matrice_Add, Rows, Columns);
				Rows2 = RowInput(rows2);
				Columns2 = ColumnInput(columns2);
				result2 = ConInput(Matrice_Add2, Rows2, Columns2);
				if (Rows == Rows2 && Columns == Columns2)
				{
					sumMatrices(result, result2, Rows2, Columns2);
				}
				else
					cout << "Addition not possible because of difference of dimensions." << endl;// in case user enters diff. rows and columns
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				cout << "Enter the name of second file you want to open: ";
				cin >> ws;
				cin.getline(UserFile2, 100);
				Rows2 = fileRowInput(UserFile2);
				Columns2 = fileColInput(UserFile2);
				result = fileInput(Matrice_Add, Rows, Columns, UserFile);
				result2 = fileInput(Matrice_Add2, Rows2, Columns2, UserFile2);
				if (Rows == Rows2 && Columns == Columns2)
				{
					sumMatrices(result, result2, Rows2, Columns2);
				}
				else
				{
					cout << "Addition not possible because of difference of dimensions." << endl;
				}
			}
			else
			{
				// in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'K'://case for scalar subtraction
		case 'k':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Scalar_Sub, Rows, Columns);
				ScalarSubtraction(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(Scalar_Sub, Rows, Columns, UserFile);
				ScalarSubtraction(result, Rows, Columns);
			}
			else
			{
				// in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'L'://case for subtraction of matrices
		case 'l':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				rows2 = 0;
				columns2 = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Matrice_Sub, Rows, Columns);
				Rows2 = RowInput(rows2);
				Columns2 = ColumnInput(columns2);
				result2 = ConInput(Matrice_Sub2, Rows2, Columns2);
				if (Rows == Rows2 && Columns == Columns2)
				{
					subMatrices(result, result2, Rows, Columns);
				}
				else
					cout << "Subtraction not possible because of difference of dimensions." << endl;//error in case of different rows and columns input
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				cout << "Enter the name of second file you want to open: ";
				cin >> ws;
				cin.getline(UserFile2, 100);
				Rows2 = fileRowInput(UserFile2);
				Columns2 = fileColInput(UserFile2);
				result = fileInput(Matrice_Sub, Rows, Columns, UserFile);
				result2 = fileInput(Matrice_Sub2, Rows2, Columns2, UserFile2);
				if (Rows == Rows2 && Columns == Columns2)
				{
					subMatrices(result, result2, Rows2, Columns2);
				}
				else
				{
					cout << "Subtraction not possible because of difference of dimensions." << endl;//error in case of different rows and columns input
				}
			}
			else
			{
				//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'M'://case for scalar multiplication of matrix
		case 'm':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Scalar_Mul, Rows, Columns);
				ScalarMultiplication(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin.ignore();
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(Scalar_Mul, Rows, Columns, UserFile);
				ScalarMultiplication(result, Rows, Columns);
			}
			else
			{
				//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'N'://case for multiplication of two matrices
		case 'n':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				rows2 = 0;
				columns2 = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				Rows2 = RowInput(rows2);
				Columns2 = ColumnInput(columns2);
				if (Rows == Columns2)
				{
					result = ConInput(Matrice_Mul, Rows, Columns);
					result2 = ConInput(Matrice_Mul2, Rows2, Columns2);
					MulMatrices(result, result2, Rows, Columns, Rows2, Columns);

				}
				else
					cout << "Multiplication not possible because of difference of dimensions.";//making sure dimensions are correct
				cout << endl;

			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				cout << "Enter the name of second file you want to open: ";
				cin >> ws;
				cin.getline(UserFile2, 100);
				Rows2 = fileRowInput(UserFile2);
				Columns2 = fileColInput(UserFile2);
				if (Rows == Columns2)
				{
					result = fileInput(Matrice_Mul, Rows, Columns, UserFile);
					result2 = fileInput(Matrice_Mul2, Rows2, Columns2, UserFile2);
					MulMatrices(result, result2, Rows, Columns, Rows2, Columns2);
				}
				else
				{
					cout << "Cannot Multipy Due to Difference of dimensions." << endl;

				}
			}
			else
			{
				//in case of invalid entry
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'O'://case for scalar division
		case 'o':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result3 = ConInput2(Scalar_Div, Rows, Columns);
				ScalarDivision(result3, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result3 = fileInput2(Scalar_Div, Rows, Columns, UserFile);
				ScalarDivision(result3, Rows, Columns);
			}
			else
			{
				//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'P'://case for transpose of matrix
		case 'p':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				Rows = RowInput(rows);
				Columns = ColumnInput(columns);
				result = ConInput(Transpose, Rows, Columns);
				transpose(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				result = fileInput(Transpose, Rows, Columns, UserFile);
				transpose(result, Rows, Columns);
			}
			else
			{
				//in case for invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'Q'://case to find determinant of a matrix
		case 'q':
			choice = 0;
			cout << "Do you want to read data from the file or through console? " << endl << "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1')
			{
				rows = 0;
				columns = 0;
				Rows;
				Columns;
				bool deter = false;
				do {
					Rows = RowInput(rows);
					Columns = ColumnInput(columns);
					if (Rows != Columns)
					{
						cout << "Please Enter Same Rows And Columns For Determinant" << endl;// in case user enters diff. rows and columns
					}
					else
					{
						deter = true;
					}
				} while (!deter);
				result = ConInput(Determinant, Rows, Columns);
				determinant(result, Rows, Columns);
			}
			else if (choice == '2')
			{
				cout << endl;
				cout << "Enter the name of file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				bool deter = false;

				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				if (Rows != Columns)
				{
					cout << "Please Enter Same Rows And Columns For Determinant" << endl;// in case user enters invalid rows and columns
				}
				else
				{
					deter = true;
				}
				if (deter)
				{
					result = fileInput(Determinant, Rows, Columns, UserFile);
					determinant(result, Rows, Columns);
				}
			}
			else
			{
				//in case of invalid input
				cout << "Invalid entry..." << endl;
			}
			break;
		case 'R'://case to find the inverse of a matrix
		case 'r':
			choice = 0;
			cout << "Do you want to read data from the file or through console?" << endl
				<< "Press 1 for console and 2 for file: " << endl;
			cin >> choice;
			//calling all the necessary functions

			if (choice == '1') {
				rows = 0;
				columns = 0;
				bool deter = false;
				do {
					Rows = RowInput(rows);
					Columns = ColumnInput(columns);
					if (Rows != Columns || Rows == NotAccept && Columns == NotAccept) {
						cout << "Please enter the same number of rows and columns for inverse. 2x2 matrix is not available at the moment" << endl;//making sure rows and columns are same
					}
					else {
						deter = true;
					}
				} while (!deter);
				result3 = ConInput2(Inverse, Rows, Columns);
				inverse(result3, Rows, Columns);
			}
			else if (choice == '2') {
				cout << endl << "Enter the name of the file you want to open: ";
				cin >> ws;
				cin.getline(UserFile, 100);
				bool deter = false;

				Rows = fileRowInput(UserFile);
				Columns = fileColInput(UserFile);
				if (Rows == Columns)
				{
					deter = true;

				}
				else
				{
					cout << "Please make sure the file contains matrices with the same number of rows and columns for inverse." << endl;//making sure rows and columns are same

				}
				if (deter = true)
				{
					result3 = fileInput2(Inverse, Rows, Columns, UserFile);
					inverse(result3, Rows, Columns);
				}
				else
				{
					cout << "Perfrom the function again" << endl;
				}

			}
			else {
				//in case of invalid entry
				cout << "Invalid entry..." << endl;
			}
			break;
		default:
			cout << "Invalid Input. Please Enter Avaialable Options from menu" << endl;
		}
	} while (!Exit);//end of do while loop

	//deallocating all the dynamic memory at the end of program
	delete[]Sum;
	delete[]Product;
	delete[]R_W_avg;
	delete[] C_W_avg;
	delete[]avg;
	delete[]R_W_sort;
	delete[]C_W_sort;
	delete[]Scalar_Add;
	delete[]Matrice_Add;
	delete[]Matrice_Add2;
	delete[]Scalar_Sub;
	delete[]Matrice_Sub;
	delete[]Matrice_Sub2;
	delete[]Scalar_Mul;
	delete[]Matrice_Mul;
	delete[]Matrice_Mul2;
	delete[]Scalar_Div;
	delete[]Transpose;
	delete[]Determinant;
	delete[]Inverse;
	delete[]result;
	delete[]result2;
	delete[]result3;
	return 0;
}