#include <iostream>
using namespace std;

int A,B;

int swap (int *A, int *B){
    int temp=*A;
    *A=*B;
    *B=temp;
return 0;
}

int main(){
cin >> A >> B;
cout << "Antes da troca "<< A << " "<< B <<endl;
swap(&A, &B);
cout << "Apos a troca "<< A <<" "<< B <<endl;
    return 0;
}