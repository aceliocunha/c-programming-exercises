#include <stdio.h>
#include <stdbool.h>


typedef struct {
    bool q;
} DFF;


void clock_edge(DFF *ff, bool d, bool clk, bool *prev_clk) {
    if (!(*prev_clk) && clk) {  
        ff->q = d; 
    }
    *prev_clk = clk;
}

int main() {
    DFF ff = {0};
    bool prev_clk = 0; 

    bool clk_sequence[8] = {0,1,0,1,0,1,0,1}; 
    bool d_sequence[8] = {1,0,1,1,0,0,1,1}; 

    printf("CLK D -> Q\n");
    for (int i = 0; i < 8; i++) {
        clock_edge(&ff, d_sequence[i], clk_sequence[i], &prev_clk);
        printf(" %d %d -> %d\n", clk_sequence[i], d_sequence[i], ff.q);
    }
    return 0;
}