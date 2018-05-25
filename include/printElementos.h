/**
 * @file    printElementos.h
 * @brief   Implementação da função print_elementos
 * @author  Leonardo dos Santos Matos (matos_leo95@live.com)
 * @since   25/05/2018
 * @date    25/05/2018
 * @sa		https://github.com/matosleo/labs5-prog2
 */

#ifndef PRINT_ELEMENTOS_H
#define PRINT_ELEMENTOS_H

#include <iostream>
#include <iterator>

using namespace std;


/**
 * @brief Função que exibe elementos de uma estrutura com etiqueta e separadores entre cada elemento
 * @param collection coleções com elementos
 * @param label String para ser printado no inicio da exibição. Valor default é ""
 * @param separator Char para ser exibido entre os elementos. Valor default é " "
 */
template<typename TContainer>
void print_elementos(const TContainer& collection, const char* label="",
const char separator=' ')
{
    auto lastElement = prev(collection.end());
    
    cout << label;
    
    for(auto i = collection.begin(); i != collection.end(); i++)
    {
        i == lastElement? cout << *i :  cout << *i << separator;
    }
    
    cout << endl;
}

#endif