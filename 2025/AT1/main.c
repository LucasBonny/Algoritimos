#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

  Processo *dados = LerArquivo("processo_043_202409032338.csv", QNT_LINHAS);

  //Modelo de ordenação
  //OrdenarPorId(dados, QNT_LINHAS);
  //OrdenarPorData(dados, QNT_LINHAS);

  //Consulta
  // int IdParaBuscar = 11531;
  // int Total = ContarPorIdClasse(dados, QNT_LINHAS, IdParaBuscar);
  // printf("Total de processos com IdClasse %d: %d\n", IdParaBuscar, Total);

  // Total Por Assunto
  // int TotalAssuntos = ContarPorIdAssunto(dados, QNT_LINHAS);
  // printf("Total de IdAssuntos distintos: %d\n", TotalAssuntos);

  // ListarMultiplosAssuntos(dados, QNT_LINHAS);
  
  //Mostrando os dados de multiplos assuntos
  //  for (int i = 0; i < QNT_LINHAS; i++) {
  //     printf("ID: %d | Numero: %s | Data: %s | Classe: %d | Assunto: %d | Ano: %d\n",
  //         dados[i].Id,
  //         dados[i].Numero,
  //         dados[i].DataAjuizamento,
  //         dados[i].IdClasse[0],
  //         dados[i].IdAssunto[0],
  //         dados[i].AnoEleicao
  //       );
  //     }

  // Dias em tramitação
//   for (int i = 0; i < QNT_LINHAS; i++) {
//     int dias = DiasEmTramitacao(dados[i].DataAjuizamento);
//     printf("ID: %d | Data: %s | Dias em tramitação: %d\n",
//       dados[i].Id,
//       dados[i].DataAjuizamento,
//       dias);
//     }

    OrdenarPorId(dados, QNT_LINHAS);
    SalvarEmCsv("ordenado_por_id.csv", dados, QNT_LINHAS);

    OrdenarPorData(dados, QNT_LINHAS);
    SalvarEmCsv("ordenado_por_data.csv", dados, QNT_LINHAS);
      
    free(dados);
    return 0;
}