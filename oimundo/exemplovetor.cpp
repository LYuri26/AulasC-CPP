#include <iostream>

using namespace std;

int main()
{
    int tamanhoMaximoVetor = 100;
    int corDaCamisa, diaDoAniversario, mesDoAniversario;
    string resultadoCorDaCamisa, resultadoDiaDoAniversario, resultadoMesDoAniversario;

    string corCamisa[tamanhoMaximoVetor] = {
        "Preto",
        "Branco",
        "Vermelho",
        "Azul",
        "Verde",
        "Amarelo",
        "Roxo",
        "Cinza",
        "Marrom",
        "Laranja",
        "Rosa",
        "Bege",
        "Turquesa",
        "Vinho",
        "Azul marinho",
        "Lilás",
        "Dourado",
        "Camisa de time",
        "Outros",
        "Sem camisa"};

    string corVetor[tamanhoMaximoVetor] = {
        "O Harry Potter",
        "A Hermione Granger",
        "O Goku",
        "A Sailor Moon",
        "O Bruce Wayne",
        "A Daenerys Targaryen",
        "O Lionel Messi",
        "A Marta",
        "O Cristiano Ronaldo",
        "A Alex Morgan",
        "O Ji Chang Wook",
        "A Park Min Young",
        "O Hyun Bin",
        "A Son Ye Jin",
        "O Neymar",
        "A Megan Rapinoe",
        "O Lee Min Ho",
        "A Kim Ji Won",
        "O Kylian Mbappe",
        "A Bella Swan"};

    string diaVetor[tamanhoMaximoVetor] = {
        "Armadura de Homem de Ferro",
        "Uniforme de Hogwarts",
        "Capa do Batman",
        "Traje do Homem-Aranha",
        "Vestido da Elsa",
        "Túnica Jedi de Star Wars",
        "Vestido da Mulher Maravilha",
        "Roupa de Superman",
        "Kimono do Goku",
        "Traje de pirata do Jack Sparrow",
        "Traje tradicional hanbok",
        "Uniforme escolar coreano",
        "Terno e gravata elegante",
        "Vestido de noiva coreano",
        "Roupa casual de um herói de dorama",
        "Uniforme militar coreano",
        "Vestido de gala em um evento de dorama",
        "Roupa de policial coreano",
        "Vestimenta de CEO de dorama",
        "Roupa de médico em hospital coreano",
        "Uniforme do Barcelona",
        "Uniforme do PSG",
        "Camisa da seleção brasileira",
        "Uniforme do Manchester United",
        "Uniforme do Real Madrid",
        "Camisa de treino de futebol",
        "Agasalho de futebol para aquecimento",
        "Roupa de goleiro completa",
        "Uniforme da seleção argentina",
        "Uniforme do Chelsea"};

    string mesVetor[tamanhoMaximoVetor] = {
        "Karl Marx",
        "Joseph Stalin",
        "Vladimir Lenin",
        "Fidelis Reis",
        "Rainha Elizabeth I",
        "Che Guevara",
        "Albert Einstein",
        "Napoleão Bonaparte",
        "Marie Curie",
        "Nelson Mandela",
        "Mahatma Gandhi",
        "Cleópatra"};

    cout << "Bem vindo(a) ao criador de frases para aprendizado de loops e vetores!!" << endl;

    cout << "Escolha uma cor de camisa da lista abaixo:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << ". " << corCamisa[i] << endl;
    }

    cout << "Digite o número correspondente à cor de sua camisa: ";
    cin >> corDaCamisa;

    if (corDaCamisa >= 1 && corDaCamisa <= 20)
    {
        resultadoCorDaCamisa = corVetor[corDaCamisa - 1];
    }
    else
    {
        cout << "Número inválido para a cor da camisa. Por favor, escolha um número entre 1 e 20." << endl;
        return 1;
    }

    cout << "Digite o dia de seu aniversário (1-30): ";
    cin >> diaDoAniversario;

    if (diaDoAniversario >= 1 && diaDoAniversario <= 30)
    {
        resultadoDiaDoAniversario = diaVetor[diaDoAniversario - 1];
    }
    else
    {
        cout << "Número inválido para o dia do aniversário. Por favor, escolha um número entre 1 e 30." << endl;
        return 1;
    }

    cout << "Digite o mês de seu aniversário (1-12): ";
    cin >> mesDoAniversario;

    if (mesDoAniversario >= 1 && mesDoAniversario <= 12)
    {
        resultadoMesDoAniversario = mesVetor[mesDoAniversario - 1];
    }
    else
    {
        cout << "Número inválido para o mês do aniversário. Por favor, escolha um número entre 1 e 12." << endl;
        return 1;
    }

    cout << "Sua frase é:" << endl;
    cout << "Um dia encontrei " << resultadoCorDaCamisa << " vestindo " << resultadoDiaDoAniversario << " enquanto " << resultadoMesDoAniversario << " Vendia algoritmos." << endl;

    return 0;
}
