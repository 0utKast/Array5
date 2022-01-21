#if 0
int array[3][5]; // un array de 3-elementos con un array de 5-elementos

array[2][3] = 7;




int array[3][5]
{
  { 1, 2, 3, 4, 5 }, // fila 0
  { 6, 7, 8, 9, 10 }, // fila 1
  { 11, 12, 13, 14, 15 } // fila 2
};







int array[3][5]
{
  { 1, 2 }, // fila 0 = 1, 2, 0, 0, 0
  { 6, 7, 8 }, //fila 1 = 6, 7, 8, 0, 0
  { 11, 12, 13, 14 } // fila 2 = 11, 12, 13, 14, 0
};





int array[][5]
{
  { 1, 2, 3, 4, 5 },
  { 6, 7, 8, 9, 10 },
  { 11, 12, 13, 14, 15 }
};


int array[][]
{
  { 1, 2, 3, 4 },
  { 5, 6, 7, 8 }
};



int array[3][5]{};




#include <iostream>
int main()
{
    int array[3][5]
    {
      { 1, 2, 3, 4, 5 }, // fila 0
      { 6, 7, 8, 9, 10 }, // fila 1
      { 11, 12, 13, 14, 15 } // fila 2
    };

    int numFilas{ 3 };
    int numCols{ 5 };

    for (int fila{ 0 }; fila < numFilas; ++fila) // se itera a través de las filas en el array
    {
        std::cout << "fila: " << fila << "\n";

        for (int col{ 0 }; col < numCols; ++col) // se itera a través de cada columna en la fila
        {
            std::cout << array[fila][col] << "\n";
        }
        
    }
}





// Programa que imprime elemeentos de un array tridimensional
#include<iostream>

int main()
{
    // inicializamos el array de tres dimensiones
    int array [2][3][2] 
    {
        { {0,1}, {2,3}, {4,5} }, 
        { {6,7}, {8,9}, {10,11} }
    };

    // imprimir el valor de cada elemento
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                std::cout << "Elemento en x[" << i << "][" << j << "][" << k << "] = " << array [i][j][k]
                << std::endl;
            }
        }
    }
    return 0;
}
#endif


#include <iostream>

int main()
{
    constexpr int numFilas{ 10 };
    constexpr int numCols{ 10 };

    // Declaramos un array 10x10
    int producto[numFilas][numCols]{};

    // Calcular una tabla de multiplicación
    for (int fila{ 1 }; fila < numFilas; ++fila)
    {
        for (int col{ 1 }; col < numCols; ++col)
        {
            producto[fila][col] = fila * col;
        }
    }

    // Imprimir la tabla
    for (int fila{ 1 }; fila < numFilas; ++fila)
    {
        for (int col{ 1 }; col < numCols; ++col)
        {
            std::cout << producto[fila][col] << '\t';
        }

        std::cout << '\n';
    }

    return 0;
}
