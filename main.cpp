#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;

struct registro {
    string nomeProduto;
    int qtdVendida;
    float precoUnitario;
    string dataVenda;
};

vector<registro> bubbleSort(vector<registro>);
vector<registro> insertionSort(vector<registro>);
vector<registro> selectionSort(vector<registro>);
vector<registro> countingSort(vector<registro>);
vector<registro> shellSort(vector<registro>);
vector<registro> quickSort(vector<registro>);

vector<registro> gerarRegistrosAleatorios(int);

int main() {
    vector<registro> registros1000 = gerarRegistrosAleatorios(1000);
    vector<registro> registros100000 = gerarRegistrosAleatorios(100000);
    vector<registro> registros1milhao = gerarRegistrosAleatorios(1000000);

    // Metrica de tempo consumido pelo bubble sort para ordenar 1000 registros por preco unitario
    cout << "Iniciando ordenacao de 1000 registros por preco unitario com bubble sort..." << endl;
    auto inicio = chrono::high_resolution_clock::now();
    bubbleSort(registros1000);
    auto fim = chrono::high_resolution_clock::now();
    int tempoBubbleSort1000 = chrono::duration_cast<chrono::milliseconds>(fim - inicio).count();
    cout << "Iniciando ordenacao de 1000 registros por preco unitario com insertion sort..." << endl;
    auto inicio4 = chrono::high_resolution_clock::now();
    insertionSort(registros1000);
    auto fim4 = chrono::high_resolution_clock::now();
    int tempoInsertionSort1000 = chrono::duration_cast<chrono::milliseconds>(fim4 - inicio4).count();
    cout << "Iniciando ordenacao de 1000 registros por preco unitario com selection sort..." << endl;
    auto inicio5 = chrono::high_resolution_clock::now();
    selectionSort(registros1000);
    auto fim5 = chrono::high_resolution_clock::now();
    int tempoSelectionSort1000 = chrono::duration_cast<chrono::milliseconds>(fim5 - inicio5).count();
    cout << "Iniciando ordenacao de 1000 registros por preco unitario com counting sort..." << endl;
    auto inicio6 = chrono::high_resolution_clock::now();
    countingSort(registros1000);
    auto fim6 = chrono::high_resolution_clock::now();
    int tempoCountingSort1000 = chrono::duration_cast<chrono::milliseconds>(fim6 - inicio6).count();
    cout << "Iniciando ordenacao de 1000 registros por preco unitario com shell sort..." << endl;
    auto inicio7 = chrono::high_resolution_clock::now();
    shellSort(registros1000);
    auto fim7 = chrono::high_resolution_clock::now();
    int tempoShellSort1000 = chrono::duration_cast<chrono::milliseconds>(fim7 - inicio7).count();
    cout << "Iniciando ordenacao de 1000 registros por preco unitario com quick sort..." << endl;
    auto inicio8 = chrono::high_resolution_clock::now();
    quickSort(registros1000);
    auto fim8 = chrono::high_resolution_clock::now();
    int tempoQuickSort1000 = chrono::duration_cast<chrono::milliseconds>(fim8 - inicio8).count();
    cout << "Iniciando ordenacao de 100000 registros por preco unitario com bubble sort..." << endl;
    auto inicio2 = chrono::high_resolution_clock::now();
    bubbleSort(registros100000);
    auto fim2 = chrono::high_resolution_clock::now();
    int tempoBubbleSort100000 = chrono::duration_cast<chrono::milliseconds>(fim2 - inicio2).count();
    cout << "Iniciando ordenacao de 100000 registros por preco unitario com insertion sort..." << endl;
    auto inicio9 = chrono::high_resolution_clock::now();
    insertionSort(registros100000);
    auto fim9 = chrono::high_resolution_clock::now();
    int tempoInsertionSort100000 = chrono::duration_cast<chrono::milliseconds>(fim9 - inicio9).count();
    cout << "Iniciando ordenacao de 100000 registros por preco unitario com selection sort..." << endl;
    auto inicio10 = chrono::high_resolution_clock::now();
    selectionSort(registros100000);
    auto fim10 = chrono::high_resolution_clock::now();
    int tempoSelectionSort100000 = chrono::duration_cast<chrono::milliseconds>(fim10 - inicio10).count();
    cout << "Iniciando ordenacao de 100000 registros por preco unitario com counting sort..." << endl;
    auto inicio11 = chrono::high_resolution_clock::now();
    countingSort(registros100000);
    auto fim11 = chrono::high_resolution_clock::now();
    int tempoCountingSort100000 = chrono::duration_cast<chrono::milliseconds>(fim11 - inicio11).count();
    cout << "Iniciando ordenacao de 100000 registros por preco unitario com shell sort..." << endl;
    auto inicio12 = chrono::high_resolution_clock::now();
    shellSort(registros100000);
    auto fim12 = chrono::high_resolution_clock::now();
    int tempoShellSort100000 = chrono::duration_cast<chrono::milliseconds>(fim12 - inicio12).count();
    cout << "Iniciando ordenacao de 100000 registros por preco unitario com quick sort..." << endl;
    auto inicio13 = chrono::high_resolution_clock::now();
    quickSort(registros100000);
    auto fim13 = chrono::high_resolution_clock::now();
    int tempoQuickSort100000 = chrono::duration_cast<chrono::milliseconds>(fim13 - inicio13).count();
    cout << "Iniciando ordenacao de 1000000 registros por preco unitario com bubble sort..." << endl;
    auto inicio3 = chrono::high_resolution_clock::now();
    bubbleSort(registros1milhao);
    auto fim3 = chrono::high_resolution_clock::now();
    int tempoBubbleSort1milhao = chrono::duration_cast<chrono::milliseconds>(fim3 - inicio3).count();
    cout << "Iniciando ordenacao de 1000000 registros por preco unitario com insertion sort..." << endl;
    auto inicio14 = chrono::high_resolution_clock::now();
    insertionSort(registros1milhao);
    auto fim14 = chrono::high_resolution_clock::now();
    int tempoInsertionSort1milhao = chrono::duration_cast<chrono::milliseconds>(fim14 - inicio14).count();
    cout << "Iniciando ordenacao de 1000000 registros por preco unitario com selection sort..." << endl;
    auto inicio15 = chrono::high_resolution_clock::now();
    selectionSort(registros1milhao);
    auto fim15 = chrono::high_resolution_clock::now();
    int tempoSelectionSort1milhao = chrono::duration_cast<chrono::milliseconds>(fim15 - inicio15).count();
    cout << "Iniciando ordenacao de 1000000 registros por preco unitario com counting sort..." << endl;
    auto inicio16 = chrono::high_resolution_clock::now();
    countingSort(registros1milhao);
    auto fim16 = chrono::high_resolution_clock::now();
    int tempoCountingSort1milhao = chrono::duration_cast<chrono::milliseconds>(fim16 - inicio16).count();
    cout << "Iniciando ordenacao de 1000000 registros por preco unitario com shell sort..." << endl;
    auto inicio17 = chrono::high_resolution_clock::now();
    shellSort(registros1milhao);
    auto fim17 = chrono::high_resolution_clock::now();
    int tempoShellSort1milhao = chrono::duration_cast<chrono::milliseconds>(fim17 - inicio17).count();
    cout << "Iniciando ordenacao de 1000000 registros por preco unitario com quick sort..." << endl;
    auto inicio18 = chrono::high_resolution_clock::now();
    quickSort(registros1milhao);
    auto fim18 = chrono::high_resolution_clock::now();
    int tempoQuickSort1milhao = chrono::duration_cast<chrono::milliseconds>(fim18 - inicio18).count();
    cout << "== == == == Tabela de Metricas == == ==" << endl;
    cout << "Algoritmo | Mil registros | 100 mil registros | 1 milhao de registros" << endl;
    cout << "Bubble Sort " << tempoBubbleSort1000 << "ms | " << tempoBubbleSort100000 << "ms | " << tempoBubbleSort1milhao << "ms" << endl;
    cout << "Insertion Sort " << tempoInsertionSort1000 << "ms | " << tempoInsertionSort100000 << "ms | " << tempoInsertionSort1milhao << "ms" << endl;
    cout << "Selection Sort " << tempoSelectionSort1000 << "ms | " << tempoSelectionSort100000 << "ms | " << tempoInsertionSort1milhao << "ms" << endl;
    cout << "Counting Sort " << tempoCountingSort1000 << "ms | " << tempoCountingSort100000 << "ms | " << tempoInsertionSort1milhao << "ms" << endl;
    cout << "Shell Sort " << tempoShellSort1000 << "ms | " << tempoShellSort100000 << "ms | " << tempoShellSort1milhao << "ms" << endl;
    cout << "Quick Sort " << tempoQuickSort1000 << "ms | " << tempoQuickSort100000 << "ms | " << tempoQuickSort1milhao << "ms" << endl;
    cout << "== == == == == == == == == == == == ==" << endl;

    return 0;
}

