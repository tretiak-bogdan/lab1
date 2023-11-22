#include <iostream>
using namespace std;

int main() {
	cout << "Task1" << endl;
	int A = 0, B = 0, C = 0;//ініціазація змінних
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;
	//зміна значень
	A = A + B + C;
	B = A - B - C;
	C = A - B - C;
	A = A - B - C;
	cout << "After swap\n" << "A:" << A << "\nB:" << B << "\nC:" << C << endl;//вивід на екран результату
	cout << "Task2" << endl;
	int X,a,Y,b;//ініціазація змінних  типу з плаваючою комою
	cout << "X:";
	cin >> X;
	cout << "A:";
	cin >> a;
	cout << "Y:";
	cin >> Y;
	cout << "B:";
	cin >> b;
	cout << "Cost of candy:" << X / a << endl;
	cout << "Cost of cookie:" << Y/b<< endl;
	cout << "Candy is "<< (X/a)/(Y/b)<<" times more expensive than cookies" << endl;
	system("pause");
	return 0;
}
