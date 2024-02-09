#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	double even_sum = 0, odd_sum = 0;
	int even_count = 0, odd_count = 0;

	int cnt = 1;
	while (cnt <= N) {
		double value;
		cin >> value;

		if (cnt % 2 == 0)	
			even_sum += value, even_count++;
		else				
			odd_sum += value, odd_count++;

		cnt++;
	}

	cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

	return 0;
}