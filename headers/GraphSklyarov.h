// зв'язаний список; знадобиться для алгоритму пошуку в ширину в графі
struct List_
{
    int val;
    List_ *next_val;
};

void add_val(List_ **vals, int val); // додати елемент в кінець списка

bool isempty(List_ **vals); // перевірка чи є список порожнім

void delete_first(List_ **vals); // видалення першого елемента списку

// Клас, в якому міститься інформація про граф
class list_of_edges
{
public:
    list_of_edges(int v, int e); //конструктор; e - кількість ребер, v - кількість вершин
    ~list_of_edges();         //деструктор
    void add_edge(int from, int to, int weight); // додати ребро
    int components_of_graph(int v, int e); // функція рахує кількість зв'язних компонент в графі. на вході - кількість вершин і ребер графа,
                                           // на виході - кількість зв'язаних компонент графа
    void amount_of_values_(); // ця функція слідкує, скільки було введено ребер
    int get_v(); // повертає кількість вершин графа
    int get_e(); // повертає кількість ребер графа
    void write_to_file(int res); // запис у текстовий файл
private:
    **lst;
    int vert; // кількість вершин
    int edg; // кількість ребер
    int amount_of_values; // кількість введених ребер
};


list_of_edges read_graph(); // прочитати граф з текстового файлу

