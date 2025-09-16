#include "Instance.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

Instance::Instance(const string& filename) {
    // construtor
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Nao foi possível abrir o arquivo " << filename << endl;
        exit(1);
    }

    string line;
    int line_count = 0;

    // Loop de leitura do arquivo aqui
    while (getline(file, line)) {
        line_count++;
        // Implementar o processamento de cada linha aqui
    }
    
    file.close();
}

void Instance::print() const {
    // print
    cout << "Arquivo carregado com sucesso!" << endl;
    cout << "n: " << n << endl;
    cout << "m: " << m << endl;
    cout << "Q: " << Q << endl;
}