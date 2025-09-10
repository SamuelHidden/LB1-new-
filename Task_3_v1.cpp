#include <cmath>
#include <locale>
#include <iostream>
using namespace std; 
int main() {
double start, end, step;
setlocale(LC_ALL, "RU");
cout << "Введите начальное значение x: ";
while (!( cin >> start) or (start <= 0)) {
    cout<< "ошибка ввода , начальное значение СТрого больше либо равно 0";
    cin.clear();
    cin.ignore(100000, '\n');
}
cout << "Введите конечное значение x: ";

while (!(cin >> end) or (end < start)) {
    cout <<"ошибка ввода , конечное значение СТрого больше начального";
    cin.clear();
    cin.ignore(100000, '\n');
}; 
cout << "Введите шаг: ";
while (!(cin >> step) or (step < 0 )){
    cout<<"ошибка ввода , шаг СТрого больше 0";
}; 
for (double x = start; x <= end; x += step) {
double y = std::sin(x); 
cout << x << " | " << y << std::endl; 
}
return 0;
}