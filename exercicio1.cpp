#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main() {
printf("ID do processo = %i\n", getpid() );
printf("ID do processo pai = %i\n", getppid() );
printf("ID do usuario = %i\n", getuid() );
printf("ID do grupo = %i\n", getgid() );
return 0;
}

