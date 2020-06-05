#include "types.h"
#include "user.h"

#define ONE 1

int main(int argc, char const *argv[])
{
	int* pointer;

	pointer = (void*)0;

	printf(ONE, "NULL Pointer Content: %p\n", *pointer);

	exit();
}
