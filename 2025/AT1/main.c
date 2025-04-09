#include <stdio.h>
#include <stdlib.h>
#include "processo.h"

#define QNT_LINHAS 250

int main() {
  Processo *dados = LerArquivo("arquivo.csv", QNT_LINHAS);

  for (int i = 0; i < QNT_LINHAS; i++) {
      printf("ID: %d | Numero: %s | Data: %s | Classe: %d | Assunto: %d | Ano: %d\n",
          dados[i].Id,
          dados[i].Numero,
          dados[i].DataAjuizamento,
          dados[i].IdClasse[0],
          dados[i].IdAssunto[0],
          dados[i].AnoEleicao
        );
  }

  free(dados);
  return 0;
}
