#include <stdio.h>
#include <mysql/mysql.h>
#include <stdlib.h>
#include <string.h>

int main(){
  MYSQL *connect = mysql_init(NULL);

  if(connect == NULL){
    fprintf(stderr, "Falha ao inicializar o MySQL.\n");
    return EXIT_FAILURE;
  }

  const char *host = "localhost";
  const char *user = "root";
  const char *password = "654321";
  const char *db = "terminalroot";
  unsigned int port = 3306; // Porta padrão do MySQL

  if (mysql_real_connect(connect, host, user, password, db, port, NULL, 0) == NULL) {
    fprintf(stderr, "Falha ao conectar ao MySQL: %s\n", mysql_error(connect));
    mysql_close(connect);
    return EXIT_FAILURE;
  }

  MYSQL_RES * res_set;
  MYSQL_ROW row;

  //char nome[100] = "Marcos Oliveira";
  char *nome = strdup("Alguém de Novo");
  if (!nome) {
    fprintf(stderr, "Erro ao alocar memória para nome\n");
    mysql_close(connect);
    return -1;
  }

   //char query[100];
   char *query = (char*)malloc(strlen(nome) + 50);
  if (!query) {
    fprintf(stderr, "Erro ao alocar memória para query\n");
    free(nome);
    mysql_close(connect);
    return -1;
  }

  sprintf(query, "INSERT INTO info VALUES(NULL, '%s')", nome);

  bool check_query = mysql_query(connect, query);
  if(check_query){
    fprintf(stderr, "Falha ao inserir os dados: %s\n", mysql_error(connect));
    mysql_close(connect);
    return -1;
  }

  printf("Dados inseridos com sucesso!\n");

  free(nome);
  free(query);
  mysql_close(connect);
  return EXIT_SUCCESS;
}
// gcc mysql-connect.c -lmysqlclient
