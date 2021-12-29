#define _CRT_SECURE_NO_WARNINGS // �ڷ��Է� ��뱸��
#include <iostream> // c++ ����°�ü ����� ���� �������
using namespace std; // std�� ��ü���� �̸��������� ��뱸��

// �� Ŭ������ private �������� �ڵ尡 �־���

class matrix {
	double element[2][2];
public:
	void set_value(int index_x, int index_y, double value); // 2*2����� �Է�

	matrix& operator+(matrix& m12); // �� ����� ���� ����
	matrix& operator-(matrix& m12); // �� ����� ���� ����
	matrix& operator*(matrix& m12); // �� ����� ���� ���� 

	void show_data(); // �� ����� ���� ���
};

class matrixCalc : public matrix { //matrix class�� ��ӹ��� matrixCalc class
public:
	int set_option() {
		int optionVar;
		cout << "Choose the matrix operation: 0: Addition, 1 : Subtraction, 2 : Multiplication" << endl;
		cin >> optionVar;
		return optionVar;
	}
	matrix& Calc(int t, matrix& m1, matrix& m2); // ��� ������ �����Ű�� �Լ�
};