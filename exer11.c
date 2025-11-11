#include<stdio.h>
#include<pthread.h>

#define NUM_THREADS 5

int contador = 0;

pthread_mutex_t = mutex;

void *fucaoThread(void *arg){

  pthread_mutex_lock(&mutex);
  contador++;
  printf("Contador: %d\n", contador);
  pthread_mutex_unlock(&mutex);
  return NULL;
  
  int main(){
    
    pthread_t threads[NUM_THREADS];
    pthread_mutex_init(&mutex, NULL);
    
    for (int i = 0; i<NUM_THREADS; i++){
      pthread_create(&threads[i], NULL, fucaoThread, NULL);
    }
    
    for (int i = 0;  i<NUM_THREADS; i++){
      pthread_join(&threads[i], NULL);
    }
    
    
  pthread_mutex_destroy(&mutex);
  return 0;
  
  }
  
  
  

}