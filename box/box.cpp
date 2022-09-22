#include <iostream>
using namespace std;

int main()
{
    int X , Y ;
    

    cout << "ingresa el numero de filas" << endl;
    cin >> X;
    cout << "ingresa el numero de columnas" << endl;
    cin >> Y;

   /*
   si es la primera fila es de 1

   si es la primera fila todos son 1

   si es m,ayor a la primera posicion y menor a la ultima todos seran 0
   
   */
    for (int i = 0; i < X; i++)//Filas
    {
        for (int j = 0; j < Y; j++)//columnas
        {
            if (i == 0||i == X-1)//si es la primera fila es de 1 
            {
                cout << " 1";
            }
            if (i > 0 && i < Y-1)//si es m, ayor a la primera posicion y menor a la ultima todos seran 0
            {
                if (j == 0 || j == Y-1)
                {
                    cout << " 1";
                }
                else
                {
                    cout << " 0";
                }  
            }
        }
        cout << "\n";
    }
}

