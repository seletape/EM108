#include <iostream>

using namespace std;

int length;
//int width;
//int height;

void input();
//void volume;
//void surface_area; 

int main() {
	cout << "Greetings, if you wouldn't mind filling out the following data. Thanks\n";
	input();
	cout << "Thanks for filling out the data\n";
	//void volume;
	//void surface_area;

	return 0;
}

void input() {
	{
		cout << "Please enter length: " << length << "\n";
		cin >> length;

		if (length > 0) {
			break;
		}
	}

}