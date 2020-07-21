#include <iostream>

using namespace std;

int option;
int length;
int array[100];
int position;
void ingresar();
void show();
void modificar();
int menuMain();

void menu()
{
  system("clear");
  string options[4] = {"Ingresar", "Mostrar", "Modificar", "Volver al menu principal"};
  for (int i = 0; i < 4; i++)
  {
    cout << i + 1 << "." << options[i] << "\n";
  }
  cout << "Ingresa una opción: ";
  cin >> option;
  switch (option)
  {
  case 1:
    ingresar();
    break;
  case 2:
    show();
    break;
  case 3:
    modificar();
    break;
  default:
    menuMain();
    break;
  }
}

void ingresar()
{
  cout << "De que longitud quieres to arreglo: ";
  cin >> length;
  for (int i = 0; i < length; i++)
  {
    cout << "ingresa el valor: ";
    cin >> array[i];
  }
  menu();
}

void show()
{
  for (int i = 0; i < length; i++)
  {
    cout << "Posición [" << i << "]"
         << " = " << array[i] << "\n";
  }
  // getch();
  menu();
}

void modificar()
{
  system("clear");
  cout << "Que posicion quieres modificar ";
  cin >> position;
  if (position < length)
  {
    cout << "Nuevo valor en la posición[" << position << "] = ";
    cin >> array[position];
    menu();
  }
  else
  {
    cout << "Ingresa una posición validad";
    menu();
  }
}

int menuMain()
{
  string programs[1] = {"Arreglos"};
  int option;

  for (int i = 0; i < 1; i++)
  {
    cout << i + 1 << "." << programs[i] << "\n";
  }

  cout << "Cual programa desea ejecutar ? ";
  cin >> option;

  switch (option)
  {
  case 1:
    menu();
    break;
  default:
    break;
  }

  return 0;
}

int main()
{
  menuMain();
  /* int option;
  while (option)
  {
    int array[100], numberArray;
    int option = 0, length;
    string menu[3] = {"Insertar", "show", "Promedio"};
    for (int i = 0; i < 3; i++)
    {
      cout << i + 1 << "." << menu[i] << endl;
    }
    cout << "Ingresa la opción: ";
    cin >> option;

    switch (option)
    {
    case 1:
      cout << "Opcion 1";
      break;
    case 2:
      cout << "Opcion 2";
    default:
      cout << "Opcion 3";
      break;
    }
    cout << "\n";
  } */
  return 0;
}