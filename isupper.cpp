#include <iostream>
#include <cctype>
#include <string>
using namespace std;



int i;
string A{};

int verifica_maiscula(string A){

for ( i = 0; i < A.length(); i++)
{
    if ( isupper(A[i])){
        return 1;
    }
}
    return 0;
}

int main(){
getline(cin,A);
if (verifica_maiscula(A)){
cout<<"Ha letras maiusculas"<<endl;
}
else
cout <<"Nao há letras maiusculas"<<endl;
    return 0;
}