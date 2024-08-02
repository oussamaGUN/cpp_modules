#include "Harl.hpp"

int main(int argc, char const *argv[])
{
    Harl call;
    call.complain("DEBUG");
    call.complain("INFO");
    call.complain("WARNING");
    call.complain("ERROR");
    return 0;
}
