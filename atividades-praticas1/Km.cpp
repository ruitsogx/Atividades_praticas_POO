#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
 int main(){

    int km,litros, aux_litro,aux_km;
do{
cout<<"informe a quantidade de litros abastecido."<<endl;
cin>>aux_litro;
litros+=aux_litro;

cout<<"informe a quantidade de Km andados."<<endl;
cin>>aux_km;
if(km != -1){
km+=aux_km;}

} while (aux_km != -1);
cout<<"Quantidade de litros = "<<litros<< "Quilometros andados = "<<km<<endl;
    return 0;
}

//litros km