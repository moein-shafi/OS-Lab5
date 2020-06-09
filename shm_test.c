#include "types.h"
#include "user.h"

int main(int argc, char const *argv[])
{
	printf(1, "page_id: 1,  result: %x\n\n", (void*)shmget(1));
/*	printf(1, "page_id: 2,  result: %x\n\n", (void*)shmget(2));
	printf(1, "page_id: 2,  result: %x\n\n", (void*)shmget(2));
	printf(1, "page_id: 3,  result: %x\n\n", (void*)shmget(3));
	printf(1, "page_id: 8,  result: %x\n\n", (void*)shmget(8));
	printf(1, "page_id: 1,  result: %x\n\n", (void*)shmget(1));
*/	exit();
}
