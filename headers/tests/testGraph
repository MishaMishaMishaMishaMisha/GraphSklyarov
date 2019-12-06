#include <iostream>
#include <string>
//#include "GraphSklyarov.h"
#include "../headers/TrigPolySklyarov.h"
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    SetConsoleCP(1251);   // відображення в консолі російських літер
    SetConsoleOutputCP(1251);

    // Граф у файлі записується таким чином: 1-ий рядок - кількість ребер,
    // 2-ий - кількість вершин,
    // всі інші рядки - це ребра які записані у вигляді i, j, v згідно умови
    // Наприклад:
    // 4
    // 6
    // 1 2 1
    // 2 3 2
    // 3 1 3
    // 5 6 4

    cout << "Функції для знахождення діметру графа та найвіддаленішої вершини від даної НЕ РЕАЛІЗОВАНІ\n";

    cout << "Тест 1. Граф читається з файлу (файл graph.txt)\n";
    cout << "Граф наступний\n";
    cout << "Кількість ребер: 4" << endl;
    cout << "Кількість вершин: 6" << endl;
    cout << "Ребра:\n" << "1, 2, 1\n" << "2, 3, 2\n" << "3, 1, 3\n" << "5, 6, 4\n";
    list_of_edges g1 = read_graph();
    g1.components_of_graph(g1.get_v(), g1.get_e());
    cout << "\n" << "\n";

    cout << "Тест 2. Граф вводиться за допомогою методів класу\n";
    list_of_edges g2(5, 6);
    g2.add_edge(1, 2, 1);
    g2.add_edge(2, 3, 2);
    g2.add_edge(3, 5, 4);
    g2.add_edge(5, 4, 5);
    g2.add_edge(4, 3, 6);
    g2.add_edge(1, 4, 3);                                                              // 6
    cout << "Граф наступний\n";
    cout << "Кількість ребер: 6" << endl;
    cout << "Кількість вершин: 5" << endl;
    cout << "Ребра:\n" << "1, 2, 1\n" << "2, 3, 2\n" << "3, 5, 4\n" << "5, 4, 5\n" << "4, 3, 6\n" << "1, 4, 3\n";
    g2.components_of_graph(g2.get_v(), g2.get_e());
    cout << "\n" << "\n";

    cout << "Тест 3. Граф також вводиться за допомогою методів класу\n";
    list_of_edges g3(6, 6);
    g3.add_edge(1, 2, 1);
    g3.add_edge(2, 3, 2);
    g3.add_edge(3, 1, 3);
    g3.add_edge(5, 4, 4);
    g3.add_edge(5, 6, 5);
    g3.add_edge(6, 4, 6);                                                              // 6
    cout << "Граф наступний\n";
    cout << "Кількість ребер: 6" << endl;
    cout << "Кількість вершин: 6" << endl;
    cout << "Ребра:\n" << "1, 2, 1\n" << "2, 3, 2\n" << "3, 1, 3\n" << "5, 4, 4\n" << "5, 6, 5\n" << "6, 4, 6\n";
    g3.components_of_graph(g3.get_v(), g3.get_e());
    cout << "\n" << "\n";

    cout << "Результат роботи програми збережено у файлі res.txt\n";



}





