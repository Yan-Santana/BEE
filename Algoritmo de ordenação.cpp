#include <stdio.h>

struct marca {
  int hh;
  int mm;
  int ss;
};

void adiciona_segundo(struct marca *tempo) {
  tempo->ss++;

  if (tempo->ss == 60) {
    tempo->ss = 0;
    tempo->mm++;

    if (tempo->mm == 60) {
      tempo->mm = 0;
      tempo->hh++;

      if (tempo->hh == 24)
        tempo->hh = 0;
    }
  }
}

int main(void) {
  struct marca horario;

  printf("Informe um horario (hh:mm:ss): ");
  scanf("%d:%d:%d", &horario.hh, &horario.mm, &horario.ss);
  adiciona_segundo(&horario);
  printf("Novo horário %02d:%02d:%02d\n", horario.hh, horario.mm, horario.ss);
  return 0;
}