

---

# 📦 Sistema de Monitoramento de Colmeias (BeeMonitor C)

#  Informações do Projeto

Título: Sistema de Monitoramento de Abelhas Sem Ferrão (BeeMonitor C)
Universidade: Universidade Federal do Piauí – Campus Senador Helvídio Nunes de Barros
Curso: Bacharelado em Sistemas de Informação
Disciplina: Algoritmos e Programação I
Professor(a): Dra. Alcilene Dalília de Sousa

Equipe:

* Danilo Nobre Hipólito
* Francisco Eduardo de Vasconcelos Costa
* Thais Araújo Rodrigues

---


##  Modelo de Dados do Projeto BeeMonitor

---
# 📖 Descrição do Projeto

O BeeMonitor C é um sistema em linguagem C para cadastrar e monitorar abelhas sem ferrão e sensores ambientais.
Permite cadastro, listagem, busca, alteração, remoção e geração de relatórios simples (médias e contagens).
 O código possui é usa : estruturas de seleção, laços de repetição, vetores e funções.

---

# 📁 Estrutura do Projeto

* Sistema_BeeMonitor/
* trab_algo1.c
* screenshots/
* README.md

---

# ⚙️ Como compilar e executar

* Compilar: `gcc trab_algo1.c -o beemonitor`
* Executar: `./beemonitor`

---

#  Funcionalidades

## 🐝 Gerenciamento de Abelhas

* Cadastrar abelha

  * IDs gerados automaticamente
  * Validação de entrada (nome, região, produção)
  * Limite máximo de abelhas (definido no código)
* Listar abelhas

  * Exibe ID, nome popular, nome científico, região e produção
* Buscar abelha por nome popular

  * Pesquisa por texto e exibe registro encontrado
* Alterar dados da abelha

  * Exige ID válido e permite editar campos
* Remover abelha

  * Remove pelo ID e reorganiza o vetor (deslocamento à esquerda)

##  Gerenciamento de Sensores

* Cadastrar sensor

  * ID do sensor gerado automaticamente
  * Tipos aceitos: temperatura, umidade, luminosidade
  * Exige ID de abelha válido
  * Limite máximo de sensores (definido no código)
* Listar sensores

  * Exibe ID do sensor, tipo, valor e ID da abelha associada
* Buscar sensores por ID da abelha

  * Lista todos os sensores vinculados àquela abelha
* Alterar sensor

  * Permite alterar tipo ou valor, com revalidação do ID da abelha
* Remover sensor

  * Remove pelo ID e reorganiza o vetor

## 📊 Relatórios e estatísticas

* Média geral da produção de mel

  * Calcula média entre todas as abelhas cadastradas
* Média de temperatura dos sensores

  * Calcula média apenas das leituras tipo "Temperatura"
* Quantidade de abelhas por região

  * Agrupa e conta abelhas por região informada

---

# 🔧 Visão geral das funções

## Abelhas

* `void cadastrarAbelha()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Lê dados do usuário, valida e adiciona uma abelha (gera ID).

* `void listarAbelhas()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Mostra todas as abelhas cadastradas.

* `void buscarAbelhaPorNome()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Solicita nome popular e exibe o registro correspondente.

* `void alterarAbelha()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Solicita ID, valida e permite alterar campos da abelha.

* `void removerAbelha()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Solicita ID, remove o registro e reorganiza o vetor.

## Sensores

* `void cadastrarSensor()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Lê tipo, valor e IDabelha; valida o ID da abelha e adiciona o sensor.

* `void listarSensores()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Exibe todos os sensores cadastrados.

* `void buscarSensorPorIdAbelha()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Solicita ID da abelha e lista sensores associados.

* `void alterarSensor()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Solicita ID do sensor, permite alterar tipo/valor e revalida IDabelha.

* `void removerSensor()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Remove sensor por ID e reorganiza o vetor.

## Relatórios

* `void MediaGeralMel()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Calcula e exibe a média da produção de mel.

* `void MediaTemperatura()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Calcula e exibe a média das leituras tipo "Temperatura".

