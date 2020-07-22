#include <iostream>
#include <string>
// #include <stdlib.h>
#include <cmath>
// #include <conio.h>

using namespace std;

int option;
int length;
int array[100];
int position;

/* programas guias */
void ingresar();
void show();
void modificar();
void promedio();

/* Poner mas bonitos */
int menuMain();
int salary();
int quadratic();
int average();
void hour();
void coordinates();

/* funcion principal */
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

/* menu guia */
void menu()
{
  system("clear");
  string options[] = {"Ingresar", "Mostrar", "Modificar", "Promedio", "Volver al menu principal"};
  int size = sizeof(options) / sizeof(*options);
  for (int i = 0; i < size; i++)
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
  case 4:
    promedio();
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
  // system("cls"); if it is windows
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

void promedio()
{
  double promedio = 0;
  for (int i = 0; i < length; i++)
  {
    // cout << array[i] << "\n";
    promedio = promedio + array[i];
  }
  cout << "El promedio es: " << promedio / length << "\n";
  menu();
}

int menuMain()
{
  string programs[] = {"Arreglos", "Salario", "Cuadrática", "Promedio", "La hora", "Coordenadas", "Salir"};
  int option;
  int size = sizeof(programs) / sizeof(*programs);
  // cout << size << endl;
  for (int i = 0; i < size; i++)
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
  case 2:
    salary();
    break;
  case 3:
    quadratic();
  default:
    break;
  case 4:
    average();
    break;
  case 5:
    hour();
    break;
  case 6:
    coordinates();
    break;
    /* case 7:
    exit(1);
    break; */
  }
  // system("cls"); if it is windows
  system("clear");
  return 0;
}

int salary()
{
  string apno;
  float hrtr, tahr, subt, impuesto, tota;
  cout << "Calculos de pagos " << endl;
  cout << "Nombres: ";
  cin >> apno;
  cout << endl
       << endl
       << "Horas Trabajadas: ";
  cin >> hrtr;
  if (hrtr <= 0)
    cout << "No trabajo nada ese pinche vago echalo" << endl;
  else
  {
    cout << "Tarifa por hora: ";
    cin >> tahr;
    subt = hrtr * tahr;

    impuesto = subt * 0.14;
    tota = subt - impuesto;

    cout << "El sub total es: " << subt << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "El total a pagar es: " << tota << endl;
    //  << endl;
  }
  menuMain();
  return 0;
}

int quadratic()
{
  int a = 0;
  int b = 0;
  int c = 0;

  std::cout << "FORMA GENERAL DE LA ECUACION CUADRATICA : ax^2+-bx+-c = 0" << std::endl
            << std::endl;

  std::cout << "Introduzca la variable a:" << std::endl;
  std::cin >> a;
  std::cout << "Introduzca la variable b:" << std::endl;
  std::cin >> b;
  std::cout << "Introduzca la variable c:" << std::endl;
  std::cin >> c;

  int interiorRaiz = pow(b, 2) - 4 * (a * c);

  int primeraSolucion = 0;
  int segundaSolucion = 0;

  if (interiorRaiz < 0)
  {
    std::cout << "Esta ecuacion no tiene solucion en los numeros reales.";
  }
  else
  {
    primeraSolucion = (-b + sqrt(interiorRaiz)) / (2 * a);
    segundaSolucion = (-b - sqrt(interiorRaiz)) / (2 * a);
    if (primeraSolucion == segundaSolucion)
    {
      std::cout << "La unica solucion es:" << primeraSolucion;
    }
    else
    {
      std::cout << "La primera solucion es: " << primeraSolucion << std::endl;
      std::cout << "La segunda solucion es: " << segundaSolucion << std::endl;
      std::cout << std::endl;
    }
  }
  std::cout << "Presione intro para terminar el programa ...";
  std::cin.ignore();
  std::cin.get();
  menuMain();
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
  menuMain();
  return 0;
}

void hour()
{
  int hora;

  cout << "digita la hora para visualizar el saludo :\n";
  cin >> hora;
  if (hora == 0)
  {
    cout << "buenos dias";
  }
  else
  {

    if (hora < 12)
    {
      cout << "buenos dias";
    }
    else if (hora <= 18)
    {
      cout << "buenas tardes";
    }
    else
    {
      cout << "buenas noches";
    }
  }
  menuMain();
}

void coordinates()
{

  float x, y;

  cout << "por favor digite coordenada en x";
  cin >> y;
  cout << "por favor digite coordenada en y";
  cin >> x;
  if ((x > 0) && (y > 0))
    cout << "punto en el primer cuadrante";

  else if ((x > 0) && (y < 0))
    cout << "punto en el segundo cuadrante";

  else if ((x < 0) && (y < 0))
    cout << "punto en el tercer cuadrante";

  else if ((x < 0) && (y > 0))
    cout << "punto en el cuarto cuadrante";

  else
    cout << "punto en el origen";
}
