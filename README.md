# Libft - 42Born2Code
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/948242368e8949f0b8fdee9e7db0916b)](https://app.codacy.com/app/fedefloris/Libft?utm_source=github.com&utm_medium=referral&utm_content=fedefloris/Libft&utm_campaign=Badge_Grade_Settings)
## Challenge
Libft is a 42 project that requires us to re-implement some standard C library functions + some additional ones.

For more details look at the [subject](subject.pdf).

## Using the project
```console
git clone https://github.com/fedefloris/Libft.git && cd Libft && make
```
Now you should see **libft.a** in the root folder.
```console
gcc your_file.c libft.a -I includes
```
Example of **your_file.c**:
```c
#include "libft.h"

int main(void)
{
  ft_printf("Hello %d\n", 42);
  return (0);
}
```

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE) file for details.
