#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main (){
    
string nome;

double nota_1{0},nota_2{0},nota_3{0},media_ponderada;


getline(cin,nome);

cin >> nota_1>>nota_2>>nota_3;

nota_1=3*nota_1;
nota_2=4*nota_2;
nota_3=5*nota_3;

media_ponderada=(nota_1+nota_2+nota_3)/12;

cout<<"O aluno"<<nome<<"obteve media "<<fixed<< setprecision(2)<<media_ponderada<<endl;

return 0 ;

}