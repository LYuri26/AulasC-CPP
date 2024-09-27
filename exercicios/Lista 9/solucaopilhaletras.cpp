#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> pilhaNumeros;

    pilhaNumeros.push('a');
    pilhaNumeros.push('b');
    pilhaNumeros.push('c');
    pilhaNumeros.push('d');

    cout << "Topo da pilha:" << pilhaNumeros.top() << endl;

    while (!pilhaNumeros.empty())
    {
        cout << "Desempilhando:" << pilhaNumeros.top() << endl;
        pilhaNumeros.pop();
    }
    pilhaNumeros.push('a');
    pilhaNumeros.push('b');
    pilhaNumeros.push('c');
    pilhaNumeros.push('d');

    pilhaNumeros.pop();
    pilhaNumeros.pop();
    pilhaNumeros.push('e');
    
    cout << "Topo da pilha:" << pilhaNumeros.top() << endl;

    while (!pilhaNumeros.empty())
    {
        cout << "Desempilhando:" << pilhaNumeros.top() << endl;
        pilhaNumeros.pop();
    }

    return 0;
}