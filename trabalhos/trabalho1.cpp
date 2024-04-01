#include <iostream>
#include <string>
#include <sstream> // Para std::stringstream
#include <limits>  // Para std::numeric_limits

// Definindo a estrutura para representar o personagem
struct Personagem
{
    std::string nome;
    std::string apelido;
    std::string origem;
    std::string dataNascimento;
    std::string sexo;
    std::string classeSocial;
    std::string ocupacao;
    std::string historia;
    std::string motivacao;
    std::string aparencia;
    int forca;
    int destreza;
    int constituicao;
    int inteligencia;
    int sabedoria;
    int carisma;
    std::string habilidades[12];
    std::string nomeImplante;
    std::string localizacaoImplante;
    std::string funcaoImplante;
    int custoImplante;
    std::string armas;
    std::string armaduras;
    std::string equipamentos;
    double creditos;
    int reputacao;
    std::string gangue;
    std::string conexoes;
};

// Função para solicitar e validar uma entrada de string não vazia
std::string solicitarEntradaStringNaoVazia(const std::string &mensagem)
{
    std::string entrada;
    std::cout << mensagem << ": ";
    std::getline(std::cin >> std::ws, entrada);
    return entrada;
}

// Função para solicitar e validar uma entrada de inteiro não negativo
int solicitarEntradaInteiroNaoNegativo(const std::string &mensagem)
{
    int entrada;
    std::string line;
    while (true)
    {
        std::cout << mensagem << ": ";
        std::getline(std::cin, line);
        std::stringstream ss(line);
        if (ss >> entrada && entrada >= 0)
        {
            // Se a conversão para inteiro foi bem sucedida e o número é não negativo, retorna
            return entrada;
        }
        std::cout << "Entrada inválida. Por favor, digite um número inteiro não negativo.\n";
    }
}

// Função para preencher os dados do personagem
void preencherDadosPersonagem(Personagem &personagem)
{
    std::cout << "Preenchendo os dados do personagem:\n";
    personagem.nome = solicitarEntradaStringNaoVazia("Nome");
    personagem.apelido = solicitarEntradaStringNaoVazia("Apelido");
    personagem.origem = solicitarEntradaStringNaoVazia("Origem");
    personagem.dataNascimento = solicitarEntradaStringNaoVazia("Data de Nascimento");
    personagem.sexo = solicitarEntradaStringNaoVazia("Sexo");
    personagem.classeSocial = solicitarEntradaStringNaoVazia("Classe Social");
    personagem.ocupacao = solicitarEntradaStringNaoVazia("Ocupação");
    personagem.historia = solicitarEntradaStringNaoVazia("História");
    personagem.motivacao = solicitarEntradaStringNaoVazia("Motivação");
    personagem.aparencia = solicitarEntradaStringNaoVazia("Aparência");
}

// Função para preencher os atributos do personagem
void preencherAtributos(Personagem &personagem)
{
    std::cout << "Preenchendo os atributos do personagem:\n";
    personagem.forca = solicitarEntradaInteiroNaoNegativo("Força (FOR)");
    personagem.destreza = solicitarEntradaInteiroNaoNegativo("Destreza (DES)");
    personagem.constituicao = solicitarEntradaInteiroNaoNegativo("Constituição (CON)");
    personagem.inteligencia = solicitarEntradaInteiroNaoNegativo("Inteligência (INT)");
    personagem.sabedoria = solicitarEntradaInteiroNaoNegativo("Sabedoria (SAB)");
    personagem.carisma = solicitarEntradaInteiroNaoNegativo("Carisma (CAR)");
}

// Função para preencher as habilidades do personagem
void preencherHabilidades(Personagem &personagem)
{
    std::cout << "Preenchendo as habilidades do personagem:\n";
    for (int i = 0; i < 12; ++i)
    {
        std::cout << "Nome da habilidade " << i + 1 << ": ";
        std::getline(std::cin >> std::ws, personagem.habilidades[i]); // Permite ao usuário inserir o nome da habilidade
    }
}

// Função para preencher o implante cibernético do personagem
void preencherImplanteCibernetico(Personagem &personagem)
{
    std::cout << "Preenchendo o implante cibernético do personagem:\n";
    personagem.nomeImplante = solicitarEntradaStringNaoVazia("Nome do implante");
    personagem.localizacaoImplante = solicitarEntradaStringNaoVazia("Localização do implante");
    personagem.funcaoImplante = solicitarEntradaStringNaoVazia("Função do implante");
    personagem.custoImplante = solicitarEntradaInteiroNaoNegativo("Custo do implante em créditos");
}

