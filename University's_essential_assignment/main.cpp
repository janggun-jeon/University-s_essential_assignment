#define _CRT_SECURE_NO_WARNINGS // �ڷ��Է� ��뱸��
#include <iostream> // c++ ����°�ü ����� ���� �������
using namespace std; // std�� ��ü���� �̸��������� ��뱸��
#include "../../University's_essential_assignment/University's_essential_assignment/matrixCalc.h"

// �߰�-�⸻ ���� �ǽ����� : 3�ð� ���� �־��� �ڵ�� �ٲ��� �ʰ� ��Ŀ��� ���α׷� �ϼ��ϱ�

void main() {
	matrixCalc test;
	int optionVar; //optionVar: 0 (Addition), 1 (Subtraction), 2 (Multiplication)
	double x00, x01, x10, x11, y00, y01, y10, y11;
	matrix m1, m2, result;
	cout << "Enter the matrix elements m1[0][0], m1[0][1], m1[1][0], m1[1][1] of matrix m1 with size of 2X2." << endl;
	cin >> x00 >> x01 >> x10 >> x11;
	cout << "Enter the matrix elements m2[0][0], m2[0][1], m2[1][0], m2[1][1] of matrix m2 with size of 2X2" << endl;
	cin >> y00 >> y01 >> y10 >> y11;
	// �����Լ��� �̺κб��� �ڵ尡 �־���

	m1.set_value(0, 0, x00), m1.set_value(0, 1, x01), m1.set_value(1, 0, x10), m1.set_value(1, 1, x11);
	m2.set_value(0, 0, y00), m2.set_value(0, 1, y01), m2.set_value(1, 0, y10), m2.set_value(1, 1, y11);
	int t = test.set_option();
	result = test.Calc(t, m1, m2);
	result.show_data();
}