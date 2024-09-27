#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> pilhaNumeros;

    pilhaNumeros.push(10);
    pilhaNumeros.push(20);
    pilhaNumeros.push(30);
    pilhaNumeros.push(40);

    cout << "Topo da pilha:" << pilhaNumeros.top() << endl;

    while (!pilhaNumeros.empty())
    {
        cout << "Desempilhando:" << pilhaNumeros.top() << endl;
        pilhaNumeros.pop();
    }
    pilhaNumeros.push(10);
    pilhaNumeros.push(20);
    pilhaNumeros.push(30);
    pilhaNumeros.push(40);

    pilhaNumeros.pop();
    pilhaNumeros.pop();
    pilhaNumeros.push(50);
    
    cout << "Topo da pilha:" << pilhaNumeros.top() << endl;

    while (!pilhaNumeros.empty())
    {
        cout << "Desempilhando:" << pilhaNumeros.top() << endl;
        pilhaNumeros.pop();
    }

    return 0;
}