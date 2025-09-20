#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

void*
mapped_file(char *filename){
	int	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return NULL;
	struct stat	fd_stat;
	if (fstat(fd, &fd_stat) == -1){
		close(fd);
		return NULL;
	}
	void	*maped_file = mmap(NULL, fd_stat.st_size + 1, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);
	((char *)maped_file)[fd_stat.st_size] = '\0';
	
	printf("%.*s\n", (int)fd_stat.st_size, (char *)maped_file);
	return maped_file;
}

int
main(int argc, char **argv){
	if (argc != 2) {return 1;}
	void	*file = mapped_file(argv[1]);
	if (!file) return 1; //TODO: ERROR HANDLING
}
