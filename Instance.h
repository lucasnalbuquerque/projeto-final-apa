#ifndef INSTANCE_H
#define INSTANCE_H

#include <vector>
#include <string>

using namespace std;

class Instance {
private:
    int n; // numero de estacoes (o deposito eh o vertice 0, entao os vertices totais são n+1)
    int m; // numero max de veiculos
    int Q; // capacidade dos veiculos
};

#endif