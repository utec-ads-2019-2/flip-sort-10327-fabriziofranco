#include <iostream>
using namespace std;



int main() {

    int longitud_de_array;
    while(cin>>longitud_de_array) {
        int array[longitud_de_array];
        int iterador=0,contador=0;
        while(iterador<longitud_de_array){
            cin>>array[iterador];
            iterador++;
        }
        for(size_t i=0;i<longitud_de_array-1;i++){
            for(size_t j=0;j<longitud_de_array-1-i;j++){
                if(array[j]>array[j+1]){
                    swap(array[j],array[j+1]);
                    contador++;}
            }}
        cout<<"Minimum exchange operations : "<< contador<<endl;

    }
    return 0;
}