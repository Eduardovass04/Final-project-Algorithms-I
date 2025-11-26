#include <stdio.h>
#include <string.h>

#define max_Abelhas 50
#define max_sensores 100

//======================================
// STRUCTS
//======================================
typedef struct {
    char tipo[30];
    float valor;
    int IDabelha;
    int IDsensor;
} SensorData;

typedef struct {
    int Id;
    char nomepopular[40];
    char nomeCientifico[50];
    char regiao[30];
    float producaomel;
} Abelha;


//======================================
// VARIÁVEIS GLOBAIS
//======================================
SensorData vetSensores[max_sensores];
int tSensores = 0;

Abelha vetAbelhas[max_Abelhas];
int tAbelhas = 0;


//======================================
// DECLARAÇÃO DE FUNÇÕES
//======================================

// Menus
void menuPrincipal();
void menuAbelhas();
void menuSensores();
void menuRelatorios();

// Abelhas
void cadastrarAbelha();
void listarAbelhas();
void buscarAbelhaPorNome();
void alterarAbelha();
void removerAbelha();

// Sensores
void cadastrarSensor();
void listarSensores();
void buscarSensorPorIdAbelha();
void alterarSensor();
void removerSensor();
//Relatórios

void MediaGeralMel();
void MediaTemperatura();
void ContagemRegiao();

//======================================
// FUNÇÃO PRINCIPAL
//======================================
int main() {
    menuPrincipal();
    return 0;
}


//======================================
// MENU PRINCIPAL
//======================================
void menuPrincipal() {
    int escolha;

    do {
        printf("\n==== MENU PRINCIPAL ====\n");
        printf("1. Gerenciar Abelhas\n");
        printf("2. Gerenciar Sensores\n");
        printf("3. Relatórios\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &escolha) != 1) {
            printf("Entrada inválida.\n");
            return;
        }

        switch (escolha) {
            case 1: menuAbelhas(); break;
            case 2: menuSensores(); break;
            case 3: menuRelatorios(); break;
            case 4: printf("Saindo...\n"); break;
            default: printf("Opção inválida.\n");
        }

    } while (escolha != 4);
}


//======================================
// MENU ABELHAS
//======================================
void menuAbelhas() {
    int opcao;

    do {
        printf("\n==== GERENCIAR ABELHAS ====\n");
        printf("1. Cadastrar\n");
        printf("2. Listar\n");
        printf("3. Buscar por nome\n");
        printf("4. Alterar\n");
        printf("5. Remover\n");
        printf("6. Voltar\n");
        printf("Escolha: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Erro.\n");
            opcao = 0;
        }

        switch (opcao) {
            case 1: cadastrarAbelha(); break;
            case 2: listarAbelhas(); break;
            case 3: buscarAbelhaPorNome(); break;
            case 4: alterarAbelha(); break;
            case 5: removerAbelha(); break;
            case 6: break;
            default: if (opcao != 0) printf("Opção inválida.\n");
        }

    } while (opcao != 6);
}


//======================================
// FUNÇÕES DAS ABELHAS
//======================================

void cadastrarAbelha() {
    if (tAbelhas >= max_Abelhas) {
        printf("Limite de abelhas atingido.\n");
        return;
    }

    int i = tAbelhas;

    vetAbelhas[i].Id = i + 1;

    printf("\nNovo ID da abelha: %d\n", vetAbelhas[i].Id);

    printf("Nome popular: ");
    scanf(" %39[^\n]", vetAbelhas[i].nomepopular);

    printf("Nome científico: ");
    scanf(" %49[^\n]", vetAbelhas[i].nomeCientifico);

    printf("Região: ");
    scanf(" %29[^\n]", vetAbelhas[i].regiao);

    printf("Produção média de mel: ");
    scanf("%f", &vetAbelhas[i].producaomel);

    tAbelhas++;

    printf("Abelha cadastrada com sucesso!\n");
}


void listarAbelhas() {
    if (tAbelhas == 0) {
        printf("Nenhuma abelha cadastrada.\n");
        return;
    }

    printf("\n=== LISTA DE ABELHAS ===\n");

    for (int i = 0; i < tAbelhas; i++) {
        printf("\nID: %d\n", vetAbelhas[i].Id);
        printf("Nome popular: %s\n", vetAbelhas[i].nomepopular);
        printf("Nome científico: %s\n", vetAbelhas[i].nomeCientifico);
        printf("Região: %s\n", vetAbelhas[i].regiao);
        printf("Produção média: %.2f\n", vetAbelhas[i].producaomel);
    }
}


void buscarAbelhaPorNome() {
    char nome[40];
    printf("Digite o nome a buscar: ");
    scanf(" %39[^\n]", nome);

    for (int i = 0; i < tAbelhas; i++) {
        if (strcmp(vetAbelhas[i].nomepopular, nome) == 0) {
            printf("Encontrada! ");
            printf("ID: %d \n",vetAbelhas[i].Id);
            printf("Nome Popular: %s \n",vetAbelhas[i].nomepopular);
            printf("Nome Cientifico: %s \n",vetAbelhas[i].nomeCientifico);
            printf("Região: %s \n",vetAbelhas[i].regiao);
            printf("Produção de Mel (litros) : %.2f \n",vetAbelhas[i].producaomel);
            

            return;
        }
    }

    printf("Abelha não encontrada.\n");
}


