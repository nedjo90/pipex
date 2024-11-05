# write

```c
#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t count);
```

## fd

le descripteur de fichier

## buf

le tampon à écrire

## count

la taille du tampon en octets

## retour

- `n >= 0` : Success => number of bytes written
- `-1`: Error (erno)