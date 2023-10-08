#include <stdio.h>
#include <unistd.h>

int main()
{
/*    pid_t parent_id = getppid();*/
    pid_t child_id = getpid();
    
    /*printf("Parent ID = %u\n", parent_id);*/
    printf("Child ID = %u\n", child_id);
    
    
}