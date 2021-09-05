#ifndef ASM_H
# define ASM_H

// extern	void	hello();
extern size_t ft_strlen(const char *s);
// extern 	int     ft_write(int, const void *, size_t);
extern ssize_t ft_read(int fildes, void *buf, size_t nbyte);
extern ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
extern char *ft_strcpy(char * dst, const char * src);
extern int ft_strcmp(const char *s1, const char *s2);
extern char *ft_strdup(const char *s1);

#endif