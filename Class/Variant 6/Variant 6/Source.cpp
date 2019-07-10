#include<iostream>
using namespace std;

//================================================================
float Day(int i) {
	float precipitation;
	cout << "\n\tEnter precipitation day " << i << " :"; cin >> precipitation;
	return precipitation;
}
void Show(float AOneHalf, float BTwoHalf, int Decade) {
	if (AOneHalf > BTwoHalf)
		cout << "\n\tIn the first half falls more precipitation!" << endl;

	else if (AOneHalf < BTwoHalf)
		cout << "\n\tIn the second half falls more precipitation!" << endl;
	else
		cout << "In two halves there was the same amount of precipitation!" << endl;

	cout << "\n\tThe decade of " << Decade << " month fell on the highest rainfall" << endl;

}
int DecadeOne(float * June, const int number) {
	float OneDecade = 0, TwoDecade = 0, ThreeDecade = 0;
	int TopDecade = 0;
	for (int i = 0; i < number; i++) {
		if (i < 11)
			OneDecade = OneDecade+ June[i];
		else if (i > 10 && i < 21)
			TwoDecade = TwoDecade +June[i];
		else
			ThreeDecade = ThreeDecade+ June[i];
	}
	if (TwoDecade > ThreeDecade&&TwoDecade > OneDecade) {
		TopDecade = 2;
	}
	else if (OneDecade > ThreeDecade&&TwoDecade < OneDecade)
		TopDecade = 1;
	else if (ThreeDecade > OneDecade&&TwoDecade < ThreeDecade)
		TopDecade = 3;
	return TopDecade;
}

int main() {
	const int Days = 30;
	float June[Days];
	float OneHalf = 0, TwoHalf = 0;
	for (int i = 0; i < Days; i++) {
		June[i] = Day(i);
		if (i < 16)
			OneHalf = OneHalf + June[i];
		else if (i > 15)
			TwoHalf = TwoHalf + June[i];
 
	}
	
	int Decade = DecadeOne(June, Days);
	Show(OneHalf, TwoHalf, Decade);

	system("pause");
	return 0;
}
//================================================================
//
//int main() {
//	const int people = 18, month = 13;
//	float Arr[month][people], June = 0;
//	for (int i = 0; i < people; i++) {
//		Arr[0][i] = i + 1;
//	}
//	for (int i = 0; i < people; i++) {
//		for (int j = 0; j < month; j++) {
//			Arr[j + 1][i] = i + 7;
//		}
//	}
//	for (int i = 0; i < people; i++) {
//		June += Arr[6][i];	
//	}
//	cout << "\n\tTotal salary for June :" << June << endl;
//
//
//	system("pause");
//	return 0;
//}
