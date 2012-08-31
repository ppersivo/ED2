#include <iostream>

int main(){
    int vetor[1000];
    int y = 200;

    while(y>=0){
        for(int i=0; i<1000;i++){
            vetor[i]=0;
        }
        y--;
    }
    return 0;
}
