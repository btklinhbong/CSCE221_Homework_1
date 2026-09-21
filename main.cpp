#include <iostream>
#include <vector>
#include "quest1.h"

int main() {
    std::vector<int> v {1,3,4,12};

	std::cout << std::boolalpha
			  << "Does any pair have a product divisible by 12? "
			  << divi12_On(v) << std::endl;
	return 0;
}


