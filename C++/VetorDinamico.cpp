#include <iostream>

int main(){
    int *vetor = new int[10000];
    int y =200;

    while(y>=0){
        for(int i = 0; i < 10000; i++){
            vetor[i]=0;
        }
        y--;
    }
}
