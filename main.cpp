#include <bits/stdc++.h>
using namespace std;

// Clase base
class Operacion {
public:
    int x, y;

    void setValores(int a, int b) {
        x = a;
        y = b;
    }

    void mostrarResultado() {
        cout << "Resultado: " << calcular() << endl;
    }

    virtual double calcular() {
        return 0; // Por defecto
    }
};

// Clase derivada: Suma
class Suma : public Operacion {
public:
    double calcular() override {
        return x + y;
    }
};

// Clase derivada: Resta
class Resta : public Operacion {
public:
    double calcular() override {
        return x - y;
    }
};

// Clase derivada: Multiplicación
class Multiplicacion : public Operacion {
public:
    double calcular() override {
        return x * y;
    }
};

// Clase derivada: División
class Division : public Operacion {
public:
    double calcular() override {
        if (y == 0) {
            cout << "Error: División por cero" << endl;
            return 0;
        }
        return (double)x / y;
    }
};

int main() {
    Suma suma;
    Resta resta;
    Multiplicacion mult;
    Division div;

    suma.setValores(1, 5);
    resta.setValores(5, 1);
    div.setValores(9, 3);
    mult.setValores(2, 2);

    cout << "Suma: ";
    suma.mostrarResultado();

    cout << "Resta: ";
    resta.mostrarResultado();

    cout << "Multiplicación: ";
    mult.mostrarResultado();

    cout << "División: ";
    div.mostrarResultado();

    return 0;
}
