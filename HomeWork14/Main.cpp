#include<iostream>
#include<ctime>
#include<cstdlib>

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	
	// ������ 1. �������� ������, ��������� �� 10-�� �����. 
	// ��������� ������ ����� � ������� ������� �������������� ���� ������ ��������� �������.
	std::cout << "������ 1.\n����� ������� �������������� ���� ������ ����� �������: { ";
	int sum = 0, score = 0;	// ������� ���������� ����� ������ ����� � ������� ������ �����.
	const int size = 10;	// ������ ���������� ��������� � �������.
	int array[size] { 0, -52, 45, 7, 13, 6, 8, 98, 21, 10 };	// �������������� ������.
	 
	for (int i = 0; i < size; i++) {	// ������� ���� ��� ������ � ������� ������� � ���������� ���� ������ ����� � �������.
		std::cout << array[i] << ", ";
		if (array[i] % 2 == 0) {	// ���� ������� ������� ������, �� ��������� � ������ 14 � 15. 
			sum += array[i];		// ������������ � ���������� sum �������� ������� ��������.
			score++;				// ������������ ������� ���������� ������ ���������.
		}
	}
	std::cout << "\b\b }\n";
	// ����� ������� �������������� ���� ������ ��������� ������� � ��������� ���� ������ ���������� �� double: 
	std::cout << "������� �������������� ��� ������ ����� = " << sum / (double)score << "\n\n"; 
	
	// ������ 2. �������� ������, ��������� �� 10-�� ��������� ����� � ��������� �� 50 �� 70. 
	// ������������ ������ ����� N, � ��������� ������� ��� �������� �������, ������� ������ 
	// � ���������� �� N � 3 �� N + 3. ��� ��������� ���������� ����� ���������� ������������
	// ������� rand(), srand() � time().
	std::cout << "������ 2.\n������ �� 10-�� ��������� ����� � ��������� �� 50 �� 70: { ";
	int begin = 50, end = 70;	// ������ �������� �������� ��������� � �������.
	const int size1 = 10;	// ������ ���������� ��������� � �������.
	int arr[size1]{};		// ������� ������ �� 10-�� ��������� � �� ������ � �������� ����.
	srand(time(NULL));		// ��������� ������� ��� ��������� "���������" �����.
	for (int i = 0; i < size1; i++) {	// ������� ���� ��� ������������ �������� ��� ������� �������� � �������.
		arr[i] = rand() % (end - begin) + begin; // ������������ ���������� ����� �� ��������� 50-70.
		std::cout << arr[i] << ", ";	// ����� ������� �������� � �������.
	}
	std::cout << "\b\b }\n"; 
	std::cout << "������� ����� �� ��������� 50-70 ��� ������ ����� �� N � 3 �� N + 3 -> ";
	std::cin >> n;
	if (n < 50 || n > 70) // ���� �������� ����� �� ������ � �������� ��������, �� ������� "������ �����", ����� ������� �� ������ 45.
		std::cout << "������ �����!\n\n";
	else {
		std::cout << "����� �����, ������� ������ � ���������� �� " << n - 3 << " �� " << n + 3 << ": ";
		for (int i = 0; i < size1; i++)		// ������� ���� ��� ����������� ��������� � �������.
			if (arr[i] >= n - 3 && arr[i] <= n + 3) // ���� �������� �������� ������ � ��������� ��������, �� ������� ������� �� �������.
				std::cout << arr[i] << ", ";
		std::cout << "\b\b.\n\n";
		}
			
	return 0;
}