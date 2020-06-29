#include <iostream>
#include <string>
using namespace std;

int helloWorld() {
    cout << "Hello world";
    return 0;
}

int average () {
    int number [100], arrayNumber;
    int sum = 0;
    int average = 0;

    cout<<"Digite el numero de elementos que va a tener su arreglo: ";
    cin>>arrayNumber;

    for(int i=0;i<arrayNumber;i++){
        cout<< "Digite un numero: ";
        cin>>number[i]; //se guarda los elementos que se digiten
    }


    //Vamos a mostrar lo elementos guardados
    cout<<"Se mostrara la posicion donde se gravo cada numero: "<<endl;

    for(int i=0;i<arrayNumber;i++){
        cout<<i<<" -> " <<number[i]<<endl;
    }


    //Suma de los numeros digitados

    for(int i=0;i<arrayNumber;i++){
        sum = sum + number[i];
    }

    cout<<"La suma de los numero es: "<<sum<<endl;

    //Promedio de los numeros digitados

    for(int i=0;i<arrayNumber;i++){
    average = sum / arrayNumber;

    }

    cout<<"El promedio de los numeros es: "<<average<<endl;

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
    int opcion;
    while(opcion) {
    //  menu principal
    string program[5] = {"Hola mundo", "Peso en la luna", "Promedio", "Programa de jorge",  "Salir"};
    int numberProgram;

    cout << "Eliga el programa que quiere ejecutar \n"<< endl;
    for(int i = 0; i< 5; i++){
        cout << program[i] << " -> " << i+1 <<"\n" << endl;
    }

    cout << "Digite el numero del programa ";
    cin >> numberProgram;
    cout << "\n";

    switch(numberProgram){
        case 1 : helloWorld();
        break;
        case 2 : moonWeight();
        break;
        case 3:  average();
        break;
        case 4:  cout << "Programa de jorge";
        break;
        default : exit(0);
    }

    cout << "\n";
    }
// fin del menu principal

    return 0;
}
