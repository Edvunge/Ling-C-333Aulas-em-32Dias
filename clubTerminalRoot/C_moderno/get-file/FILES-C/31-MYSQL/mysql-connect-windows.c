#include <stdio.h>
#include <mysql.h>

int main(){
  MYSQL *connect = mysql_init(NULL);

  if(connect == NULL){
    fprintf(stderr, "Falha ao inicializar o MySQL.\n");
    return -1;
  }

  const char *host = "localhost";
  const char *user = "root";
  const char *password = "654321";
  const char *db = "terminalroot";
  unsigned int port = 3306;

  if (mysql_real_connect(connect, host, user, password, db, port, NULL, 0) == NULL) {
    fprintf(stderr, "Falha ao conectar ao MySQL: %s\n", mysql_error(connect));
    mysql_close(connect);
    return -1;
  }

  printf("Conectado com sucesso ao MySQL!\n");

  mysql_close(connect);
  return 0;
}
// CMD: 
//   cd source\repos\Project1
//   gcc main.c -I"C:\Program Files\MySQL\MySQL Server 8.0\include" -L"C:\Program Files\MySQL\MySQL Server 8.0\lib" -lmysql
//   a.exe
// PowerShell:
//   cd .\source\repos\Project1\
//   gcc main.c -I"C:\Program Files\MySQL\MySQL Server 8.0\include" -L"C:\Program Files\MySQL\MySQL Server 8.0\lib" -lmysql
//   a.exe
