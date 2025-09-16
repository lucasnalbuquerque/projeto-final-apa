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

    vector<int> d; // Lista de demandas. d[0] eh a demanda do depósito (sempre 0), d[1] ate d[n] são as demandas das estacoes 1 a n.
    vector<vector<int>> c; // Matriz de custos (distancias). c[i][j] = custo de ir do vertice i para o vertice j.

public:
    // Construtor
    Instance(const string& filename);

    // Getters
    int getNumStations() const { 
        return n;
    }
    int getNumVehicles() const { 
        return m;
    }
    int getVehicleCapacity() const { 
        return Q;
    }
    int getDemand(int vertex) const { 
        return d[vertex];
    }

    int getCost(int i, int j) const 
    { 
        return c[i][j]; }

    // Imprime os dados da instancia
    void print() const;
};

#endif