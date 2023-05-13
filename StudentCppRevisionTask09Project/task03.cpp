#include "tasks.h"

/*	Task 03. Squares of Natural Numbers [Квадраты натуральных чисел]
*
*	По данному целому числу N распечатайте все квадраты натуральных чисел,
*	не превосходящие N, в порядке возрастания. В случае некоректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должна возвращаться строка, которая содержит ответ на задание.
*
*	[ input 1]: 50
*	[output 1]: 1 4 9 16 25 36 49
*
*	[ input 2]: -50
*	[output 2]: 0
*
*	[ input 3]: 0
*	[output 3]: 0
*/

string task03(int number) {
	string result = "1";

	if (number <= 0) {
		result = "0";
	}
	else if (number > 1) {
		for (int i = 2; i * i <= number; i++) {
			result += " " + to_string(i * i);
		}
	}

	return result;
}