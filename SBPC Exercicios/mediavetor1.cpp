#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numeros(n);
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
        soma += numeros[i];
    }

    double media = static_cast<double>(soma) / n;
    cout << "Média é " << media << endl;

    return 0;
}