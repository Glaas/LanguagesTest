#include <iostream>
#include <chrono>

/*
void ignore() {
	const int twoBil = 2000000000;

	int x = 0;
	int y = 0;
	int z = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	auto beginW = std::chrono::steady_clock::now();
	while (x < twoBil) {
		x++;
		while (y < twoBil) {
			y++;
			while (z < twoBil)
			{
				z++;
				while (q < twoBil) {
					q++;
					while (r < twoBil) {
						r++;
						while (s < twoBil) {
							s++;
						}
					}
				}

			}
		}
	}
	auto endW = std::chrono::steady_clock::now();
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(endW - beginW).count() << "[nanoseconds]" << std::endl;
	beginW = std::chrono::steady_clock::now();
	endW = std::chrono::steady_clock::now();
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(endW - beginW).count() << "[nanoseconds]" << std::endl;
	auto beginF = std::chrono::steady_clock::now();

	for (int i = 0; i < twoBil; i++)
	{
		for (int j = 0; j < twoBil; j++)
		{
			for (int k = 0; k < twoBil; k++)
			{
				for (int g = 0; i < twoBil; i++)
				{

				}
			}
		}
	}
	auto endF = std::chrono::steady_clock::now();
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(endF - beginF).count() << "[nanoseconds]" << std::endl;
}
*/
int main()
{
	const int twoBil = 2000000000;

	int numb[100000000];
	int numb2[100000000];
	int numb3[100000000];
	auto begin = std::chrono::steady_clock::now();

	for (int x : numb)
	{
		for (int y : numb2)
		{
			for (int z : numb3)
			{
				while (x < twoBil)
				{
					x++;
				}
			}
			
		}
		
	}
	auto end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[nanoseconds]" << std::endl;

}


