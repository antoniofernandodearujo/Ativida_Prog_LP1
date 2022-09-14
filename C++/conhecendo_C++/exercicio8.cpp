/*
    8) Leia três números e mostre-os em ordem crescente
*/

#include <iostream>

#define QTD_NUM 3

using namespace std;

int main() {

    int nums[QTD_NUM];

    for (int i = 0; i < QTD_NUM; i++) {
        cin >> nums[i];
    }

    int aux = 0;
    bool troca = true;
    
    while(troca) {
        troca = false;
        for (int i = 0; i < QTD_NUM; i++){
            if (nums[i] > nums[i+1]){

                /*Realiza a troca*/
                aux = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = aux;

                troca = true; 
            }
        }
    }

    for(int i = 0; i < QTD_NUM; i++) {
        cout << nums[i] << " ";
    }
    

    return 0;
}
