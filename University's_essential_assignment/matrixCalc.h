#define _CRT_SECURE_NO_WARNINGS // 자료입력 허용구문
#include <iostream> // c++ 입출력객체 사용을 위한 헤더파일
using namespace std; // std의 객체앞의 이름공간생략 허용구문

// 각 클래스의 private 영역까지 코드가 주어짐

class matrix {
	double element[2][2];
public:
	void set_value(int index_x, int index_y, double value); // 2*2행렬을 입력

	matrix& operator+(matrix& m12); // 두 행렬의 덧셈 정의
	matrix& operator-(matrix& m12); // 두 행렬의 뺄셈 정의
	matrix& operator*(matrix& m12); // 두 행렬의 곱셈 정의 

	void show_data(); // 두 행렬의 연산 출력
};

class matrixCalc : public matrix { //matrix class를 상속받은 matrixCalc class
public:
	int set_option() {
		int optionVar;
		cout << "Choose the matrix operation: 0: Addition, 1 : Subtraction, 2 : Multiplication" << endl;
		cin >> optionVar;
		return optionVar;
	}
	matrix& Calc(int t, matrix& m1, matrix& m2); // 행렬 연산을 적용시키는 함수
};