* `void ContagemRegiao()`

  * Argumentos: nenhum
  * Retorno: nenhum
  * Descrição: Conta e exibe a quantidade de abelhas por região.

## Utilitárias

* `int idAbelhaExiste(int id)`

  * Argumentos: id (int)
  * Retorno: 1 (existe) ou 0 (não existe)
  * Descrição: Verifica se o ID informado está cadastrado.

---
# 🖼️ Demonstração Visual (prints do sistema)

---

## **Menu Principal**
**Legenda:** Tela inicial do sistema, exibindo as três áreas principais: Abelhas, Sensores e Relatórios.

<img width="344" height="192" alt="Menu Principal" src="https://github.com/user-attachments/assets/ca1ce2fd-5c87-4f52-9b32-7faa35dc094a" />

---

## **Menu de Abelhas**
**Legenda:** Tela de gerenciamento de abelhas contendo opções de cadastro, listagem, busca, alteração e remoção.

<img width="346" height="212" alt="Menu Abelhas" src="https://github.com/user-attachments/assets/10a0218a-a777-4f5f-8f9b-ccf4235a36f6" />

---

## **Cadastrar Abelhas**
**Legenda:** Tela de entrada de dados de uma nova abelha (nome popular, nome científico, região e produção de mel).  
Primeira etapa:

<img width="509" height="186" alt="Cadastro Abelha 1" src="https://github.com/user-attachments/assets/e7f359eb-5126-48e3-b63b-e7060c09bf39" />

Segunda etapa:

<img width="494" height="192" alt="Cadastro Abelha 2" src="https://github.com/user-attachments/assets/6fde4e14-19af-42cf-854a-588ccd6b04a7" />

---

## **Listar Sensores**
 Exibe todos os sensores cadastrados, com ID, tipo, valor e ID da abelha associada.

<img width="367" height="333" alt="Listar Sensores" src="https://github.com/user-attachments/assets/61881fae-5357-4a52-bc00-d170d2e5c89d" />

---

## **Buscar Sensores por ID da Abelha**
 Lista todos os sensores vinculados a uma abelha específica, usando o ID dela.

<img width="423" height="317" alt="Buscar Sensor" src="https://github.com/user-attachments/assets/1befef40-5aae-41d3-ac78-24244c200d61" />

---

## **Remoção e Reorganização**
 Demonstra a exclusão de um sensor/abelha e a reorganização automática do vetor.

<img width="394" height="303" alt="Remocao Sensor" src="https://github.com/user-attachments/assets/382d06e7-77f6-44db-b3b0-981555d4614e" />

---

## **Relatório — Média de Produção de Mel**
 Mostra o cálculo da média geral da produção de mel entre todas as abelhas cadastradas.

<img width="706" height="419" alt="Relatorio Media Mel" src="https://github.com/user-attachments/assets/76e77fb2-e602-4c56-b19d-e937a7d679e5" />

---

## **Relatório — Média de Temperatura**
 Exibe a média das leituras de sensores do tipo “Temperatura”.

<img width="572" height="267" alt="Relatorio Media Temperatura" src="https://github.com/user-attachments/assets/f04404ae-05ee-4104-9e1b-5b1fb9e801db" />

---

## **Relatório — Contagem por Região**
 Mostra quantas abelhas existem em cada região cadastrada no sistema.

<img width="597" height="206" alt="Contagem Regiao" src="https://github.com/user-attachments/assets/dae118ff-3c0b-4f30-a9b2-03179cbe8613" />

---
#  Bugs e Limitações Conhecidas

• Ao remover uma abelha que possui sensores associados, os sensores continuam relacionados ao ID da abelha removida.  
  Ou seja, os sensores ficam "soltos" apontando para um ID que já não existe.

• A busca por nome de abelha é sensível a maiúsculas e minúsculas.  
  Para encontrar um registro pelo nome popular, o usuário deve digitar exatamente igual ao que foi cadastrado, sem diferença de letras maiúsculas/minúsculas.