vector<registro> bubbleSort(vector<registro> registros) {
    for (int i = 0; i < registros.size(); i++) {
        for (int j = 0; j < registros.size() - 1; j++) {
            if (registros[j].precoUnitario > registros[j + 1].precoUnitario) {
                registro temp = registros[j];
                registros[j] = registros[j + 1];
                registros[j + 1] = temp;
            }
        }
    }
    return registros;
}

vector<registro> insertionSort(vector<registro> registros) {
    for (int i = 1; i < registros.size(); i++) {
        registro temp = registros[i];
        int j = i - 1;
        while (j >= 0 && registros[j].precoUnitario > temp.precoUnitario) {
            registros[j + 1] = registros[j];
            j--;
        }
        registros[j + 1] = temp;
    }
    return registros;
}

vector<registro> selectionSort(vector<registro> registros) {
    for (int i = 0; i < registros.size(); i++) {
        int menor = i;
        for (int j = i + 1; j < registros.size(); j++) {
            if (registros[j].precoUnitario < registros[menor].precoUnitario) {
                menor = j;
            }
        }
        registro temp = registros[i];
        registros[i] = registros[menor];
        registros[menor] = temp;
    }
    return registros;
}

vector<registro> countingSort(vector<registro> registros) {
    for (auto &reg : registros) {
        reg.precoUnitario *= 100;
    }

    int maior = registros[0].precoUnitario;
    for (int i = 1; i < registros.size(); i++) {
        if (registros[i].precoUnitario > maior) {
            maior = registros[i].precoUnitario;
        }
    }
    vector<int> count(maior + 1, 0);
    for (int i = 0; i < registros.size(); i++) {
        count[registros[i].precoUnitario]++;
    }
    for (int i = 1; i < count.size(); i++) {
        count[i] += count[i - 1];
    }
    vector<registro> ordenado(registros.size());
    for (int i = registros.size() - 1; i >= 0; i--) {
        ordenado[count[registros[i].precoUnitario] - 1] = registros[i];
        count[registros[i].precoUnitario]--;
    }

    for (auto &reg : ordenado) {
        reg.precoUnitario /= 100;
    }

    return ordenado;
}

