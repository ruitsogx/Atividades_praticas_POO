#include <iostream>
using namespace std;
int i {0},Lista_numeros[5],A;


int primo (int (&Lista)[5]){
    for (i=0;i<5;i++){
        if  (Lista[i]<=1) continue;
        if  (Lista[i]<=3) return 1;

        if  (Lista[i] % 2==0 || Lista[i] %3 == 0) return 0;

        for(int j=5; j * j <=Lista[i]; j +=6){
            if  (Lista[i] % j ==0 ||  Lista[i] % (j + 2) == 0){
                break;
            }
             
        }
        return 1;

    }

    return 0;
}

int main ()
{
cout<<" insira 5 numeros para o array"<<endl;

while (i<5) {
    cin >> A;
    Lista_numeros[i]=A;
    i++;  
}

if (primo(Lista_numeros)){
 cout<<"Há numeros primos"<<endl;
}
else
cout<<"Nao ha numeros primos"<<endl;
}

