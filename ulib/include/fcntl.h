int open(const char *pathname, int flags);

#define O_RDONLY 0x0000
#define O_WRONLY 0x0001
#define O_RDWR 0x0002
#define O_CREATE 0x0200

#define O_CREAT O_CREATE
