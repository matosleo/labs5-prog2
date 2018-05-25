/**
 * @file    main.h
 * @brief   Função principal main
 * @author  Leonardo dos Santos Matos (matos_leo95@live.com)
 * @since   25/05/2018
 * @date    25/05/2018
 * @sa		https://github.com/matosleo/labs5-prog2
 */

#include "printElementos.h"
#include <set>

using std::set;

int main() {
    set<int> numeros;
    numeros.insert(3);
    numeros.insert(1);
    numeros.insert(4);
    numeros.insert(1);
    numeros.insert(2);
    numeros.insert(5);

    print_elementos(numeros, "Set: ");
    print_elementos(numeros, "CSV Set: ", ';');
    print_elementos(numeros, "LUL Set: ", '_');
    return 0;
}