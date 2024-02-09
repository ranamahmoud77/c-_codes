#include<iostream>
using namespace std;

int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	if (b < a) { 

		tmp = a;
		a = b;
		b = tmp;
	}
	

	if (c < b) { 

		tmp = b;
		b = c;
		c = tmp;

		

		if (b < a) {	
			tmp = a;
			a = b;
			b = tmp;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";

	return 0;
}
