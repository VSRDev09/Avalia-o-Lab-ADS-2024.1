# Repositório de Exercícios em C - Avaliação 2024.1

Este repositório contém três programas desenvolvidos em linguagem C como parte das atividades práticas da disciplina de Laboratório de Programação (2024.1). Os programas abordam manipulação de strings, tratamento de datas e estruturas com matrículas em disciplinas.

## 📝 Questões
---
### 1. Matrícula de Alunos em Disciplinas

**Arquivo:** `matricular_aluno.c`

Utiliza structs para armazenar informações de alunos e disciplinas. O programa simula a matrícula de um aluno em uma das três disciplinas disponíveis (Português, Matemática, História).

**Funcionalidades:**
- Verifica se a disciplina está lotada (máximo de 60 alunos).
- Realiza a matrícula e exibe uma mensagem de confirmação.

---
### 2. Inversão de Data

**Arquivo:** `inverter_data.c`

Este programa lê uma data no formato `dd/mm/aaaa`, inverte a ordem para `aaaa/mm/dd` e exibe a nova e a antiga data.

**Exemplo:**
```
Entrada: 22/05/2025
Saída:
Data Invertida: 2025/05/22
Data Original: 22/05/2025
```
### 3. Remoção de Caracteres Especiais

**Arquivo:** `remove_caracteres_especiais.c`

Este programa lê uma sequência de caracteres e remove todos os caracteres especiais, imprimindo apenas letras (maiúsculas e minúsculas).

**Exemplo:**
```
Entrada: a#B3!xY$
Saída: aBxY
```
## 🛠️ Compilação e Execução

Para compilar qualquer um dos programas, use um compilador C (como `gcc`):

```bash
gcc nome_do_arquivo.c -o programa
./programa
```

Exemplo:

```bash
gcc remove_caracteres_especiais.c -o limpa
./limpa

---

## 💡 Autor

Vinícius – Estudante de Análise e Desenvolvimento de Sistemas no IFBA

---

## 📌 Licença

Este projeto é de uso educacional e pode ser utilizado livremente para estudos e práticas.
