# read

```c
#include <unistd.h>

ssize_t read(int fildes, void *buf, size_t nbyte);
```

## fildes

le descripteur de fichier

## buf

le tampon allant recevoir les données

## nbyte

la taille du tampon en octets

## retour

- `n >= 0` : Success => number of bytes read
- `-1`: Error (erno)