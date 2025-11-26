

# 📦 Sistema de Monitoramento de Colmeias (BeeMonitor C)

# 🏫 Informações do Projeto

**Título:** Sistema de Monitoramento de Abelhas Sem Ferrão (BeeMonitor C)
**🎓 Universidade:** Universidade Federal do Piauí – Campus Senador Helvídio Nunes de Barros
**💻 Curso:** Bacharelado em Sistemas de Informação
**📚 Disciplina:** Algoritmos e Programação I
**👩‍🏫 Professor(a):** Dra. Alcilene Dalília de Sousa

## 👥 Equipe:

* Danilo Nobre Hipólito
* Francisco Eduardo de Vasconcelos Costa
* Maria Raika Sousa Silva
* Maria Iwanda Campelo Silva
* Thais Araújo Rodrigues

---

# 📖 Descrição do Projeto

O **BeeMonitor C** é um sistema de cadastro e monitoramento de abelhas sem ferrão e sensores ambientais associados, desenvolvido integralmente em **linguagem C**.

O sistema permite ao usuário realizar operações de **cadastro, listagem, busca, alteração e remoção** de registros de abelhas e sensores, além de gerar **relatórios estatísticos** como médias e contagens.
O código utiliza obrigatoriamente:

* Estruturas de seleção
* Estruturas de repetição
* Vetores
* Funções para modularização

O programa implementa as seguintes áreas através de menus:

🐝 **Gerenciamento de Abelhas** | 🤖 **Gerenciamento de Sensores** | 📊 **Relatórios e Estatísticas**

---

# 📁 Estrutura do Projeto

```
Sistema_BeeMonitor/
├── 📄 trab_algo1.c       # Arquivo principal com todas as funcionalidades.
├── 📁 screenshots/       # Imagens das telas do sistema (demonstração visual).
└── 📄 README.md          # Documentação do projeto.
```

---

# ⚙️ Como Compilar e Executar

O projeto pode ser compilado utilizando o GCC (GNU Compiler Collection).

### 💻 Windows/Linux

```bash
# Compilar o código fonte
gcc trab_algo1.c -o beemonitor

# Executar o programa
./beemonitor
```

---

# ✨ Requisitos e Funcionalidades

O sistema implementa o **MENU PRINCIPAL** e três submenus, conforme os requisitos do trabalho.

---

## **1. 🐝 Gerenciamento de Abelhas**

### **Atributos**

| Atributo  | Detalhes                                                      |
| --------- | ------------------------------------------------------------- |
| Estrutura | `Abelha (struct)`                                             |
| Campos    | id, nomePopular, nomeCientifico, regiao, producaoMel (kg/mês) |

### **Operações**

* Cadastrar
* Listar
* Buscar por nome popular
* Alterar dados
* Remover

IDs são gerados automaticamente e a remoção reorganiza o vetor.

---

## **2. 🤖 Gerenciamento de Sensores**

### **Atributos**

| Atributo  | Detalhes                                                             |
| --------- | -------------------------------------------------------------------- |
| Estrutura | `SensorData (struct)`                                                |
| Campos    | IDsensor, tipo (temperatura, umidade, luminosidade), valor, IDabelha |

### **Operações**

* Cadastrar
* Listar
* Buscar por ID da abelha
* Alterar leitura
* Remover

IDs são gerados automaticamente e o cadastro exige um **IDabelha válido**.

---

## **3. 📊 Relatórios**

* 🍯 **Média Geral de Produção de Mel**
* 🌡️ **Média de Temperatura dos Sensores**
* 🌍 **Quantidade de Abelhas por Região**

---

# 🔧 Visão Geral das Funções

| Categoria  | Função                           | Descrição                                        |
| ---------- | -------------------------------- | ------------------------------------------------ |
| Abelhas    | `void cadastrarAbelha()`         | Adiciona uma abelha, gerando ID automaticamente. |
| Abelhas    | `void listarAbelhas()`           | Exibe todos os registros.                        |
| Abelhas    | `void buscarAbelhaPorNome()`     | Busca por nome popular.                          |
| Abelhas    | `void alterarAbelha()`           | Altera dados pelo ID.                            |
| Abelhas    | `void removerAbelha()`           | Remove e reorganiza o vetor.                     |
| Sensores   | `void cadastrarSensor()`         | Adiciona sensor validando IDabelha.              |
| Sensores   | `void listarSensores()`          | Lista todos os sensores cadastrados.             |
| Sensores   | `void buscarSensorPorIdAbelha()` | Lista sensores associados a uma abelha.          |
| Sensores   | `void alterarSensor()`           | Altera leitura, revalidando IDabelha.            |
| Sensores   | `void removerSensor()`           | Remove e reorganiza o vetor.                     |
| Relatórios | `void MediaGeralMel()`           | Calcula média da produção de mel.                |
| Relatórios | `void MediaTemperatura()`        | Calcula média dos sensores tipo "Temperatura".   |
| Relatórios | `void ContagemRegiao()`          | Conta abelhas por região.                        |
| Utilitária | `int idAbelhaExiste(int id)`     | Verifica se ID da abelha é válido.               |

---

# 🖼️ Demonstração Visual

Você deve incluir os seguintes prints na pasta **screenshots/**:

### 🎛️ Menu Principal

Tela inicial com todas as opções.

### 📝 Cadastro e Lista de Abelhas

* Entrada completa para cadastrar abelha
* Tela com pelo menos três registros listados

### 🤖 Cadastro de Sensor (validação incluída)

* Cadastro mostrando tipo, valor e ID da abelha
* Mensagem de sucesso após ID válido

### 🔎 Busca de Sensores por Abelha

* Sensores associados a um único ID de abelha

### ❌ Remoção e Reorganização

* Tela de confirmação
* Nova listagem mostrando o vetor reorganizado

### 📊 Relatórios

* Média Geral de Produção de Mel
* Contagem de Abelhas por Região

---

Se quiser, posso criar **versão com ícones coloridos**, **badges**, **logo personalizada**, ou uma **versão simplificada**. É só pedir!
