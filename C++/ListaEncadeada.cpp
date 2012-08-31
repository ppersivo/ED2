#include <iostream>

//void addNodo(nodo &p, int valor);

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

int main(){
    //criar lista
    nodo *lista = new nodo(0);
    //criar nó
    y=200;

    while(y>=0){
        for(int i=0; i<10000; i++){
            addNodo(&lista,0);
        }
        y--;
    }
    //posicionar nó na cabeça da lista
    return 0;
}
/*
void addNodo(nodo &p, int valor){

}
*/
