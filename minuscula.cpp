#include <iostream>
#include <cctype>
#include <string>
using namespace std;



int i;
string A{};

void verifica_maiscula(string &A){

for ( i = 0; i < A.length(); i++)
{
    if ( isupper(A[i])){
      A[i]=tolower(A[i]);
    }
}

}

int main(){
getline(cin,A);
verifica_maiscula(A);
cout<<A<<endl;
    return 0;
}