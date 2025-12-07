# 📚 C++ Module 00

Bem-vindo ao repositório do **C++ Module 00**. Este módulo é o primeiro passo na jornada de aprendizagem de C++ na 42, focado em introduzir os conceitos básicos da linguagem, diferindo-a do C.

Aqui exploramos Namespaces, Classes, Funções Membro, Streams de Entrada/Saída (`iostream`), Listas de Inicialização, `static`, `const` e muito mais.

---

## 📂 Estrutura do Projeto

Este repositório contém 3 exercícios prinicipais:

| Exercício | Nome | Descrição |
|-----------|------|-----------|
| **ex00** | Megaphone | Introdução básica a I/O e manipulação de strings. |
| **ex01** | PhoneBook | Criação de uma classe complexa, manipulação de arrays de objetos e fluxo de controle. |
| **ex02** | Job of your dreams | Reconstrução de uma classe perdida (`Account`) baseada em um log e um header file. |

---

## 🚀 Como Usar

Cada exercício possui seu próprio diretório e `Makefile`. Abaixo estão as instruções detalhadas para cada um.

### 📢 ex00: Megaphone

Um programa simples que converte tudo o que é passado como argumento para letras maiúsculas. Se nenhum argumento for passado, ele reclama de forma barulhenta!

**Compilação e Execução:**
```bash
cd ex00
make
./megaphone "shhhhh... I think the students are asleep..."
# Saída: SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

### 📒 ex01: PhoneBook

Um software de lista telefônica que permite armazenar até 8 contatos. Se um 9º contato for adicionado, o mais antigo é substituído.

**Comandos Disponíveis:**
- `ADD`: Adiciona um novo contato (Nome, Sobrenome, Apelido, Telefone, Segredo).
- `SEARCH`: Exibe a lista de contatos e permite visualizar detalhes de um índice específico.
- `EXIT`: Encerra o programa e perde os contatos (na memória RAM).

**Compilação e Execução:**
```bash
cd ex01
make
./phonebook
```

### 🏦 ex02: Job of your dreams (GlobalBanksters)

Neste exercício, o objetivo é recriar o arquivo `Account.cpp` que foi perdido, baseando-se apenas no header `Account.hpp` e em um arquivo de log de referência. O programa resultante deve gerar um output idêntico ao log fornecido.

**Compilação e Execução:**
```bash
cd ex02
make
./tests
```
> Compare a saída com o arquivo de log original para verificar a correção.

---

## 🛠️ Comandos do Makefile

Todos os projetos incluem um `Makefile` com as seguintes regras padrão:

- `make`: Compila o projeto.
- `make clean`: Remove arquivos objetos (.o).
- `make fclean`: Remove arquivos objetos e o executável.
- `make re`: Limpa tudo e recompila do zero.

---

<div align="center">
    <i>Desenvolvido com 💻 e ☕</i>
</div>