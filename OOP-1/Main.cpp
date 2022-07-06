#include <iostream>

using namespace std;

/// @brief ������� ����������� ���������� ��������
/// @return ��������� ���������� ��������� ��������
double ReadingCorrectValue()
{
	double value;
	while (true)
	{
		if (cin >> value)
		{
			break;
		}
		cout << "Unfortunately, you made a mistake\n";
		cout << "(The input value must be an integer)\n";
		cout << "Enter again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return value;
}


/// @brief ������� ����������� ���������� �������
/// @return ��������� ���������� ��������� ��������
int ReadingCorrectSize()
{
	int size;
	while (true)
	{
		cin >> size;
		if (size <= 0)
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater than 0)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return size;
}


//1.1.1.1							
/*void Breakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
		sum += add * i;
		//{0, 1.1, 3.52, 7.513, 13.37, 21.42, 32.05, 45.69, 62.84, 84.06}
		add *= 1.1;
	}
	cout << "Total sum is " << sum << endl;
}*/

//1.1.1.2
/*void Breakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 1000; i++)
	{
		sum += add * i;			//3.26
		if (i % 3 == 0)
		{
			add *= 1.1;
		}
		else
		{
			add /= 3.0;
		}

	}
	cout << "Total sum is " << sum << endl;
}*/

//1.1.3.1
double GetPower(double base, int exponent)
{
	double functionResult = 1;
	for (int i = 0; i < exponent; i++)
	{
		functionResult = functionResult * base;
	}
	return functionResult;
}

//1.1.3.3
void DemoGetPower(double base, int exponent)
{
	cout << base << " ^ " << exponent << " = " << GetPower(base, exponent);
	cout << endl;
}

//1.1.3.4
/*void RoundToTens(int& value)
{
	int remainder;
	remainder = value % 10;
	value = value / 10;
	if (remainder < 5)
	{
		value = value * 10;
	}
	else
	{
		value = value + 1;
		value = value * 10;
	}
}*/

//1.1.4.4
/*void Foo(double a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;
	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}*/

//1.1.4.5
/*void Foo(double &a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;
	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}*/

//1.1.4.8
/*void Foo(double * a)
{
	cout << "Address in pointer in Foo(): " << a << endl;
	cout << "Address of pointer in Foo(): " << &a << endl;
	cout << "Value in pointer address in Foo(): " << *a << endl;
	*a = 15.0;
	cout << "New value in pointer address: " << *a << endl;
}*/

//1.1.5.7
/*int* MakeRandomArray(int arraySize)
{
	int* array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand() % 100;
	}
	return array;
}*/

//1.1.5.8
int* ReadArray(int count)
{
	int* values = new int[count];
	for (int i = 0; i < count; i++)
	{
		cout << "\nEnter a value [" << i << "]: ";
		cin >> values[i];
	}
	return values;
}

//1.1.5.8
int CountPositiveValues(int* values, int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			result++;
		}
	}
	return result;
}


int GetIndexOfMax(double* array, int count)
{
	float maxElement = array[0];
	int index = 0;
	for (int i = 1; i < count; i++)
	{
		if (maxElement < array[i])
		{
			index = i;
		}
	}
	return index;
}



