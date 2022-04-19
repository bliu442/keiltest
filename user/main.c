#include <stdio.h>
#include <stdint.h>

__attribute__((section(".dyn_text")))
int main(void)
{
    uint32_t i = 0;
    while(1)
    {
        ++i;
        --i;
    }

    return 0;
}
