# Ordenação

Bem-vindo ao diretório **Ordenação**. Esta pasta contém exemplos de implementações de algoritmos de ordenação em C++, demonstrando diferentes técnicas e abordagens para a manipulação e ordenação de dados.

## Estrutura da Pasta

A pasta inclui os seguintes arquivos, cada um contendo uma implementação específica de algoritmos de ordenação:

1. **`ShellSortFutebol.cpp`**  
   Implementação do algoritmo Shell Sort para ordenar uma lista de equipes (`timezao`) com base em múltiplos critérios como pontos, vitórias e gols. O programa lê os dados de entrada, aplica a ordenação e exibe a lista resultante.

2. **`ShellSortCorruptos.cpp`**  
   Ordena uma lista de políticos com base no valor de desvios financeiros utilizando o algoritmo Shell Sort. O código lê dados de um arquivo de texto, realiza a ordenação e grava o resultado em um arquivo de saída.

3. **`SelectionSortFutebol.cpp`**  
   Implementação do algoritmo de ordenação por seleção (Selection Sort) para uma lista de equipes (`timezao`). O código lê os dados de entrada, aplica a ordenação por seleção e exibe a lista ordenada.

4. **`SelectionSortLoja.cpp`**  
   Ordena uma lista de produtos com base na avaliação usando o algoritmo de ordenação por seleção. O programa lê os dados de entrada, aplica a ordenação e exibe a lista de produtos ordenada.

5. **`InsertionSortNum.cpp`**  
   Implementação do algoritmo de ordenação por inserção (Insertion Sort) para um vetor de números de ponto flutuante. O código lê os números, aplica a ordenação e exibe os números em ordem crescente.

6. **`InsertionSortPoliticos.cpp`**  
   Ordena uma lista de políticos com base no valor de desvios utilizando o algoritmo de ordenação por inserção. O programa lê dados de um arquivo, realiza a ordenação e exibe os nomes dos políticos ordenados por valor.

7. **`InsertionSortAlunos.cpp`**  
   Implementa o algoritmo de ordenação por inserção para uma lista de alunos, ordenando-os por nota em ordem crescente. Inclui também uma função de busca para localizar um aluno pelo nome. O código exibe a lista ordenada e realiza a busca conforme solicitado.

8. **`InsertionSortSupermercado.cpp`**  
   Ordena uma lista de produtos com base no preço utilizando o algoritmo de ordenação por inserção. Em casos de empate no preço, os produtos são ordenados por nome. O código lê dados de entrada e exibe a lista de produtos ordenada.

## Descrição dos Algoritmos

- **Shell Sort**: Um algoritmo de ordenação eficiente que generaliza a ordenação por inserção para permitir trocas de elementos distantes. Utiliza uma sequência de "gaps" para dividir e conquistar o problema de ordenação.

- **Selection Sort**: Algoritmo de ordenação simples que divide o vetor em duas partes: a parte ordenada e a parte não ordenada. Em cada iteração, o menor (ou maior) elemento da parte não ordenada é selecionado e movido para a parte ordenada.

- **Insertion Sort**: Algoritmo de ordenação que constrói a lista ordenada um item de cada vez, inserindo cada novo item na posição correta entre os itens já ordenados.

## Compilação e Execução

Para compilar e executar os programas, siga as etapas abaixo:

1. **Compile o código**: Use um compilador C++ como `g++` para compilar os arquivos. Por exemplo:
   ```bash
   g++ ShellSortFutebol.cpp -o ShellSortFutebol
   ```

2. **Execute o programa**: Após a compilação, execute o arquivo gerado. Por exemplo:
   ```bash
   ./ShellSortFutebol
   ```

3. **Forneça os dados**: Insira os dados conforme solicitado pelo programa para ver a ordenação aplicada.

4. **Verifique o resultado**: O resultado da ordenação será exibido no terminal ou, no caso de alguns programas, gravado em um arquivo de saída.


