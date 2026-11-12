/*
* student high low and average
* korbin landrum
*/

#include<iostream>
using namespace std;

double highScore(double scores[], int students);
double lowScore(double scores[], int students);
double averageScore(double scores[], int students);
const int MAX_STUDENTS = 20;

int main() {
	int students;
	double scores[MAX_STUDENTS];

	cout << "Number of students: ";
	cin >> students;

	for (int i = 0; i < students; i++) {
		cout << "Enter score #" << i + 1 << ": ";
		cin >> scores[i];
	}

	cout << "High = " << highScore(scores, students) << " Low = " << lowScore(scores, students) << " Average = " << averageScore(scores, students);
}

double highScore(double scores[], int students) {
	double high = 0;

	for (int i = 0; i < students; i++) {
		if (scores[i] > high) {
			high = scores[i];
		}
	}

	return high;
}

double lowScore(double scores[], int students) {
	double low = 100000;

	for (int i = 0; i < students; i++) {
		if (scores[i] < low) {
			low = scores[i];
		}
	}

	return low;
}

double averageScore(double scores[], int students) {
	double total = 0;

	for (int i = 0; i < students; i++) {
		total =+ scores[i];
	}

	return total / students;
}


