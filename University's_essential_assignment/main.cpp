#define _CRT_SECURE_NO_WARNINGS // 자료입력 허용구문
#include <iostream> // c++ 입출력객체 사용을 위한 헤더파일
using namespace std; // std의 객체앞의 이름공간생략 허용구문
#include "../../University's_essential_assignment/University's_essential_assignment/matrixCalc.h"

// 중간-기말 통합 실습시험 : 3시간 동안 주어진 코드는 바꾸지 않고 행렬연산 프로그램 완성하기

void main() {
	matrixCalc test;
	int optionVar; //optionVar: 0 (Addition), 1 (Subtraction), 2 (Multiplication)
	double x00, x01, x10, x11, y00, y01, y10, y11;
	matrix m1, m2, result;
	cout << "Enter the matrix elements m1[0][0], m1[0][1], m1[1][0], m1[1][1] of matrix m1 with size of 2X2." << endl;
	cin >> x00 >> x01 >> x10 >> x11;
	cout << "Enter the matrix elements m2[0][0], m2[0][1], m2[1][0], m2[1][1] of matrix m2 with size of 2X2" << endl;
	cin >> y00 >> y01 >> y10 >> y11;
	// 메인함수의 이부분까지 코드가 주어짐

	m1.set_value(0, 0, x00), m1.set_value(0, 1, x01), m1.set_value(1, 0, x10), m1.set_value(1, 1, x11);
	m2.set_value(0, 0, y00), m2.set_value(0, 1, y01), m2.set_value(1, 0, y10), m2.set_value(1, 1, y11);
	int t = test.set_option();
	result = test.Calc(t, m1, m2);
	result.show_data();
}