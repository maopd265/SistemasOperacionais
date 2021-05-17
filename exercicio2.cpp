#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include<locale.h>
int main() {
 
 
printf("ID do processo pai = %i\n", getppid() );
 if ( execvp("./processo", NULL) < 0)
printf("Erro na criacao do processo\n");
return 0;
}

