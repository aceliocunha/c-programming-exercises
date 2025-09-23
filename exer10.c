#include<stdio.h>

//SR:set-Reset

int ff_SR(int S, int R, int Q){
    if (S ==0 && R == 0) return Q;
    else if (S == 0 && R == 1) return 0;
    else if (S == 1 && R == 0) return 1;
    else {
        printf("Proibido (S=R=1)\n");
        return Q; // como prevensão
    }
}

//D: Data (Q segue D)

int ff_D(int D){
    return D;
}

// T: Toggle
int ff_T(int T, int Q){
    if (T == 0) return Q;
    else return !Q;
}



// jk: Combina Set-Reset-Toggle

int ff_JK(int J, int K, int Q){
    if (J == 0 && K == 0) return Q;
    else if (J == 0 && K == 1) return 0;
    else if (J == 1 && K == 0) return 1;
    else  return !Q;
}

int main(void){
    
    
    int Q = 0;
    
    int S, R, D, T, J, K;
    
    printf("Flip-Flop em C\n");
    printf("Estado inicial Q = %d\n\n", Q);
    
    for (int i = 0; i< 3; i ++){
        printf("\nPulso %d:\n", i + 1);
        
        //----------SR----------------
        printf("SR -> Digite S e R: ");
        scanf("%d %d", &S, &R);
        Q = ff_SR(S, R, Q);
        printf("Q = %d\n", Q);
        
        //----------D----------------
        printf("D -> Digite D ");
        scanf("%d", &D);
        Q = ff_D(D);
        printf("Q = %d\n", Q);
        
        //-------------T---------------
        
        printf("T -> Digite T: ");
        scanf("%d", &T);
        Q = ff_T(T, Q);
        printf("Q = %d\n", Q);
        
        
        //------------JK----------------
        printf("JK -> Digite J e K: ");
        scanf("%d %d", &J, &K);
        Q = ff_JK(J, K, Q);
        printf("Q = %d\n", Q);
    }
    
    return 0;
    
    

}
