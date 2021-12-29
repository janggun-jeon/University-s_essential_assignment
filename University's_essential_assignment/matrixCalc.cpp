#include "matrixCalc.h" // 클래스의 cpp파일에는 코드가 주어지지 않음

// matrix 멤버함수
void matrix::set_value(int index_x, int index_y, double value) {
	element[index_x][index_y] = value;
}
matrix& matrix::operator+(matrix& m12) {
	matrix m;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			m.element[i][j] = element[i][j] + m12.element[i][j];
		}
	}return m;
}
matrix& matrix::operator-(matrix& m12) {
	matrix m;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			m.element[i][j] = element[i][j] - m12.element[i][j];
		}
	}return m;
}
matrix& matrix::operator*(matrix& m12) {
	matrix m;
	m.element[0][0] = element[0][0] * m12.element[0][0] + element[0][1] * m12.element[1][0];
	m.element[0][1] = element[0][0] * m12.element[0][1] + element[0][1] * m12.element[1][1];
	m.element[1][0] = element[1][0] * m12.element[0][0] + element[1][1] * m12.element[1][0];
	m.element[1][1] = element[1][0] * m12.element[0][1] + element[1][1] * m12.element[1][1];
	return m;
}
void matrix::show_data() {
	cout << "Result is as follows:" << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			cout << element[i][j] << " ";
		}cout << endl;
	}
}

//matrixCalc 멤버함수
matrix& matrixCalc::Calc(int t, matrix& m1, matrix& m2) {
	matrix result;
	if (t == 0) {
		result = m1 + m2;
	}
	else if (t == 1) {
		result = m1 - m2;
	}
	else {
		result = m1 * m2;
	}return result;
}