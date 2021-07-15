// exercise 13
// page 150
// crivo de Eratóstenes
#include <iostream>
#include <map>
#include <cmath>

std::map<int, bool> sieve_of_eratosthenes_table(int n)
{
	// makes a map of prime numbers until n
	std::map<int, bool> table;
	// init table with 2 to n all set to true
	for (int i = 2; i <= n; ++i) table[i] = true;
	double sqrt_n = sqrtf(static_cast<float>(n));		// not exceeding sqrt(n)
	for (int i = 2; i <= sqrt_n; ++i) {
		if (table[i]) {
			for (int j = 0; i < n; ++j) {
				int i_square = static_cast<int>(pow(i, 2));		// double cannot exceed int
				int nonp_index = i_square + j * i;		// non-prime index
				if (nonp_index > n) break;				// if exceed n numbers break
				table[nonp_index] = false;
			}
		}
	}
	return table;
}

int main()
{
    std::map<int, bool> prime_info_table = sieve_of_eratosthenes_table(100);
    for (auto const& x : prime_info_table){
        std::cout << x.first << " : ";
        if (x.second)
            std::cout << "prime\n";
        else
            std::cout << "composite\n";
    }
}