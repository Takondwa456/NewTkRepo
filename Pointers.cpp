#include <iostream>
using namespace std;

void modify(int** pt){
    *pt = new int(50);
    delete pt;
}

int main(){
    int* a = NULL;
    modify(&a);
    cout << *a << endl;
    delete a;
    return 0;
}