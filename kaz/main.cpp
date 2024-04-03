#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int len1 = 100;	//������ �������
	int arr1[len1];
	

	for (int i = 0; i < len1; i++)
	{
		arr1[i] = rand();
	}
	
	int res1 = arr1[len1 - 1];

	for (int i = 0; i < len1 - 1; i++)
	{
		res1 = std::max(res1, arr1[i]);
	}
	
	std::cout << res1 << "\n";




	const int len2 = 100;	//������ �������
	int arr2[len2];
	int l_bound2, h_bound2, num2, sum2 = 0;

	std::cout << "������� ����� ������ ���������: ";
	std::cin >> l_bound2;
	std::cout << "������� ������� ������ ���������: ";
	std::cin >> h_bound2;
	std::cout << "������� ��������: ";
	std::cin >> num2;

	for (int i = 0; i < len2; i++)
	{
		arr2[i] = l_bound2 + rand() % (h_bound2 - l_bound2 + 1);
		if (arr2[i] < num2)
		{
			sum2 += arr2[i];
		}
	}
	std::cout << sum2 << "\n";




	const int len3 = 12;	//������ �������
	int arr3[len3], l_bound3, h_bound3;
	int res3;

	std::cout << "������� ������� �� 12 �������:\n";
	for (int i = 0; i < len3; i++)
	{
		std::cout << i + 1 << ": ";
		std::cin >> arr3[i];
	}

	std::cout << "������� ������ ������: ";
	std::cin >> l_bound3;
	std::cout << "������� ������� ������: ";
	std::cin >> h_bound3;

	res3 = h_bound3;

	for (int i = l_bound3; i < h_bound3; i++)
	{
		if (arr3[res3] < arr3[i])
		{
			res3 = i;
		}
	}
	std::cout << "����� ������� ������� � " << res3 << " ������\n";

	return 0;
}