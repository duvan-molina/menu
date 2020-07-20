#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int higher()
{
  int number[100], arrayNumber, higherNum = 0;
  cout << "Cuantos numeros quieres evaluar: ";
  cin >> arrayNumber;
  cout << "\n";
  for (int i = 0; i < arrayNumber; i++)
  {
    cout << "digite los numeros: ";
    cin >> number[i + 1];
    cout << "\n";
    if (number[i + 1] > higherNum)
    {
      higherNum = number[i + 1];
    }
  }
  cout << "\n";
  cout << "El numero mayor es: " << higherNum;
  system("clear");
  /* system("cls") if it is windows */
  return 0;
}

int average()
{
  int number[100], arrayNumber;
  int sum = 0;
  int average = 0;

  cout << "Digite el numero de elementos que va a tener su arreglo: ";
  cin >> arrayNumber;

  for (int i = 0; i < arrayNumber; i++)
  {
    cout << "Digite un numero: ";
    cin >> number[i]; //se guarda los elementos que se digiten
  }

  //Vamos a mostrar lo elementos guardados
  cout << "Se mostrara la posicion donde se grabo cada numero: " << endl;

  for (int i = 0; i < arrayNumber; i++)
  {
    cout << i << " -> " << number[i] << endl;
  }
  //Suma de los numeros digitados

  for (int i = 0; i < arrayNumber; i++)
  {
    sum = sum + number[i];
  }

  cout << "La suma de los numero es: " << sum << endl;

  //Promedio de los numeros digitados

  for (int i = 0; i < arrayNumber; i++)
  {
    average = sum / arrayNumber;
  }

  cout << "El promedio de los numeros es: " << average << endl;
  system("clear");
  /* system("cls") if it is windows */
  return 0;
}

int moonWeight()
{
  int weight;
  float gravity = 9.8;
  float earthForce = 1.62;
  cout << "Digita el numero de tu peso en kg ";
  cin >> weight;
  cout << endl;
  cout << "Tu peso en la luna es de: " << weight / gravity * earthForce << " Kg" << endl;
  system("clear");
  /* system("cls") if it is windows */
  return 0;
}

int main()
{
  int option;
  while (option)
  {
    //  menu principal
    string program[4] = {"Numero mayor", "Peso en la luna", "Promedio", "Desea salir ?"};
    int numberProgram;
    cout << "\n";
    cout << "listas de programas \n";
    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
      cout << program[i] << " -> " << i + 1 << "\n";
      cout << "\n";
    }

    cout << "Que programa deseas ejecutar? ";
    cin >> numberProgram;
    cout << "\n";

    switch (numberProgram)
    {
    case 1:
      higher();
      break;
    case 2:
      moonWeight();
      break;
    case 3:
      average();
      break;
    default:
      exit(0);
    }
    cout << "\n";
  }
  system("pause");
  return 0;
}
