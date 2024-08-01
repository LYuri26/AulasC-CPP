#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variáveis para armazenar os dados do personagem
    string nome;                // Nome do personagem
    string raca;                // Raça do personagem
    string classe;              // Classe do personagem
    int idade;                  // Idade do personagem
    string sexo;                // Sexo do personagem
    string classeSocial;        // Classe social do personagem
    string ocupacao;            // Ocupação do personagem
    string historia;            // História do personagem
    string motivacao;           // Motivação do personagem
    string aparencia;           // Aparência do personagem
    int forca;                  // Atributo: Força
    int destreza;               // Atributo: Destreza
    int constituicao;           // Atributo: Constituição
    int inteligencia;           // Atributo: Inteligência
    int sabedoria;              // Atributo: Sabedoria
    int carisma;                // Atributo: Carisma
    int espadas;                // Habilidade com espadas
    int arcos;                  // Habilidade com arcos
    int armadilhas;             // Habilidade com armadilhas
    int furtividade;            // Habilidade de furtividade
    int magia;                  // Habilidade de magia
    int lutar;                  // Habilidade de luta corpo a corpo
    int medicina;               // Habilidade de medicina
    int persuasao;              // Habilidade de persuasão
    int herbalismo;             // Habilidade de herbalismo
    int navegacao;              // Habilidade de navegação
    int etiqueta;               // Habilidade de etiqueta
    int linguas;                // Quantidade de idiomas falados
    string nomeArtefato;        // Nome do artefato mágico
    string localizacaoArtefato; // Localização do artefato mágico
    string funcaoArtefato;      // Função do artefato mágico
    float custoArtefato;        // Custo do artefato em moedas de ouro
    string armas;               // Armas do personagem
    string armaduras;           // Armaduras do personagem
    string equipamentos;        // Outros equipamentos do personagem
    float moedasOuro;           // Moedas de ouro do personagem
    float reputacao;            // Reputação do personagem
    string alianca;             // Aliança do personagem
    string conexoes;            // Conexões do personagem
    float nivelMagia;           // Nível de magia do personagem

    // Solicitando entradas ao usuário
    cout << "Preenchendo os dados do personagem:\n";
    cout << "Nome: ";
    getline(cin, nome); // Lê o nome do personagem
    cout << "Raça: ";
    getline(cin, raca); // Lê a raça do personagem
    cout << "Classe: ";
    getline(cin, classe); // Lê a classe do personagem
    cout << "Idade: ";
    cin >> idade; // Lê a idade do personagem
    cout << "Sexo: ";
    cin >> sexo; // Lê o sexo do personagem
    cout << "Classe Social: ";
    getline(cin, classeSocial); // Lê a classe social do personagem
    cout << "Ocupação: ";
    getline(cin, ocupacao); // Lê a ocupação do personagem
    cout << "História (digite várias linhas e pressione ENTER em uma linha vazia para terminar):\n";
    getline(cin, historia); // Lê a história do personagem
    cout << "Motivação: ";
    getline(cin, motivacao); // Lê a motivação do personagem
    cout << "Aparência: ";
    getline(cin, aparencia); // Lê a aparência do personagem

    cout << "\nPreenchendo os atributos do personagem:\n";
    cout << "Força (FOR): ";
    cin >> forca; // Lê o valor da Força
    cout << "Destreza (DES): ";
    cin >> destreza; // Lê o valor da Destreza
    cout << "Constituição (CON): ";
    cin >> constituicao; // Lê o valor da Constituição
    cout << "Inteligência (INT): ";
    cin >> inteligencia; // Lê o valor da Inteligência
    cout << "Sabedoria (SAB): ";
    cin >> sabedoria; // Lê o valor da Sabedoria
    cout << "Carisma (CAR): ";
    cin >> carisma; // Lê o valor do Carisma

    cout << "\nPreenchendo as habilidades do personagem:\n";
    cout << "Espadas: ";
    cin >> espadas; // Lê a habilidade com espadas
    cout << "Arcos: ";
    cin >> arcos; // Lê a habilidade com arcos
    cout << "Armadilhas: ";
    cin >> armadilhas; // Lê a habilidade com armadilhas
    cout << "Furtividade: ";
    cin >> furtividade; // Lê a habilidade de furtividade
    cout << "Magia: ";
    cin >> magia; // Lê a habilidade de magia
    cout << "Lutar: ";
    cin >> lutar; // Lê a habilidade de lutar corpo a corpo
    cout << "Medicina: ";
    cin >> medicina; // Lê a habilidade de medicina
    cout << "Persuasão: ";
    cin >> persuasao; // Lê a habilidade de persuasão
    cout << "Herbalismo: ";
    cin >> herbalismo; // Lê a habilidade de herbalismo
    cout << "Navegação: ";
    cin >> navegacao; // Lê a habilidade de navegação
    cout << "Etiqueta: ";
    cin >> etiqueta; // Lê a habilidade de etiqueta
    cout << "Línguas: ";
    cin >> linguas; // Lê a quantidade de idiomas falados

    cout << "\nPreenchendo o artefato mágico do personagem:\n";
    cout << "Nome do artefato: ";
    getline(cin, nomeArtefato); // Lê o nome do artefato
    cout << "Localização do artefato: ";
    getline(cin, localizacaoArtefato); // Lê a localização do artefato
    cout << "Função do artefato: ";
    getline(cin, funcaoArtefato); // Lê a função do artefato
    cout << "Custo do artefato em moedas de ouro: ";
    cin >> custoArtefato; // Lê o custo do artefato em moedas de ouro

    cout << "\nPreenchendo os equipamentos do personagem:\n";
    cout << "Armas: ";
    getline(cin, armas); // Lê as armas do personagem
    cout << "Armaduras: ";
    getline(cin, armaduras); // Lê as armaduras do personagem
    cout << "Outros equipamentos: ";
    getline(cin, equipamentos); // Lê outros equipamentos do personagem

    cout << "\nPreenchendo as informações financeiras do personagem:\n";
    cout << "Quantidade de moedas de ouro: ";
    cin >> moedasOuro; // Lê a quantidade de moedas de ouro

    cout << "\nPreenchendo outras informações do personagem:\n";
    cout << "Reputação (0.0 a 100.0): ";
    cin >> reputacao; // Lê a reputação do personagem
    cout << "Aliança: ";
    getline(cin, alianca); // Lê a aliança do personagem
    cout << "Conexões: ";
    getline(cin, conexoes); // Lê as conexões do personagem
    cout << "Nível de Magia (0.0 a 100.0): ";
    cin >> nivelMagia; // Lê o nível de magia do personagem

    // Exibindo a ficha de personagem
    cout << "\n=== Ficha de Personagem ===\n";
    cout << "Nome: " << nome << "\n";                         // Exibe o nome
    cout << "Raça: " << raca << "\n";                         // Exibe a raça
    cout << "Classe: " << classe << "\n";                     // Exibe a classe
    cout << "Idade: " << idade << "\n";                       // Exibe a idade
    cout << "Sexo: " << sexo << "\n";                         // Exibe o sexo
    cout << "Classe Social: " << classeSocial << "\n";        // Exibe a classe social
    cout << "Ocupação: " << ocupacao << "\n";                 // Exibe a ocupação
    cout << "História: " << historia << "\n";                 // Exibe a história
    cout << "Motivação: " << motivacao << "\n";               // Exibe a motivação
    cout << "Aparência: " << aparencia << "\n";               // Exibe a aparência

    cout << "\n=== Atributos ===\n";
    cout << "Força (FOR): " << forca << "\n";               // Exibe a força
    cout << "Destreza (DES): " << destreza << "\n";         // Exibe a destreza
    cout << "Constituição (CON): " << constituicao << "\n"; // Exibe a constituição
    cout << "Inteligência (INT): " << inteligencia << "\n"; // Exibe a inteligência
    cout << "Sabedoria (SAB): " << sabedoria << "\n";       // Exibe a sabedoria
    cout << "Carisma (CAR): " << carisma << "\n";           // Exibe o carisma

    cout << "\n=== Habilidades ===\n";
    cout << "Espadas: " << espadas << "\n";               // Exibe a habilidade com espadas
    cout << "Arcos: " << arcos << "\n";                   // Exibe a habilidade com arcos
    cout << "Armadilhas: " << armadilhas << "\n";         // Exibe a habilidade com armadilhas
    cout << "Furtividade: " << furtividade << "\n";       // Exibe a habilidade de furtividade
    cout << "Magia: " << magia << "\n";                   // Exibe a habilidade de magia
    cout << "Lutar: " << lutar << "\n";                   // Exibe a habilidade de lutar corpo a corpo
    cout << "Medicina: " << medicina << "\n";             // Exibe a habilidade de medicina
    cout << "Persuasão: " << persuasao << "\n";           // Exibe a habilidade de persuasão
    cout << "Herbalismo: " << herbalismo << "\n";         // Exibe a habilidade de herbalismo
    cout << "Navegação: " << navegacao << "\n";           // Exibe a habilidade de navegação
    cout << "Etiqueta: " << etiqueta << "\n";             // Exibe a habilidade de etiqueta
    cout << "Línguas: " << linguas << "\n";               // Exibe a quantidade de idiomas falados

    cout << "\n=== Artefato Mágico ===\n";
    cout << "Nome do Artefato: " << nomeArtefato << "\n";                 // Exibe o nome do artefato
    cout << "Localização do Artefato: " << localizacaoArtefato << "\n";   // Exibe a localização do artefato
    cout << "Função do Artefato: " << funcaoArtefato << "\n";             // Exibe a função do artefato
    cout << "Custo do Artefato (moedas de ouro): " << custoArtefato << "\n"; // Exibe o custo do artefato

    cout << "\n=== Equipamentos ===\n";
    cout << "Armas: " << armas << "\n";                      // Exibe as armas
    cout << "Armaduras: " << armaduras << "\n";              // Exibe as armaduras
    cout << "Outros Equipamentos: " << equipamentos << "\n"; // Exibe outros equipamentos

    cout << "\n=== Dinheiro ===\n";
    cout << "Moedas de Ouro: " << moedasOuro << "\n"; // Exibe a quantidade de moedas de ouro

    cout << "\n=== Outras Informações ===\n";
    cout << "Reputação: " << reputacao << "\n"; // Exibe a reputação
    cout << "Aliança: " << alianca << "\n";     // Exibe a aliança
    cout << "Conexões: " << conexoes << "\n";   // Exibe as conexões
    cout << "Nível de Magia: " << nivelMagia << "\n"; // Exibe o nível de magia

    return 0; // Finaliza o programa
}
