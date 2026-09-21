#include <iostream>
#include <vector>
#include "quest1.h"
#include "quest2.h"

int main() {
	std::vector<int> v {2, 5, 8, 11, 14, 17, 20, 23,
	                   26, 29, 32, 35, 38, 41, 44, 47};

	std::cout << std::boolalpha
			  << "Does any pair have a product divisible by 12? " << std::endl
			  << divi12_On2(v) << std::endl
			  << divi12_On(v) <<std::endl
			  << std::endl;

	bool allCorrect = true;
	for (int expectedIndex = 0; expectedIndex < static_cast<int>(v.size()); ++expectedIndex)
	{
		int result = Binary_Search<int>(v, v[expectedIndex]);
		bool correct = result == expectedIndex;
		std::cout << "Searching for " << v[expectedIndex]
				  << ": returned " << result
				  << ", expected " << expectedIndex
				  << " -> " << (correct ? "Correct" : "Incorrect") 
				  << " -> " << num_comp << std::endl;
		allCorrect = allCorrect && correct;
	}

	for (int value : {-1, 6, 50})
	{
		int result = Binary_Search<int>(v, value);
		bool correct = result == -1;
		std::cout << "Searching for " << value
				  << ": returned " << result
				  << ", expected -1"
				  << " -> " << (correct ? "Correct" : "Incorrect") << std::endl;
		allCorrect = allCorrect && correct;
	}

	std::cout << "\nOverall result: "
			  << (allCorrect ? "Binary_Search passed" : "Binary_Search failed")
			  << std::endl;
	
	return 0;
}


