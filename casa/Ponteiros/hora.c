#include <stdio.h>
#include <time.h>
#include <unistd.h> // Para a função sleep

int main() {
    while (1) { // Loop infinito
        time_t tempo_atual;
        struct tm *info_tempo;

        // Obter a hora atual
        time(&tempo_atual);
        info_tempo = localtime(&tempo_atual);

        // Exibir a hora atual
        printf("Hora atual: %02d:%02d:%02d\n",
               info_tempo->tm_hour,
               info_tempo->tm_min,
               info_tempo->tm_sec);

        // Aguardar 60 segundos (1 minuto)
        sleep(60);
    }

    return 0;
}