void alterarAbelha(){
    int id;
    printf("Informe o ID da abelha: ");
    scanf("%d", &id);

    int pos = -1;

    for (int i = 0; i < tAbelhas; i++) {
        if (vetAbelhas[i].Id == id) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Abelha não encontrada.\n");
        return;
    }

    printf("Novo nome popular: ");
    scanf(" %39[^\n]", vetAbelhas[pos].nomepopular);

    printf("Novo nome científico: ");
    scanf(" %49[^\n]", vetAbelhas[pos].nomeCientifico);

    printf("Nova região: ");
    scanf(" %29[^\n]", vetAbelhas[pos].regiao);

    printf("Nova produção média: ");
    scanf("%f", &vetAbelhas[pos].producaomel);

    printf("Alterado com sucesso.\n");
}


void removerAbelha() {
    int id, confirmar;
    printf("ID da abelha para remover: ");
    scanf("%d", &id);

    int pos = -1;

    for (int i = 0; i < tAbelhas; i++) {
        if (vetAbelhas[i].Id == id) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Abelha não encontrada.\n");
        return;
    }

    printf("Confirma remover? 1=sim, 0=não: ");
    scanf("%d", &confirmar);

    if (confirmar != 1) {
        printf("Cancelado.\n");
        return;
    }

    for (int j = pos; j < tAbelhas - 1; j++) {
        vetAbelhas[j] = vetAbelhas[j + 1];
    }

    tAbelhas--;

    printf("Removida!\n");
}


//======================================
// MENU SENSORES
//======================================
void menuSensores() {
    int opcao;

    do {
        printf("\n==== GERENCIAR SENSORES ====\n");
        printf("1. Cadastrar\n");
        printf("2. Listar\n");
        printf("3. Buscar por ID de abelha\n");
        printf("4. Alterar\n");
        printf("5. Remover\n");
        printf("6. Voltar\n");
        printf("Escolha: ");

        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrarSensor(); break;
            case 2: listarSensores(); break;
            case 3: buscarSensorPorIdAbelha(); break;
            case 4: alterarSensor(); break;
            case 5: removerSensor(); break;
        }

    } while (opcao != 6);
}

int idAbelhaExiste(int id) {
    for (int i = 0; i < tAbelhas; i++) {
        if (vetAbelhas[i].Id == id) {
            return 1; // encontrado
        }
    }
    return 0; // não existe
}


//======================================
// FUNÇÕES DE SENSORES
//======================================

    

   void cadastrarSensor() {
    if (tSensores >= max_sensores) {
        printf("Limite atingido.\n");
        return;
    }

    if (tAbelhas == 0) {
        printf("Nenhuma abelha cadastrada ainda.\n");
        return;
    }

    int i = tSensores;
    int idsense;

    vetSensores[i].IDsensor = i + 1;

    printf("Tipo do sensor: ");
    scanf(" %29[^\n]", vetSensores[i].tipo);

    printf("Valor inicial: ");
    scanf("%f", &vetSensores[i].valor);

    printf("ID da abelha associada: ");
    scanf("%d", &idsense);

    while (!idAbelhaExiste(idsense)) {
        printf("ID de abelha não encontrado.\n");
        printf("Digite um ID válido: ");
        scanf("%d", &idsense);
    }

    vetSensores[i].IDabelha = idsense;
    tSensores++;

    printf("Sensor cadastrado com sucesso!\n");
}




void listarSensores() {
    if (tSensores == 0) {
        printf("Nenhum sensor cadastrado.\n");
        return;
    }

    printf("\n=== LISTA DE SENSORES ===\n");

    for (int i = 0; i < tSensores; i++) {
        printf("\nID Sensor: %d\n", vetSensores[i].IDsensor);
        printf("Tipo: %s\n", vetSensores[i].tipo);
        printf("Valor: %.2f\n", vetSensores[i].valor);
        printf("Abelha associada: %d\n", vetSensores[i].IDabelha);
    }
}
     
 

void buscarSensorPorIdAbelha() {
    int id;
    printf("Informe o ID da abelha: ");
    scanf("%d", &id);

    int encontrados = 0;

    for (int i = 0; i < tSensores; i++) {
        if (vetSensores[i].IDabelha == id) {
            printf("\nSensor #%d (%s) valor %.2f\n",
                vetSensores[i].IDsensor,
                vetSensores[i].tipo,
                vetSensores[i].valor
            );
            encontrados++;
        }
    }

    if (!encontrados)
        printf("Nenhum sensor associado a essa abelha.\n");
}

