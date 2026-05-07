#include <assert.h>
#include "../src/bib.hpp"

int main() {
    assert(fatorial(5) == 120);

    assert(ehPrimo(7) == true);
    assert(ehPrimo(4) == false);
    
    return 0;


}