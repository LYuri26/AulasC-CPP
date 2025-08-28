#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> numeros(n);
    int pares = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
    }
    cout << "A quantidade de pares é:" << pares << endl;

    return 0;
}