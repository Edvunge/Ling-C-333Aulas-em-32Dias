#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by Edvaldo Vunge on 04/03/2025.
//

struct Player {
  char name[20];
  int score;
};

int main(void){

  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "John");
  player1.score = 4;

  strcpy(player2.name, "Bro");
  player2.score = 5;

  printf("%s\n", player1.name);
  printf("%d\n", player1.score);

  printf("%s\n", player2.name);
  printf("%d\n", player2.score);
  return (0);
}


