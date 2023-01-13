#include <iostream>
#include "vector"

using namespace std;

template<typename T> vector<T> ordenar(vector<T> entrada){
    int size = entrada.size();
    vector<T> salida;
    for (int i = 0; i < size; ++i) {
        int min_Distance = numeric_limits<int>::max();
        int min_number = 0;
        for (int j = 0; j < entrada.size(); ++j) {
            if (entrada[j] < min_Distance){
                min_Distance = entrada[j];
                min_number = j;
            }
        }
        salida.push_back(entrada[min_number]);
        entrada.erase(entrada.begin()+min_number);
    }
    return salida;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vect{ 59, 80, 30 };
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect.at(i) << endl;
    }
    cout << endl;

    vector<int> salida = ordenar(vect);
    for (int i = 0; i < salida.size(); ++i) {
        cout << salida.at(i) << endl;
    }
    return 0;
}
