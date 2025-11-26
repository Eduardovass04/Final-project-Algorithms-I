Certo — fiz uma versão **simples, sem tabelas**, com tudo em listas claras, uma seção por linha (pronto para colar no README). Mantive as funcionalidades e a visão das funções no formato que você pediu.

---

# 📦 Sistema de Monitoramento de Colmeias (BeeMonitor C)

# 🏫 Informações do Projeto

Título: Sistema de Monitoramento de Abelhas Sem Ferrão (BeeMonitor C)
Universidade: Universidade Federal do Piauí – Campus Senador Helvídio Nunes de Barros
Curso: Bacharelado em Sistemas de Informação
Disciplina: Algoritmos e Programação I
Professor(a): Dra. Alcilene Dalília de Sousa

Equipe:

* Danilo Nobre Hipólito
* Francisco Eduardo de Vasconcelos Costa
* Maria Raika Sousa Silva
* Maria Iwanda Campelo Silva
* Thais Araújo Rodrigues

---

# 📖 Descrição do Projeto

O BeeMonitor C é um sistema em linguagem C para cadastrar e monitorar abelhas sem ferrão e sensores ambientais.
Permite cadastro, listagem, busca, alteração, remoção e geração de relatórios simples (médias e contagens).
Código usa: estruturas de seleção, laços de repetição, vetores e funções.

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

# ✨ Funcionalidades

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

## 🤖 Gerenciamento de Sensores

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

# 🖼️ Demonstração visual (sugestão de prints)

* Menu principal
*<img width="344" height="192" alt="Captura de tela 2025-11-26 201629" src="https://github.com/user-attachments/assets/ca1ce2fd-5c87-4f52-9b32-7faa35dc094a" />
* Menu de Abelhas
* <img width="346" height="212" alt="Captura de tela 2025-11-26 201718" src="https://github.com/user-attachments/assets/10a0218a-a777-4f5f-8f9b-ccf4235a36f6" />
* Cadastrar Abelhas
* <img width="509" height="186" alt="Captura de tela 2025-11-26 201953" src="https://github.com/user-attachments/assets/e7f359eb-5126-48e3-b63b-e7060c09bf39" />
* Busca de sensores por ID da abelha
* <img width="477" height="171" alt="Captura de tela 2025-11-26 202244" src="https://github.com/user-attachments/assets/c4c4abed-8657-49f0-ba2d-e1c900f87b08" />
* Remoção e reorganização (antes e depois)
* <img width="391" height="259" alt="Captura de tela 2025-11-26 202517" src="https://github.com/user-attachments/assets/1b9e642f-c4c2-496c-ba4b-56b41654af21" />
* Saída dos relatórios (média de mel e contagem por região)
* 

---

Se quiser, eu deixo **a versão ainda mais enxuta** (sem emojis) ou **traduzo para inglês**. Quer que eu remova os emojis também?
