#include <iostream>

void matrix_transpanation_print(int** p, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			std::cout << p[j][i] << ' ';
		std::cout << '\n';
	}
}
void mem_new(int**& p, int n) {
	p = new int* [n] {nullptr};
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}

}
void mem_del(int** p, int  n) { 
	 // основная функция для удаления массива,                                     //
	//  если до нее дело не дойдёт в бой вступит быстрая лямбда, убивающая массив //
	for (int i = 0; i < n; i++) {
		delete[] p[i];
	}
	delete[] p;
} 
void add_array(int** p, int n) {
	// srand((unsigned)time(NULL)); (убрать все "//" и убрать "std::cin...", для рандомного заполнения матрицы всякой фигнёй.) //
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> p[i][j];
			// p[i][j] = 1 + rand() % 9; //
		}
	}
}
void out_array(int** p, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << p[i][j] << " ";
		}
		std::cout << "\n";
	}

}

auto memdelete{ [](int** p, int n) {for (int i = 0; i < n; i++) { delete[] p[i]; } delete[] p; std::cout << "deleted"; } }; // лямбда убивающая динамический массив //

void change_matrix_by_one(int** p, int n)
{
	int x_term = 0;
	for (; x_term + 2 < n; x_term++) {} // считаем сколько прибавлять к количеству слоёв, что бы не делать лишних шагов //
	int value = 1;
	int i_index = 0;
	int j_index = 0;
	std::cout << "\nEnter i and j indexes:\n";
	std::cin >> i_index >> j_index;

	p[i_index][j_index] = value;

		while (value <= ((n + n)/n) + x_term) {
			std::cout << "\nchanging number: " << value << '\n';
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
						if (i == i_index && j == j_index)
						{
							std::cout << p[i_index][j_index] << ' ';
						}
						else if ((value > 1) && (p[i][j] < value) && (value - 1 > fabs(i_index - i) && value - 1 > fabs(j_index - j))) {
							std::cout << p[i][j] << ' ';
						}
						else
						{
							p[i][j] = value;
							std::cout << p[i][j] << ' ';
						}
				}
				std::cout << '\n';
				}
			value++;
		}
}
