#include <iostream>
using namespace std;

int A,B;

int swap (int &ref_A, int &ref_B){
    int temp=ref_A;
    ref_A=ref_B;
    ref_B=temp;
return 0;
}

int main(){
cin >> A >> B;
cout << "Antes da troca "<< A << " "<< B <<endl;
swap(A,B);
cout << "Apos a troca "<< A <<" "<< B <<endl;
    return 0;
}