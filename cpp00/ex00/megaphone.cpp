#include <iostream>
int main(int ac, char const *av[])
{
    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << std::endl;
        return 0;
    }
    int i = 1;
    int j = 0;
    while (i < ac) {
        j = 0;
        while (av[i][j] != '\0') {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                std::cout << (char)(av[i][j] - 32);
            else
                std::cout << av[i][j];
            j++;
        }
        if (i + 1 != ac)
            std::cout << ' ';
        i++;
    }
    std::cout << std::endl;
    return 0;
}
