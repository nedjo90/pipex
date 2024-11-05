# OPEN

```c
#include <fcntl.h>

int open(const char *pathname, int flags, .../* mode_t mode */ );
```

## Pathname

emplacement courant de l'executable.

### Flag

- ``O_RDONLY`` Cette constante permet d'indiquer qu'il faut ouvrir le fichier en mode lecture seulement.
- ``O_WRONLY`` Cette constante permet d'indiquer qu'il faut ouvrir le fichier en mode écriture seulement.
- ``O_RDWR`` Cette constante permet d'indiquer qu'il faut ouvrir le fichier en mode lecture et écriture.
- ``O_APPEND`` Cette constante permet d'indiquer que le déplacement du fichier doit être défini à la fin du fichier avant chaque écriture.
- ``O_CREAT`` Cette constante permet de créer le fichier.
- ``O_DSYNC`` Cette constante permet d'indiquer que les opérations d'entrée/sortie d'écriture dans le descripteur de fichier doivent se terminer comme défini par l'achèvement de l'intégrité des données d'entrée/sortie synchronisées.
- ``O_EXCL`` Cette constante permet d'indiquer que si le fichier existe, il ne peut pas être créé et qu'il doit retourner un erreur dans errno.
- ``O_NOCTTY`` Cette constante permet d'indiquer que si l'ensemble et le chemin de fichier identifient un terminal, la fonction open() ne doit pas faire en sorte que le terminal devienne le terminal de contrôle du processus.
- ``O_NONBLOCK`` Cette constante permet d'indiquer que s'il est en mode lecture qu'il doit retourné sans délai et si elle est écriture, il doit bloquer le processus léger appelant jusqu'à ce qu'un processus léger ouvre le fichier en écriture.
- ``O_RSYNC`` Cette constante permet d'indiquer que les opérations d'entrée/sortie de lecture sur le descripteur de fichier doivent se terminer au même niveau d'intégrité que celui spécifié par les drapeaux ``O_DSYNC`` et ``O_SYNC``.
- ``O_SYNC`` Cette constante permet d'indiquer que les opérations d'entrée/sortie en écriture sur le descripteur de fichier doivent se terminer comme défini par l'achèvement de l'intégrité du fichier d'entrée/sortie synchronisé.
- ``O_TRUNC`` Cette constante permet d'indiquer que le fichier doit avoir la taille de 0 octets et donc que les données sont effacé s'il existe et a été ouvert avec succès par ``O_RDWR`` ou ``O_WRONLY``.
- ``O_CLOEXEC`` Cette constante permet d'activer le drapeau close-on-exec pour le nouveau descripteur de fichier. Cette constante est disponible à partir du noyau Linux 2.6.23.

### Mode

- ``S_IRWXU`` 00700 Cette valeur permet d'indiquer que l'utilisateur a la permission en lecture, écriture et d'exécution.
- ``S_IRUSR`` 00400 Cette valeur permet d'indiquer que l'utilisateur a la permission en lecture.
- ``S_IWUSR`` 00200 Cette valeur permet d'indiquer que l'utilisateur a la permission en écriture.
- ``S_IXUSR`` 00100 Cette valeur permet d'indiquer que l'utilisateur a la permission en exécution.
- ``S_IRWXG`` 00070 Cette valeur permet d'indiquer que le groupe a la permission en lecture, écriture et exécution.
- ``S_IRGRP`` 00040 Cette valeur permet d'indiquer que le groupe a la permission en lecture.
- ``S_IRGRP`` 00020 Cette valeur permet d'indiquer que le groupe a la permission en écriture.
- ``S_IXGRP`` 00010 Cette valeur permet d'indiquer que le groupe a la permission en exécution.
- ``S_IRWXO`` 00007 Cette valeur permet d'indiquer que tous ont la permission en lecture, écriture et d'exécution.
- ``S_IROTH`` 00004 Cette valeur permet d'indiquer que tous ont la permission en lecture.
- ``S_IWOTH`` 00002 Cette valeur permet d'indiquer que tous ont la permission en écriture.
- ``S_IXOTH`` 00001 Cette valeur permet d'indiquer que tous ont la permission en exécution.

### Retour

- `-1` : Cette valeur permet d'indiquer qu'une erreur s'est produite et la variable «errno» contiendra l'erreur.
- `n != -1` : Ces valeurs permettent d'indiquer qu'un descripteur pour le socket est accepté.