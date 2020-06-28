#include <iostream>
#include <string>
using namespace std;

int helloWorld() {
    cout << "Hello world";
    return 0;
}

int moonWeight() {
    int weight;
    float gravity = 9.8;
    float earthForce = 1.62;
    cout << "Digita el numero de tu peso en kg ";
    cin >> weight;
    cout << endl;
    cout <<"Tu peso en la luna es de: " << weight/gravity*earthForce << " Kg";
    return 0;
}

int main(){

//  menu principal
    string program[2] = {"Hola mundo", "Peso en la luna"};
    int numberProgram;
    cout << "Eliga el programa que quiere ejecutar \n"<< endl;
    for(int i = 0; i< 2; i++){
        cout << program[i] << " " << i <<"\n" << endl;
    }

    cout << "Digite el numero del programa ";
    cin >> numberProgram;
    cout << "\n";

    if(numberProgram == 0){
        helloWorld();
    }else if (numberProgram == 1) {
        moonWeight();
    }

    cout << "\n";
// fin del menu principal

    return 0;
}
