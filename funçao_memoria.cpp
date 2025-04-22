#include<iostream>
using namespace std;


int func_memoria(){
    static int valor_atual{-1};
    valor_atual++;
    return valor_atual;

}

int main(){


cout <<func_memoria()<<endl;
cout << func_memoria()<<endl;
cout << func_memoria()<<endl;
cout << func_memoria()<<endl;


    return 0;
}