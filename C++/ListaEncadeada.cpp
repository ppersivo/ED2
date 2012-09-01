#include <iostream>

using namespace std;

class nodo{
    public:
    nodo(){
        next=0;
    }
    nodo(int i, nodo *in = 0){
        info = i;
        next = in;
    }
    int info;
    nodo *next;
};

nodo* addNodo(nodo *p, int valor);

int main(){
    int y = 200;

    //criar lista
    nodo *lista = new nodo(0);

    while(y>=0){
        for(int i=0; i<10000; i++){
            lista = addNodo(lista,0);
        }
        y--;
    }
/*
    int j=0;

    nodo *temp = lista;
    while(temp->next != 0){
        if((j>10000) && ((j%10000)==0)){
            cout << "No: " << j << " = " << temp->info << endl;
        }
        j++;
        temp = temp->next;
    }
*/
    //posicionar nó na cabeça da lista
    return 0;
}

nodo* addNodo(nodo *p, int valor){
    nodo *novoNodo = new nodo(valor);

    novoNodo->info = valor;
    novoNodo->next = p;

    return novoNodo;
}