vector<registro> shellSort(vector<registro> registros) {
    for (int gap = registros.size() / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < registros.size(); i++) {
            registro temp = registros[i];
            int j;
            for (j = i; j >= gap && registros[j - gap].precoUnitario > temp.precoUnitario; j -= gap) {
                registros[j] = registros[j - gap];
            }
            registros[j] = temp;
        }
    }
    return registros;
}

vector<registro> quickSort(vector<registro> registros) {
    if (registros.size() <= 1) {
        return registros;
    }
    registro pivo = registros[registros.size() / 2];
    vector<registro> menores, iguais, maiores;
    for (int i = 0; i < registros.size(); i++) {
        if (registros[i].precoUnitario < pivo.precoUnitario) {
            menores.push_back(registros[i]);
        } else if (registros[i].precoUnitario == pivo.precoUnitario ) {
            iguais.push_back(registros[i]);
        } else {
            maiores.push_back(registros[i]);
        }
    }
    menores = quickSort(menores);
    maiores = quickSort(maiores);
    menores.insert(menores.end(), iguais.begin(), iguais.end());
    menores.insert(menores.end(), maiores.begin(), maiores.end());
    return menores;
}

vector<registro> gerarRegistrosAleatorios(int n) {
    vector<registro> registros;
    for (int i = 0; i < n; i++) {
        registro r;
        r.nomeProduto = "Produto " + to_string(i);
        r.qtdVendida = (rand() - 1) % 100;
        r.precoUnitario = (rand() % 1000) / 100.0;
        r.dataVenda = to_string(rand() % 31) + "/" + to_string(rand() % 12) + "/" + to_string(rand() % 100);
        registros.push_back(r);
    }
    return registros;
}
