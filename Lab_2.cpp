#include <iostream>
#include <string>
#include <cctype>
using namespace std;

namespace tkp{
    char ch;
    int num1 = 4;
    double number(double a, double b);
}
double tkp::number(double a, double b){
    double maxValue = 0;
    if(a > b){
        maxValue = a;
    }else{
        maxValue = b;
    }
return maxValue;
}
void sizeOfDataTypes(){
    cout << "size of int: " << sizeof(int);
    cout << "\nsize of long int: " << sizeof(long int);
    cout << "\nsize of shor int: " << sizeof(short int);
    cout << "\nsize of floating point: " << sizeof(float);
    cout << "\nsize of double floating point: " << sizeof(double);
    cout << "\nsize of character: " << sizeof(char);
    cout << "\nsize of wide character: " << sizeof(wchar_t);
}
void nPrint(char ch, int n){
    for(int i = 0; i < n; i++){
        cout << ch << " ";
    }
}
void tesingReferences(int& x){
    x++;
    cout << x;
}

int main(){
    int numbers[4] = {0, 1, 2, 3};
    //cout << numbers;
    cout << *numbers + 10 << '\t' << numbers[1];
    //typedef double db;
    //typedef double* pdouble;
    //db n1, n2;
    //cout << "enter a number: "; cin >> n1;
    //pdouble p1;
    //p1 = &n1;
    //p1 = &n2;
    //cout << &n1 << '\t' << p1 << '\t' << &n2 << '\t' << *p1;
    //using character = char;
    //character letter;
    //cout << "enter a character: "; cin >> letter;
    //char ch = toupper(letter);
    //cout << ch; 
    //string name = "takondwa";
    //cout << name.size();
    //int number;
    //cout << "type in a number: "; cin >> number;
    //tesingReferences(number);
    //cout << '\n' << number << '\t'<< &number; 
    //cout << "with no change \n";
    //cout << "\\t is tab\n";
    //cout << "enter a character "; cin >> tkp::ch;
    //nPrint(tkp::ch, tkp::num1);
    //cout << tkp::num1 << endl;
    //cout << tkp::number(2.3, 4.5) << endl;
    /*sizeOfDataTypes();*/
    return 0;
}


