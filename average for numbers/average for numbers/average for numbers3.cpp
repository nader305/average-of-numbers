#include <iostream>
using namespace std;
int main() {
	int count;
	cout << "Enter cout of number:\n";
	cin >> count;
	cout << "================\n";
 float num, sum = 0, average = 0;
	for (int i = 0; i < count; i++) {
		cout << "Enter number " << i + 1<<" : " << endl;
		cin >> num;
		sum += num;
	}
    average = sum / count;
	cout << "===============================\n";
	cout << "The average of " << count << " numbers is : " << average<<endl;
	return 0;
}
