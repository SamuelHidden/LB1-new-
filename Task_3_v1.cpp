#include <cmath>
#include <locale>
#include <iostream>
using namespace std; 
int main() {
double start, end, step;
setlocale(LC_ALL, "RU");
cout << "������� ��������� �������� x: ";
while (!( cin >> start) or (start <= 0)) {
    cout<< "������ ����� , ��������� �������� ������ ������ ���� ����� 0";
    cin.clear();
    cin.ignore(100000, '\n');
}
cout << "������� �������� �������� x: ";

while (!(cin >> end) or (end < start)) {
    cout <<"������ ����� , �������� �������� ������ ������ ����������";
    cin.clear();
    cin.ignore(100000, '\n');
}; 
cout << "������� ���: ";
while (!(cin >> step) or (step < 0 )){
    cout<<"������ ����� , ��� ������ ������ 0";
}; 
for (double x = start; x <= end; x += step) {
double y = std::sin(x); 
cout << x << " | " << y << std::endl; 
}
return 0;
}