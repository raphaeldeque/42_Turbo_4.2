#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "bsq.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	output[200];
	if (argc == 0)
		return (1);
	fd = open(argv[1], O_RDONLY);
	read(fd, output, (10 * 18));
	close(fd);
	bsq(output);
	return (0);
}
