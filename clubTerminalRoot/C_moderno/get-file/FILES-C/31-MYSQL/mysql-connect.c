#include <stdio.h>
#include <mysql/mysql.h>

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

  printf("Conectado com sucesso ao MySQL!\n");

  mysql_close(connect);
  return EXIT_SUCCESS;
}
// gcc mysql-connect.c -lmysqlclient
