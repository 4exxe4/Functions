#include "ShiftRight.h"

template <typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}
template <typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		ShiftRight(arr[i], COLS, number_of_shifts);
	}
}