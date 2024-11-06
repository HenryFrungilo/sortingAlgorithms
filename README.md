# Algoritmos de Ordenação

Este repositório contém implementações em [linguagem de programação] de diversos algoritmos de ordenação amplamente utilizados em ciência da computação. Cada algoritmo possui sua própria pasta com o código fonte, exemplos de uso e explicações detalhadas.

## Algoritmos Implementados

* **Bubble Sort:** 
    * Descrição: Algoritmo simples que compara elementos adjacentes e troca suas posições se estiverem na ordem errada. Repete esse processo até que a lista esteja ordenada.
    * Complexidade: O(n²) no pior e caso médio, O(n) no melhor caso (lista já ordenada).
* **Insertion Sort:**
    * Descrição: Insere cada elemento em sua posição correta em uma sublista já ordenada.
    * Complexidade: O(n²) no pior e caso médio, O(n) no melhor caso (lista quase ordenada).
* **Quick Sort:**
    * Descrição: Algoritmo de divisão e conquista que seleciona um pivô e particiona a lista em duas sublistas, uma com elementos menores que o pivô e outra com elementos maiores. Recursivamente aplica o mesmo processo às sublistas.
    * Complexidade: O(n log n) no caso médio, O(n²) no pior caso.
* **Selection Sort:**
    * Descrição: Encontra o menor elemento da lista e o coloca na primeira posição. Repete o processo para o restante da lista.
    * Complexidade: O(n²) em todos os casos.
* **Counting Sort:**
    * Descrição: Algoritmo não comparativo que assume que os elementos da entrada são inteiros não negativos e limitados a um certo intervalo. Conta o número de ocorrências de cada elemento e usa essa informação para colocar os elementos em suas posições corretas.
    * Complexidade: O(n + k), onde k é o intervalo dos valores.
* **Shell Sort:**
    * Descrição: Variante do insertion sort que compara elementos distantes e gradualmente diminui o intervalo de comparação.
    * Complexidade: A complexidade exata depende da sequência de intervalos, mas geralmente é melhor que O(n²).
## Gráfico para fins de comparação da eficiência dos algoritmos
![image](https://github.com/user-attachments/assets/078576b6-852b-4182-875d-168e1765fd26)