void alterarSensor() {
    int id;
    printf("ID do sensor: ");
    scanf("%d", &id);

    int pos = -1;
    for (int i = 0; i < tSensores; i++) {
        if (vetSensores[i].IDsensor == id) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Sensor não encontrado.\n");
        return;
    }

    printf("Novo tipo: ");
    scanf(" %29[^\n]", vetSensores[pos].tipo);

    printf("Novo valor: ");
    scanf("%f", &vetSensores[pos].valor);

   int novoId;
    printf("Nova abelha associada: ");
    scanf("%d", &novoId);

    while (!idAbelhaExiste(novoId)) {
        printf("ID inválido. Digite novamente: ");
        scanf("%d", &novoId);
    }

vetSensores[pos].IDabelha = novoId;


    printf("Alterado!\n");
}

void removerSensor() {
    int id, confirmar;
    printf("ID do sensor para remover: ");
    scanf("%d", &id);

    int pos = -1;

    for (int i = 0; i < tSensores; i++) {
        if (vetSensores[i].IDsensor == id) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Sensor não encontrado.\n");
        return;
    }

    printf("Confirmar remover? 1=sim: ");
    scanf("%d", &confirmar);

    if (confirmar != 1) {
        printf("Cancelado.\n");
        return;
    }

    for (int j = pos; j < tSensores - 1; j++) {
        vetSensores[j] = vetSensores[j + 1];
    }

    tSensores--;

    printf("Sensor removido!\n");
}


//======================================
// RELATÓRIOS

    // FUNÇÃO MENU DE RELATÓRIOS

    void MediaGeralMel(){
//Media geral da produção de mel
        if(tAbelhas==0){
            printf("\n: Nenhuma Abelha cadrastada:");
            return;
        }
        float SomaTotalMEL=0;
        for(int i=0;i<tAbelhas;i++){
            SomaTotalMEL=SomaTotalMEL+vetAbelhas[i].producaomel;
        }
        float MediaGeral=SomaTotalMEL/tAbelhas;

        printf("\n:===== RELATORIO ====:\n");
        printf("\n: ==== MEDIA GERAL DE PRODUCAO DE MEL ====:\n");
        printf("\n:Total de registros de abelhas analisadas: %d\n", tAbelhas);
        printf("\n: Acumulo total da producao de mel, 'litros por mes',: %.2f\n", SomaTotalMEL);
        printf("\n: Media Geral por Abelha, 'litros por mes',: %.2f\n", MediaGeral);
} 
    
//Temperatura media dos sensores
void MediaTemperatura(){
if(tSensores==0){
    printf("Nenhum sensor cadastrado para calcular media da temperatura:\n");
    return;
}
    float SomaTemp=0.0; //soma da temeperatura
     int contTemeperatura=0; //contegem da temperatura.
     for(int i=0; i< tSensores;i++){
        if(strcmp(vetSensores[i].tipo, "Temperatura")==0){
            SomaTemp=SomaTemp+vetSensores[i].valor;
            contTemeperatura++;
        }
     }
     printf(":\n======= MEDIA DA TEMPERATURA DOS SENSORES======:\n");
     if(contTemeperatura==0){
        printf("Nao existe registros para o tipo de temperatura:\n");
        return;
     }
      float mdTemperatura=SomaTemp/contTemeperatura;
      printf("Total de temperaturas lidas e analisadas: %d\n", contTemeperatura);
      printf("Media da temeperatura dos Sensores: %.2f\n", mdTemperatura);
}

//Quantidade de abelhas por cada regiao
void ContagemRegiao(){
    if(tAbelhas==0){
        printf("Nao existem Abelha para agrupar pela regiao:\n");
        return;
    }
          printf("====== QUANTIDADE DE ABELHAS POR REGIAO ======= \n");

           char regunica[max_Abelhas][30];  //regioes que serao unicas.
           int cont[max_Abelhas]={0}; //contagem
           int treg=0; //total de regioes.
           for(int i=0; i<tAbelhas; i++){
               int poRegiao=-1;//

                  for(int j=0; j<treg;j++){
                    if(strcmp(vetAbelhas[i].regiao, regunica[j])==0){
                        poRegiao=j;
                        break;
                    }
                  }
                  if(poRegiao==-1){
                    strcpy(regunica[treg], vetAbelhas[i].regiao);
                    poRegiao=treg;
                    treg++;
                  }
                   cont[poRegiao]++;
                     //Exibindo os resultados     
           }
            for(int i=0;i<treg;i++){
                         printf(" Regiao da Abelha %s, total de Abelhas %d\n", regunica[i],cont[i]);
                      }
                       printf("-------------------------------");
    
             
}
void menuRelatorios() {
    int opcaoR = 0;
    int confirmar04;

    do {
        printf("=== RELATORIOS ===:\n");
        printf("1. Média Geral da produção de mel\n");
        printf("2. Média de Temperatura dos Sensores\n");
        printf("3. Quantidade de Abelhas por regiao\n");
        printf("4. Voltar\n");
        printf("Escolha uma opcao do menu do Relatório: ");

        scanf("%d", &opcaoR);
        confirmar04 = opcaoR;

        switch (opcaoR) {
            case 1:
                MediaGeralMel();
                break;

            case 2:
                MediaTemperatura();
                break;

            case 3:
                ContagemRegiao();
                break;

            case 4:
                printf("----Voltando ao Menu principal-----:\n");
                break;

            default:
                printf("opcao escolhida invalida:\n");
                break;
        }

    } while (opcaoR != 4);
}
