#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    puts("FeDEX");
    int ret;
    char *cmd[] = { "ls", "-l", (char *)0 };
    char *env[] = {};
    ret = execve ("/bin/ls", cmd, env);

}

// https://fineas.github.io/FeDEX/test/a.out
// https://fineas.github.io/FeDEX/test/bin32