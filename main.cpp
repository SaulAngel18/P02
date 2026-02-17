#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Amarillo brillante
    SetConsoleTextAttribute(hConsole, 14);
    cout << "=============================================" << endl;

    // Magenta
    SetConsoleTextAttribute(hConsole, 13);
    cout << "  QUE VIVA LA VIDA " << endl;

    // Verde brillante
    SetConsoleTextAttribute(hConsole, 10);
    cout << "   EN EL CARNAVAL DE SAYULA!!! " << endl;

    // Azul
    SetConsoleTextAttribute(hConsole, 11);
    cout << "   Musica, color y tradicion " << endl;

    // Rojo brillante
    SetConsoleTextAttribute(hConsole, 12);
    cout << "=============================================" << endl;

    // Regresar a color blanco normal
    SetConsoleTextAttribute(hConsole, 7);

    return 0;
}
