#include <iostream>
#include <vector>
using namespace std;
int i {0},A;
vector <int> Lista_numeros{};


int primo (vector <int> &Lista){
    for (i=0;i<Lista.size();i++){
        if  (Lista[i]<=1) continue;
        if  (Lista[i]<=3) return 1;

        if  (Lista[i] % 2==0 || Lista[i] %3 == 0) return 0;
        if  (Lista[i]<=1);

        for(int j=5; j * j <=Lista[i]; j +=6){
            if  (Lista[i] % j ==0 ||  Lista[i] % (j + 2) == 0) return 0; 
        }



    }

    return 1;
}

int main ()
{
cout<<" insira os numeros do vector insira -1 para parar"<<endl;


while (true) {
    cin >> A;
    if (A == -1) break;
    Lista_numeros.push_back(A);  
}

Lista_numeros.erase(Lista_numeros.begin());

for (int num: Lista_numeros){
    cout<< num<<" "<<endl;
}

if (primo(Lista_numeros)){
 cout<<"Há numeros primos"<<endl;
}
else
cout<<"Nao ha numeros primos"<<endl;
}

