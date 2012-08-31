#include <iostream>

void add(const_T &x, bool no_fim=true);

int main(){

}

void add(const_T &x, bool no_fim=true){
    nodo *q = new nodo(x);
    if(cnt==0){
        ptraiz=q;
    }else{
        if(no_fim){
            nodo *p=ptraiz;
            while(p->prox!=0) p=p->prox;
            p->prox=q;
        }
    }
    cnt++;
}
