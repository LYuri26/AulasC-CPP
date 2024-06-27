#include <iostream> // Biblioteca para entrada e saída de dados

using namespace std; // Permite o uso de elementos do namespace std

int main() {
    char escolhaHeroi, escolhaCaminho, escolhaFeitico, escolhaLabirinto, escolhaPortaTunel;
    int nivel = 1;

    // Fase 1: Escolha do Herói
    cout << "Escolha seu herói (B para Batman, S para Superman, M para Mulher-Maravilha): ";
    cin >> escolhaHeroi;

    if (escolhaHeroi == 'B') {
        // Desafios do Batman
        cout << "Você escolheu o Batman! Habilidades especiais: inteligência, artes marciais, tecnologia avançada e bater em pobre maluco além de ser um burguês safado.\n";
        
        // Fase 2: Escolha do Caminho
        cout << "Batman, você precisa decidir entre duas missões: (0) Investigar um laboratório secreto ou (1) Resgatar reféns em um banco.\n";
        cout << "Digite sua escolha (0 ou 1): ";
        cin >> escolhaCaminho;

        if (escolhaCaminho == '0') {
            cout << "Você escolheu investigar um laboratório secreto! Desafios: hackear sistemas e lutar contra robôs de segurança.\n";
        } else if (escolhaCaminho == '1') {
            cout << "Você escolheu resgatar reféns em um banco! Desafios: desarmar bombas e derrotar criminosos armados.\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
        }

        // Fase 3: Escolha do Equipamento
        cout << "Escolha seu equipamento: (B) Batmobile para uma fuga rápida ou (W) Batwing para um ataque aéreo.\n";
        cin >> escolhaFeitico;

        if (escolhaFeitico == 'B') {
            cout << "Você escolheu o Batmobile! Resultado: perseguição intensa pelas ruas da cidade.\n";
        } else if (escolhaFeitico == 'W') {
            cout << "Você escolheu o Batwing! Resultado: ataques precisos contra os inimigos de cima.\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
        }

        // Fase 4: Navegação no Labirinto (Caverna do Coringa)
        cout << "Agora você precisa navegar pela Caverna do Coringa!\n";
        while (nivel <= 5) {
            cout << "Nível " << nivel << " - Escolha direita (1) ou esquerda (0): ";
            cin >> escolhaLabirinto;

            if (nivel == 1 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 2;
            } else if (nivel == 2 && escolhaLabirinto == '0') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 3;
            } else if (nivel == 3 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 4;
            } else if (nivel == 4 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 5;
            } else if (nivel == 5 && escolhaLabirinto == '0') {
                cout << "Escolha correta! Você chegou ao final da Caverna do Coringa!\n";
                nivel++;
            } else {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }

        // Fase 5: Escolha entre a Porta Misteriosa ou o Túnel Escuro
        cout << "Escolha: (P) Abrir uma porta misteriosa ou (T) Seguir por um túnel escuro.\n";
        cin >> escolhaPortaTunel;

        if (escolhaPortaTunel == 'P') {
            cout << "Você escolheu abrir uma porta misteriosa! Resultado: encontrou um esconderijo com novos gadgets.\n";
        } else if (escolhaPortaTunel == 'T') {
            cout << "Você escolheu seguir por um túnel escuro! Resultado: enfrentou armadilhas perigosas.\n";
        } else {
            cout << "Opção inválida! Escolha entre abrir uma porta misteriosa (P) ou seguir por um túnel escuro (T).\n";
        }

    } else if (escolhaHeroi == 'S') {
        // Desafios do Superman
        cout << "Você escolheu o Superman! Habilidades especiais: super força, voo, ser o símbolo imperialista dos EUA, um hipócrita e visão de calor.\n";
        
        // Fase 2: Escolha do Caminho
        cout << "Superman, você precisa decidir entre dois resgates: (0) Um trem desgovernado ou (1) Um prédio em chamas.\n";
        cout << "Digite sua escolha (0 ou 1): ";
        cin >> escolhaCaminho;

        if (escolhaCaminho == '0') {
            cout << "Você escolheu parar um trem desgovernado! Desafios: usar sua super força e salvar passageiros em perigo.\n";
        } else if (escolhaCaminho == '1') {
            cout << "Você escolheu salvar um prédio em chamas! Desafios: voar rapidamente e salvar pessoas presas pelo fogo.\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
        }

        // Fase 3: Escolha do Poder
        cout << "Escolha seu poder: (H) Visão de calor para derreter obstáculos ou (I) Super sopro para apagar as chamas.\n";
        cin >> escolhaFeitico;

        if (escolhaFeitico == 'H') {
            cout << "Você usou a visão de calor! Resultado: superou obstáculos com facilidade.\n";
        } else if (escolhaFeitico == 'I') {
            cout << "Você usou o super sopro! Resultado: extinguiu as chamas com sucesso.\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
        }

        // Fase 4: Navegação no Labirinto (Fortaleza da Solidão)
        cout << "Agora você precisa navegar pela Fortaleza da Solidão!\n";
        while (nivel <= 5) {
            cout << "Nível " << nivel << " - Escolha direita (1) ou esquerda (0): ";
            cin >> escolhaLabirinto;

            if (nivel == 1 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 2;
            } else if (nivel == 2 && escolhaLabirinto == '0') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 3;
            } else if (nivel == 3 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 4;
            } else if (nivel == 4 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 5;
            } else if (nivel == 5 && escolhaLabirinto == '0') {
                cout << "Escolha correta! Você chegou ao final da Fortaleza da Solidão!\n";
                nivel++;
            } else {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }

        // Fase 5: Escolha entre a Porta Misteriosa ou o Túnel Escuro
        cout << "Escolha: (P) Abrir uma porta misteriosa ou (T) Seguir por um túnel escuro.\n";
        cin >> escolhaPortaTunel;

        if (escolhaPortaTunel == 'P') {
            cout << "Você escolheu abrir uma porta misteriosa! Resultado: encontrou uma sala com conhecimento kryptoniano.\n";
        } else if (escolhaPortaTunel == 'T') {
            cout << "Você escolheu seguir por um túnel escuro! Resultado: enfrentou obstáculos feitos de kryptonita.\n";
        } else {
            cout << "Opção inválida! Escolha entre abrir uma porta misteriosa (P) ou seguir por um túnel escuro (T).\n";
        }

    } else if (escolhaHeroi == 'M') {
        // Desafios da Mulher-Maravilha
        cout << "Você escolheu a Mulher-Maravilha! Habilidades especiais: super força, agilidade, ser um modelo sexy para nerdolas, cota feminina em uma liga majoritariamente machista e invulnerabilidade.\n";
        
        // Fase 2: Escolha do Caminho
        cout << "Mulher-Maravilha, você precisa decidir entre duas missões: (0) Enfrentar Ares em uma batalha ou (1) Encontrar e destruir a espada de um vilão.\n";
        cout << "Digite sua escolha (0 ou 1): ";
        cin >> escolhaCaminho;

        if (escolhaCaminho == '0') {
            cout << "Você escolheu enfrentar Ares! Desafios: combate intenso e uso de habilidades de guerra.\n";
        } else if (escolhaCaminho == '1') {
            cout << "Você escolheu destruir a espada de um vilão! Desafios: descobrir o esconderijo e superar guardiões mágicos.\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
        }

        // Fase 3: Escolha da Arma
        cout << "Escolha sua arma: (L) Laço da Verdade para subjugar inimigos ou (S) Espada de Atena para combate corpo a corpo.\n";
        cin >> escolhaFeitico;

        if (escolhaFeitico == 'L') {
            cout << "Você usou o Laço da Verdade! Resultado: subjugou e interrogou os inimigos.\n";
        } else if (escolhaFeitico == 'S') {
            cout << "Você usou a Espada de Atena! Resultado: venceu batalhas com habilidade incomparável.\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
        }

        // Fase 4: Navegação no Labirinto (Templo Antigo)
        cout << "Agora você precisa navegar por um Templo Antigo!\n";
        while (nivel <= 5) {
            cout << "Nível " << nivel << " - Escolha direita (1) ou esquerda (0): ";
            cin >> escolhaLabirinto;

            if (nivel == 1 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 2;
            } else if (nivel == 2 && escolhaLabirinto == '0') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 3;
            } else if (nivel == 3 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 4;
            } else if (nivel == 4 && escolhaLabirinto == '1') {
                cout << "Escolha correta! Avançando para o próximo nível...\n";
                nivel = 5;
            } else if (nivel == 5 && escolhaLabirinto == '0') {
                cout << "Escolha correta! Você chegou ao final do Templo Antigo!\n";
                nivel++;
            } else {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }

        // Fase 5: Escolha entre a Porta Misteriosa ou o Túnel Escuro
        cout << "Escolha: (P) Abrir uma porta misteriosa ou (T) Seguir por um túnel escuro.\n";
        cin >> escolhaPortaTunel;

        if (escolhaPortaTunel == 'P') {
            cout << "Você escolheu abrir uma porta misteriosa! Resultado: encontrou artefatos antigos com poderosas propriedades.\n";
        } else if (escolhaPortaTunel == 'T') {
            cout << "Você escolheu seguir por um túnel escuro! Resultado: enfrentou perigos místicos e armadilhas antigas.\n";
        } else {
            cout << "Opção inválida! Escolha entre abrir uma porta misteriosa (P) ou seguir por um túnel escuro (T).\n";
        }

    } else {
        cout << "Opção inválida! Escolha entre Batman (B), Superman (S) ou Mulher-Maravilha (M).\n";
        return 0; // Termina o programa em caso de opção inválida
    }

    // Fim da aventura
    cout << "Parabéns! Você completou a aventura.\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
