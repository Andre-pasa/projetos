#include <iostream>
#include <cstring>
#include "Nova.h"

using namespace std;

int main()
{
    Nova n1(" ", 1);

    cout <<" Inicio do Programa " << endl;
    cout <<" Digite o nome do Curso: ";
    getline(cin,nome);
    n1.setnome(nome);
    cout <<endl;
    cout <<" Codigo   : ";
    getline(cin,codigo);
    n1.setcod(codigo);
    cout << endl;

    cout <<"Curso: " << n1.getnome() << endl;
    cout <<"Codigo: " << n1.getcod() << endl;

    n1.mostrar();



    return 0;
}
