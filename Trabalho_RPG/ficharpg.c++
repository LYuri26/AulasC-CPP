#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Definição da classe Item
class Item {
public:
    string nome;
    string tipo;
    string atributo;
    int valor;
};

// Definição da classe Personagem
class Personagem {
public:
    string nome;
    string classe;
    int nivel;
    string raca;
    int pontosVida;
    int pontosAtaque;
    vector<string> habilidades;
    vector<Item> equipamentos;
};

// Função de comparação para ordenação alfabética por nome
bool compararPorNome(const Item& item1, const Item& item2) {
    return item1.nome < item2.nome;
}

// Função para adicionar um item à lista de equipamentos
void adicionarItem(vector<Item>& listaEquipamentos) {
    Item novoItem;
    
    cout << "Digite o nome do item: ";
    getline(cin, novoItem.nome);
    
    cout << "Digite o tipo do item: ";
    getline(cin, novoItem.tipo);
    
    cout << "Digite o atributo do item: ";
    getline(cin, novoItem.atributo);
    
    cout << "Digite o valor do item: ";
    cin >> novoItem.valor;
    
    listaEquipamentos.push_back(novoItem);
    
    cout << "Item adicionado com sucesso!" << endl;
}

// Função para remover um item da lista de equipamentos
void removerItem(vector<Item>& listaEquipamentos, const string& nomeItem) {
    auto it = find_if(listaEquipamentos.begin(), listaEquipamentos.end(), [&](const Item& item) {
        return item.nome == nomeItem;
    });
    
    if (it != listaEquipamentos.end()) {
        listaEquipamentos.erase(it);
        cout << "Item removido com sucesso!" << endl;
    } else {
        cout << "Item não encontrado na lista." << endl;
    }
}

// Função para exibir a lista de equipamentos
void exibirEquipamentos(const vector<Item>& listaEquipamentos) {
    cout << "\nLista de Equipamentos" << endl;
    cout << "---------------------" << endl;
    for (const auto& item : listaEquipamentos) {
        cout << "Nome: " << item.nome << endl;
        cout << "Tipo: " << item.tipo << endl;
        cout << "Atributo: " << item.atributo << endl;
        cout << "Valor: " << item.valor << endl;
        cout << "---------------------" << endl;
    }
}

// Função para buscar um item na lista de equipamentos
void buscarItem(const vector<Item>& listaEquipamentos, const string& nomeItem) {
    auto it = find_if(listaEquipamentos.begin(), listaEquipamentos.end(), [&](const Item& item) {
        return item.nome == nomeItem;
    });
    
    if (it != listaEquipamentos.end()) {
        cout << "\nItem Encontrado" << endl;
        cout << "---------------" << endl;
        cout << "Nome: " << it->nome << endl;
        cout << "Tipo: " << it->tipo << endl;
        cout << "Atributo: " << it->atributo << endl;
        cout << "Valor: " << it->valor << endl;
    } else {
        cout << "Item não encontrado na lista." << endl;
    }
}

int main() {
    // Criação de um objeto da classe Personagem
    Personagem fichaPersonagem;

    // Solicitação das informações ao usuário
    cout << "Criação de Ficha de Personagem de RPG" << endl;

    cout << "Digite o nome do personagem: ";
    getline(cin, fichaPersonagem.nome);

    cout << "Digite a classe do personagem: ";
    getline(cin, fichaPersonagem.classe);

    cout << "Digite o nível do personagem: ";
    cin >> fichaPersonagem.nivel;
    cin.ignore();

    cout << "Digite a raça do personagem: ";
    getline(cin, fichaPersonagem.raca);

    cout << "Digite os pontos de vida do personagem: ";
    cin >> fichaPersonagem.pontosVida;

    cout << "Digite os pontos de ataque do personagem: ";
    cin >> fichaPersonagem.pontosAtaque;

    // Adicionar habilidades ao personagem
    cout << "\nAdicionar Habilidades" << endl;
    cout << "---------------------" << endl;
    char adicionarHabilidade;
    do {
        string habilidade;
        cout << "Digite uma habilidade do personagem: ";
        cin.ignore();
        getline(cin, habilidade);
        fichaPersonagem.habilidades.push_back(habilidade);
        cout << "Deseja adicionar outra habilidade? (S/N): ";
        cin >> adicionarHabilidade;
    } while (adicionarHabilidade == 'S' || adicionarHabilidade == 's');

    // Adicionar equipamentos ao personagem
    cout << "\nAdicionar Equipamentos" << endl;
    cout << "---------------------" << endl;
    char adicionarEquipamento;
    do {
        cout << "Deseja adicionar um equipamento ao personagem? (S/N): ";
        cin >> adicionarEquipamento;
        
        if (adicionarEquipamento == 'S' || adicionarEquipamento == 's') {
            adicionarItem(fichaPersonagem.equipamentos);
        }
    } while (adicionarEquipamento == 'S' || adicionarEquipamento == 's');

    // Exibir as informações da ficha do personagem
    cout << "\nFicha do Personagem" << endl;
    cout << "-------------------" << endl;
    cout << "Nome: " << fichaPersonagem.nome << endl;
    cout << "Classe: " << fichaPersonagem.classe << endl;
    cout << "Nível: " << fichaPersonagem.nivel << endl;
    cout << "Raça: " << fichaPersonagem.raca << endl;
    cout << "Pontos de Vida: " << fichaPersonagem.pontosVida << endl;
    cout << "Pontos de Ataque: " << fichaPersonagem.pontosAtaque << endl;
    
    cout << "\nHabilidades:" << endl;
    for (const auto& habilidade : fichaPersonagem.habilidades) {
        cout << "- " << habilidade << endl;
    }
    
    exibirEquipamentos(fichaPersonagem.equipamentos);

    // Opção para remover um item da lista de equipamentos
    char removerItemOpcao;
    cout << "\nDeseja remover um item da lista de equipamentos? (S/N): ";
    cin >> removerItemOpcao;
    if (removerItemOpcao == 'S' || removerItemOpcao == 's') {
        cin.ignore();
        string nomeItem;
        cout << "Digite o nome do item que deseja remover: ";
        getline(cin, nomeItem);
        removerItem(fichaPersonagem.equipamentos, nomeItem);
    }
    
    // Opção para buscar um item na lista de equipamentos
    char buscarItemOpcao;
    cout << "\nDeseja buscar um item na lista de equipamentos? (S/N): ";
    cin >> buscarItemOpcao;
    if (buscarItemOpcao == 'S' || buscarItemOpcao == 's') {
        cin.ignore();
        string nomeItem;
        cout << "Digite o nome do item que deseja buscar: ";
        getline(cin, nomeItem);
        buscarItem(fichaPersonagem.equipamentos, nomeItem);
    }

    // Opção para exibir a lista de equipamentos em ordem alfabética por nome
    char exibirOrdenado;
    cout << "\nDeseja exibir a lista de equipamentos em ordem alfabética por nome? (S/N): ";
    cin >> exibirOrdenado;

    if (exibirOrdenado == 'S' || exibirOrdenado == 's') {
        cout << "\nLista de Equipamentos em Ordem Alfabética" << endl;
        cout << "-----------------------------------------" << endl;
        sort(fichaPersonagem.equipamentos.begin(), fichaPersonagem.equipamentos.end(), compararPorNome);
        exibirEquipamentos(fichaPersonagem.equipamentos);
    }

    return 0;
}