int main()
{
	//1.1.1.1 and 1.1.1.2
	//Breakpoints();

	//1.1.2.1
	/*int array[10] = {12, 21, 119, -80, 300, 75, 81, -8, 47, 31};
	int temporary;
	cout << "Source array is:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "	";
	}
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temporary = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporary;
			}
		}
	}
	cout << "\nSorted array is:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "	";
	}*/

	//1.1.2.2
	/*double array[12] =
		{12.0, 21.5, 119.2, -80.7, 300.0, 75.5, 81.2, 8.1, 47.3, 31.2, 85.3, 100.1};
	cout << "Source array is:\n";
	for (int i = 0; i < 12; i++)
	{
		cout << array[i] << "	";
	}
	double searchingValue;
	cout << "\nEnter a Searching Value: ";
	cin >> searchingValue;
	int counter = 0;
	for (int i = 0; i < 12; i++)
	{
		if (array[i] >= searchingValue)
		{
			counter++;
		}
	}
	cout << "\nElement of array more than " << searchingValue << " is: " << counter;
	cout << endl;*/

	//1.1.2.3
	/*
	char string[8];
	for (int i = 0; i < 8; i++)
	{
		cout << "Enter a char: ";
		cin >> string[i];
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (int i = 0; i < 8; i++)
	{
		cout << endl;
		cout << i << ")	" << string[i];
	}
	cout << "\nAll char in string: ";
	for (int i = 0; i < 8; i++)
	{
		if ((string[i] >= 97) && (string[i] <= 122))
		{
			cout << string[i] << " ";
		}
	}
	*/

	//1.1.3.2
	/*double base;
	int exponent;
	cout << "Enter a base: ";
	base = ReadingCorrectValue();
	cout << "Enter a exponent: ";
	exponent = ReadingCorrectSize();
	cout << "Result = " << GetPower(base, exponent) << endl;*/

	//1.1.3.3
	/*int numberCalls;
	cout << "How many times do you want to call the function?";
	cout << "\nEnter your choice: ";
	numberCalls = ReadingCorrectSize();
	for (int i = 0; i < numberCalls; i++)
	{
		double base;
		int exponent;
		cout << "Enter a base: ";
		base = ReadingCorrectValue();
		cout << "Enter a exponent: ";
		exponent = ReadingCorrectSize();
		DemoGetPower(base, exponent);
	}*/

	//1.1.3.4	
	/*int numberCalls;
	cout << "How many times do you want to call the function?";
	cout << "\nEnter your choice: ";
	numberCalls = ReadingCorrectSize();
	for (int i = 0; i < numberCalls; i++)
	{
		int value;
		cout << "\nEnter a value: ";
		value = ReadingCorrectSize();
		cout << "For " << value;
		RoundToTens(value);
		cout << " rounded value is " << value;
	}*/

	//1.1.4.1
	/*int a = 5;
	int b = 4;
	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;
	double c = 13.5;
	cout << "Address of c: " << &c << endl;
	bool d = true;
	cout << "Address of d: " << &d << endl;*/

	//1.1.4.2
	/*int array[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
	cout << "Size of int type: " << sizeof(int) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Address of array[" << i << "]: " << &array[i];
		cout << endl;
	}
	cout << endl;
	cout << "Size of double type: " << sizeof(double) << endl;
	double array2[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2 };
	for (int i = 0; i < 10; i++)
	{
		cout << "Address of array2[" << i << "]: " << &array2[i];
		cout << endl;
	}*/

	//1.1.4.3
	/*int a = 5;
	int &b = a;
	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;
	cout << endl;
	b = 7;
	cout << "Value of a: " << a << endl;*/

	//1.1.4.4 and 1.1.4.5
	/*double a = 5.0;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;
	Foo(a);
	cout << endl;
	cout << "Value of a in main(): " << a << endl;*/

	//1.1.4.6
	/*int a = 5;
	int* pointer = &a;
	cout << "Address of a: " << &a << endl;
	cout << "Address in pointer: " << pointer << endl;
	cout << "Address of pointer: " << &pointer << endl;
	cout << endl;
	*pointer = 7;
	cout << "Value in a: " << a << endl;
	cout << "Value by pointer address: " << *pointer << endl;*/

	//1.1.4.7
	/*
		��� � �������� ���� �������� �������� �������������, ���������� ��������� � �������� ���������?
		��� ��� �������� ���������� ������ *, ������� ����� ����� �������� �� � �������� ����.
		�����:
		1) ����� �������� ������������� ���� �����-���� �������� (��������, �������, ������������)
		2) ����� ���������� ��������� ���� ����������, �� ��� ������ ��������� ���������
		3) �������� ��������� ����������� ����� ����� ��������, ��� ��������� �������� ������������� ����� ���������
	*/

	//1.1.4.8
	/*double value = 5.0;
	double* pointer = &value;
	cout << "Address of value in main(): " << &value << endl;
	cout << "Address in pointer in main(): " << pointer << endl;
	cout << "Address of pointer in main(): " << &pointer << endl;
	cout << "Value of a in main(): " << value << endl;
	Foo(pointer);
	cout << endl;
	cout << "Value of a in main(): " << value << endl;*/

	//1.1.5.1
	/*double* array = new double[8]
			{ 1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5 };
	cout << "Array of double: \n";
	for (int i = 0; i < 8; i++)
	{
		cout << array[i];
		cout << " ";
	}
	delete[] array;*/

	//1.1.5.2
	/*bool* array = new bool[8]
			{ true, false, true, true, false, true, false, false};
	cout << "Array of bool: \n";
	for (int i = 0; i < 8; i++)
	{
		cout << array[i];
		cout << " ";
	}
	delete[] array;*/

	//1.1.5.3
	/*int stringLength;
	cout << "Enter a string length: ";
	stringLength = ReadingCorrectSize();
	char* string = new char[stringLength];
	for (int i = 0; i < stringLength; i++)
	{
		cout << "Enter a symbol: ";
		cin >> string[i];
	}
	cout << "You string is: \n";
	for (int i = 0; i < stringLength; i++)
	{
		cout << string[i] << " ";
	}
	delete[] string;*/

	//1.1.5.4
	/*double* array = new double [10]
		{ 1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5, 16.7, 4.5};
	cout << "Array of double:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "	";
	}
	cout << endl << endl;
	int temporary;
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temporary = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporary;
			}
		}
	}
	cout << "Sorted array of double:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "	";
	}
	delete[] array;*/

	//1.1.5.5
	/*int* array = new int [10]
		{1, 15, -8, -3, 12, 38, 0, 4, 16, 4};
	cout << "Array of integer:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "	";
	}
	cout << endl << endl;
	int searchKey;
	cout << "Enter searching key: ";
	searchKey = ReadingCorrectValue();
	for (int i = 0; i < 10; i++)
	{
		if (array[i] == searchKey)
		{
			cout << "\n\nIndex of searching value " << array[i] << " is: " << i;
		}
	}
	delete[] array;*/

	//1.1.5.6
	/*char* string = new char[15]
			{'a', '5', 'm', 'i', '%', '!', 's', 'p', '*', '9', 'f', '^', ';', 'q', 'k'};
	cout << "You string is: \n";
	for (int i = 0; i < 15; i++)
	{
		cout << string[i] << "	";
	}
	cout << "\nAll char in string:\n";
	for (int i = 0; i < 15; i++)
	{
		if ((string[i] >= 'a') && (string[i] <= 'z'))
		{
			cout << string[i] << "	";
		}
	}
	delete[] string;*/

	//1.1.5.7
	/*int* array = MakeRandomArray(5);
	cout << "\nRandom array of 5:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << "	";
	}
	delete[] array;
	array = MakeRandomArray(8);
	cout << "\nRandom array of 8:\n";
	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << "	";
	}
	delete[] array;
	cout << "\nRandom array of 13:\n";
	array = MakeRandomArray(13);
	for (int i = 0; i < 13; i++)
	{
		cout << array[i] << "	";
	}
	delete[] array;*/

	//1.1.5.8
	/*int count = 15;
	int* values = ReadArray(count);
	for (int i = 0; i < 15; i++)
	{
		cout << values[i] << "	";
	}
	cout << "\nCount is: " << CountPositiveValues(values, count) << endl;
	delete[] values;
	count = 20;
	values = ReadArray(count);
	for (int i = 0; i < 20; i++)
	{
		cout << values[i] << "	";
	}
	cout << "\nCount is: " << CountPositiveValues(values, count) << endl;
	delete[] values;*/



	double* array = new double[9]
	{ 1.12, 4.68, 25.2, -99.42, 8.41, 22.7, -6.38, 1.4, -12.19 };
	for (int i = 0; i < 9; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl << GetIndexOfMax(array, 9);
	delete[] array;


	cout << endl;
	system("PAUSE");

}


/*
1) ��� ���������� ����� �������� � Visual Studio? ��� ������� ����� �������� � ��������?
	� ��� ��������� ����� �������� (������� ������) ���������� �������� ����� ����� �� ��������� ������� ����
	� ��� ����� ���� �������� ������ ������� �� ������������� ����� �������� � ������� ����� Conditions.
		� ����������� ���� ���� ��������� ������� ������������ ����� ��������.

2) ��� ���������� ������������ ������ �������� (Debug) � ������� (Release)?
	� ������������ �Debug� ������������� ��� ������� ����� ���������.
		��� ������������ ��������� ��� ��������� �� �����������, �������� ���������� �� �������,
			��� ������ ���� ��������� ������ � ���������, �� �������� ���������� �������.
   � ������������ �Release� ������������ �� ����� ������ ��������� ��� � ����������� �������.
		��������� �������������� �� ������� � ������������������ � �� �������� �������������� ���������� �� �������.

3) ��� ����� ������? ��� ����������� �������� ������� � ����������� ������?
	� ������ � ����� ���������� ����������� (���������), ������������� � ������ ���� �� ������,
		������ � ������� �������������� �� �������

4) ��� �������� ������ � ��++? ��� ������������������� ������?
	� ��� ���������� ������� � ����� �� ������������ ��������� ���������:
		��� ���[�����������]={�������������};
	� � �������� ������� ����� ������� ������ ��������.

5) ��� �������� ������� � ��++?
	� ������ ������� � ����� �� ������ ���� ����������, �� ���� ������ ���� �������:
		��� ������������� ��������; ��� �������; ���������� � ���������� ����������; ���� �������.

6) ��� ���������� �������� ���������� � ������� �� �������� � �� ������?
	� ��� �������� ���������� � �������, �������� �������� ���������� ���������� �� ���������� ���������� �������. ��� ��� ���������� �����
		������ ������, �� ��������� �������� ���������� ������ ������� ����� �� ������ �� ��������� �������� ���������� ��� �������.
	� ��� �������� ������ � �������, ���������� ���������� ����� ��� �� �����, ��� � �������� ����������.
		�������������, ��������� �������� ���������� ������ ������� �������� � ��������� �������� �������� ����������.

7) ��� ���������� �������� ���������� � ������� �� ��������� � �� ������?
	� ��� �������� ���������� �� ���������, �������� ������ �� ��������� ��������� ���������� � ��������� �������.
		����� �������, ��� ��������� ������ ����� ����� � ��� �� ����������. �������������, ���� ������ ������� � ������� �������������
			�������� �������� ����� ���������, �� �������� �������� ���������� ����� �������� ����� ���������� �������.
	� � ������� �� ����������� ��� ����� ��� ����������, � � ���������� ����� ��� ��������� ��������/��������������. ��������� ����� �������� ��, ��� ������:
		������, ������, ����� ���������� � ������. � ����� ������ ����� ���� � ��� ��� �� �������������� ��� ������������ ����������.
	�  ����������� ��������� ������, ��������� � ���������, �������� �������� ���������� � ������� �� ��������� �� �������� �� ������,
		��� �������� ����� � ������ ����������.

8) ��� ������������ �� ���� ����� � ����������� ������? ����� �� ������ ������ ���������� ��� 32-������ � 64-������ ����������?
	� ������ ������ ������������ ����� (���������� �����, �����), �� �������� � ��� ����� ���������� ������� ����������.
	�  ��, ����� �����������. ��������, 0x12345678 - 32-������,0x1111222233334444 - 64 ������.
		� 32-��������� ������������ �������� ��� ������ � �������� ����� ������ ������������ 32-��������� (4-�������) ���� ������.
			� 64-��������� ������������ �������� ��� ������ � �������� ����� ������ ������������ 64-��������� (8-�������) ���� ������.

9) ���������� �� ������� ������ ����������, ����� ���������� ����� ������ ����� ���� ����������������, � ����� � ������ ���������� ����������� ������
����� ���������� �� ���������?
	�

10) ��� ��������� ���������� ������ � �������?
	� ����������� �������� ����� ��� ���_�������("��� ������" ���_�������[], int �����_�������)

11) ����� �� �������� � ������� ��������� �� ������?
	� �����, �� ��� ������������ ������������� �������� ���������.

12) ��� ����� ���� (������������ ������)?
	� ���� � ��� ��������� ������, ����� ������������� � ���, ������� ��������� ������������ ��������� ������ � �� �������� �� �������� �����:
			��� ������ ����� ��� ����� ����������. ������ ��� ������������ ���������� ����������.
				�� ���������� ���������� ��� ���������� ������� ������ �������������.

13) ��� ����� ������� ���� � ������� ������?
	� ������� ���� (Code Segment ��� CS) � �������� ��� ������� � ����������, ������� ������ ���� ���������.
		16-������ ������� �������� ���� ��� ������� CS ������ ��������� ����� �������� ����.
	� ������� ������ (Data Segment ��� DS) � �������� ������, ��������� � ������� �������.
		16-������ ������� �������� ������ ��� ������� DS ������ ��������� ����� �������� ������.

14) ����� ������ ����� ���������� ��� ������ � ������������ �������?
	� ������� ��������������� �������������������� ����������.
	� "������" ������.
	� ������� ���������� ������������ ������, �� ���������� �����.
	� ������� ���������� �������������� ������.

*/