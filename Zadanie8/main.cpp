#include <iostream>
#include <string>
#include "functions.h"
#include "random"
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	cout << "������������ ������ �8 ����-13-21 ���������� �.�. ������� 23" << endl << endl;
	cout << "�������� ����������:\n1) �������� ��������\n2) ���������\n3) ������� ���������� � ������� ��������� ���������\n0) ��������� ���������\n";

	int choice1;

	do {
		cin >> choice1;

		if (choice1 != 1 && choice1 != 2 && choice1 != 3 && choice1 != 0) cout << "������� �������� ��������, ���������� �����.\n";
	} while (choice1 != 1 && choice1 != 2 && choice1 != 3 && choice1 != 0);

	switch (choice1) {
	case 0:
		return 0;
	}

	system("cls");

	cout << "������� ������ ���������� �������:\n1) � ����������\n2) ���������� �������\n";

	int choice2;
	do {
		cin >> choice2;

		if (choice2 != 1 && choice2 != 2) cout << "������� �������� ��������, ���������� �����.\n";
	} while (choice2 != 1 && choice2 != 2);

	int array_length;
	cout << "������� ����� �������: ";
	cin >> array_length;

	int* arr = (int*)malloc(sizeof(int) * array_length);
	//int* arr = new int[array_length];
	switch (choice2) {
	case 1:
		cout << "������� �������� �������:\n";
		fill_arr(arr, array_length);
		break;
	case 2:
		fill_random(arr, array_length);
		cout << "��������������� ������:\n";
	//print_array(arr, array_length);
		cout << endl;
		break;
	}

	switch (choice1) {
	case 1: {
		long double start_time = clock();
		bubble_sort(arr, array_length);
		long double end_time = clock();
		long double search_time = end_time - start_time;
		cout << "\n\n" << fixed << setprecision(14) << search_time << "\n\n\n\n\n";
		break;
	}
	case 2: {
		long double start_time = clock();
		count_sort(arr, array_length);
		long double end_time = clock();
		long double search_time = end_time - start_time;
		cout << "\n\n" << fixed << setprecision(14) << search_time << "\n\n\n\n\n";
		
		break;
	}
	case 3: {
		long double start_time = clock();
		quick_sort(arr, 0, array_length - 1);
		long double end_time = clock();
		long double search_time = end_time - start_time;
		cout << "\n\n" << fixed << setprecision(14) << search_time << "\n\n\n\n\n";
		break;
	}
	}

	cout << "��������������� ������:\n";
	//print_array(arr, array_length);
	cout << endl;


	main();
}