// Função para preencher os equipamentos do personagem
void preencherEquipamentos(Personagem &personagem)
{
    std::cout << "Preenchendo os equipamentos do personagem:\n";
    personagem.armas = solicitarEntradaStringNaoVazia("Armas");
    personagem.armaduras = solicitarEntradaStringNaoVazia("Armaduras");
    personagem.equipamentos = solicitarEntradaStringNaoVazia("Outros equipamentos");
}

// Função para preencher as informações financeiras do personagem
void preencherDinheiro(Personagem &personagem)
{
    std::cout << "Preenchendo as informações financeiras do personagem:\n";
    personagem.creditos = solicitarEntradaInteiroNaoNegativo("Quantidade de créditos");
}

// Função para preencher outras informações do personagem
void preencherOutrasInformacoes(Personagem &personagem)
{
    std::cout << "Preenchendo outras informações do personagem:\n";
    personagem.reputacao = solicitarEntradaInteiroNaoNegativo("Reputação");
    personagem.gangue = solicitarEntradaStringNaoVazia("Gangue");
    personagem.conexoes = solicitarEntradaStringNaoVazia("Conexões");
}

// Função para criar a ficha de personagem
Personagem criarFichaPersonagem()
{
    Personagem personagem;
    preencherDadosPersonagem(personagem);
    preencherAtributos(personagem);
    preencherHabilidades(personagem);
    preencherImplanteCibernetico(personagem);
    preencherEquipamentos(personagem);
    preencherDinheiro(personagem);
    preencherOutrasInformacoes(personagem);
    return personagem;
}

// Função principal
int main()
{
    Personagem personagem = criarFichaPersonagem();

    // Exibindo a ficha de personagem
    std::cout << "\n=== Ficha de Personagem ===\n";
    std::cout << "Nome: " << personagem.nome << "\n";
    std::cout << "Apelido: " << personagem.apelido << "\n";
    std::cout << "Origem: " << personagem.origem << "\n";
    std::cout << "Data de Nascimento: " << personagem.dataNascimento << "\n";
    std::cout << "Sexo: " << personagem.sexo << "\n";
    std::cout << "Classe Social: " << personagem.classeSocial << "\n";
    std::cout << "Ocupação: " << personagem.ocupacao << "\n";
    std::cout << "História: " << personagem.historia << "\n";
    std::cout << "Motivação: " << personagem.motivacao << "\n";
    std::cout << "Aparência: " << personagem.aparencia << "\n";

    std::cout << "\n=== Atributos ===\n";
    std::cout << "Força (FOR): " << personagem.forca << "\n";
    std::cout << "Destreza (DES): " << personagem.destreza << "\n";
    std::cout << "Constituição (CON): " << personagem.constituicao << "\n";
    std::cout << "Inteligência (INT): " << personagem.inteligencia << "\n";
    std::cout << "Sabedoria (SAB): " << personagem.sabedoria << "\n";
    std::cout << "Carisma (CAR): " << personagem.carisma << "\n";

    std::cout << "\n=== Habilidades ===\n";
    for (int i = 0; i < 12; ++i)
    {
        std::cout << "Habilidade " << i + 1 << ": " << personagem.habilidades[i] << "\n";
    }

    std::cout << "\n=== Implante Cibernético ===\n";
    std::cout << "Nome do Implante: " << personagem.nomeImplante << "\n";
    std::cout << "Localização do Implante: " << personagem.localizacaoImplante << "\n";
    std::cout << "Função do Implante: " << personagem.funcaoImplante << "\n";
    std::cout << "Custo do Implante (créditos): " << personagem.custoImplante << "\n";

    std::cout << "\n=== Equipamentos ===\n";
    std::cout << "Armas: " << personagem.armas << "\n";
    std::cout << "Armaduras: " << personagem.armaduras << "\n";
    std::cout << "Outros Equipamentos: " << personagem.equipamentos << "\n";

    std::cout << "\n=== Dinheiro ===\n";
    std::cout << "Créditos: " << personagem.creditos << "\n";

    std::cout << "\n=== Outras Informações ===\n";
    std::cout << "Reputação: " << personagem.reputacao << "\n";
    std::cout << "Gangue: " << personagem.gangue << "\n";
    std::cout << "Conexões: " << personagem.conexoes << "\n";

    return 0;
}
