#include "types.h"
#include "user.h"

int main(int argc, char const *argv[])
{
    int pid = fork();
    if (pid == 0)
    {
	    printf(1, "pid: %d,        page_id: 2,  result: %x\n\n", pid, (void*)shmget(2));
	    printf(1, "pid: %d,        page_id: 3,  result: %x\n\n", pid, (void*)shmget(3));
	    printf(1, "pid: %d,        page_id: 1,  result: %x\n\n", pid, (void*)shmget(1));
	    printf(1, "pid: %d,        page_id: 2,  result: %x\n\n", pid, (void*)shmget(2));

        exit();
    }

	printf(1, "pid: %d,        page_id: 1,  result: %x\n\n", pid, (void*)shmget(1));
	printf(1, "pid: %d,        page_id: 2,  result: %x\n\n", pid, (void*)shmget(2));
	printf(1, "pid: %d,        page_id: 2,  result: %x\n\n", pid, (void*)shmget(2));
	printf(1, "pid: %d,        page_id: 3,  result: %x\n\n", pid, (void*)shmget(3));
	printf(1, "pid: %d,        page_id: 8,  result: %x\n\n", pid, (void*)shmget(8));
	printf(1, "pid: %d,        page_id: 1,  result: %x\n\n", pid, (void*)shmget(1));

    int j = 0;
    for (int i = 0; i < 99999999; i++)
    {
        j++;
    }

	printf(1, "dead father.\n");
	exit();
}
