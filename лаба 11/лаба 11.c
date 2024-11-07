//11 лаба
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define N 10
#define SIZE 100
float funk(float x) {
	return pow(x, 2) - cos(x + 1) * cos(x + 1);
}

int main()
{
	//1
	setlocale(LC_CTYPE, "RUS");
	float A[N];
	float sum = 0.0;
	float B[N];
	float temp;

	// Ввод значений массива A
	for (int i = 0; i < N; i++) {
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
		sum += A[i]; // Суммируем значения сразу после ввода
	}

	// Вычисление нового массива B
	for (int i = 0; i < N; i++) {
		B[i] = A[i] / 10;
	}

	// Вывод таблицы значений
	printf("| индекс | исходное значение | новое значение |\n");
	for (int i = 0; i < N; i++) {
		printf("|%1d     |%.1f               |%.1f            |\n", i + 1, A[i], B[i]);
	}

	// Вывод среднего арифметического
	printf("среднее арифметическое: %.1f\n", sum / N);
	//2
	float array[SIZE];
	float sum_pos = 0.0;
	float sum_neg = 0.0;
	int count_poz = 0;
	int count_neg = 0;

	for (int i = 0; i > SIZE; i++) {

	}
	return 0; // Добавлено возвращаемое значение
}
