#include <iostream>
#include <fstream>
#include <string>;
#define THREEON 1575
#define THREEOFF 3600

using namespace std;

int main(void) {
	ifstream readFile("input.txt");
	string strN;
	int N;
	int result = 0;
	int threecount = 0;

	if (readFile.is_open())
	{
	getline(readFile, strN);
	N = stoi(strN);

	if (N >= 23)
	{
		threecount = 3;
	}
	else if (N >= 13)
	{
		threecount = 2;
	}
	else if (N >= 3)
	{
		threecount = 1;
	}
	else
	{
		threecount = 0;
	}

	result = ((N - threecount + 1) * THREEON) + (threecount * THREEOFF);	// + 1�� 0�� �� ����� ���� �߰���
	cout << "����" << result << endl;
	}
	else
	{
		cout << "���� ���⸦ �����߽��ϴ�." << endl;
	}
	
	readFile.close();

	return 0;
}