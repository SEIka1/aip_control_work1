#include "matrixAction.h"
 
int main()
{
	int n;
	std::cout << "Enter the size of matrix = ";
	std::cin >> n;
	int** p;
	try {
		mem_new(p, n);
		add_array(p, n);
		std::cout << "Matrix:" << '\n';
		out_array(p, n);
		std::cout << "TMatrix:" << '\n';
		matrix_transpanation_print(p, n);
		change_matrix_by_one(p, n);
		mem_del(p, n);
	}
	catch (std::runtime_error& e) 
	{
		memdelete(p, n);
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
