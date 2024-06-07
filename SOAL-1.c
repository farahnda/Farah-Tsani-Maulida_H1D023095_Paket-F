#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 5

typedef struct{
int count;
int front;
int rear;
int item[MAXQUEUE];
} QUEUE;
QUEUE antrean;

void inisialisasi(QUEUE *Q){
Q->count=0;
Q->front=0;
Q->rear=0;
}

int isEmpty(QUEUE *Q){
int hasil=0;
if (Q->count==0){
    hasil=1;
    }
    return hasil;
    }

int isFull(QUEUE *Q){
int hasil=0;
if (Q->count==MAXQUEUE){
    hasil=1;
    }
    return hasil;
    }


void insert(QUEUE *Q, int data){
    if(isFull(&antrean)==1) {
        printf("maaf sudah full");
    } else{
        Q->item[Q->rear]=data;
        Q->rear=(Q->rear+1) % MAXQUEUE;
        ++(Q->count);
    }
}

void hapus(QUEUE *Q){
    if(isEmpty(&antrean)==1){
        printf("maaf antrien kosong");
    } else{
        Q->item[Q->front]=0;
        Q->front=(Q->front+1) % MAXQUEUE;
        --(Q->count);
    }
}

void printQueue(QUEUE *Q){
    int i;
    if(isEmpty(Q)==1){
        printf("Isi antrean: ");
        for(i=Q->front; i < Q->rear; i=(i+1)%MAXQUEUE){
            printf("%d", Q->item[i]);
        }
        printf("\n");
    }
}


int main(){
    inisialisasi(&antrean);
    // Insert pasien pertama //
    printf("masukan 108\n");
    insert(&antrean, 108);
    printf("isi antrean: 108\n");
    // Insert pasien kedua //
    printf("masukan 109\n");
    insert(&antrean, 109);
    printf("isi antrean: 108 109\n");
    // Insert pasien ketiga //
    printf("masukan 110\n");
    insert(&antrean, 110);
    printf("isi antrean: 108 109 110\n");
    // Insert pasien keempat //
    printf("masukan 111\n");
    insert(&antrean, 111);
    printf("isi antrean: 108 109 110 111\n");
    // Hapus pasien pertama //
    printf("menghapus 108 dari antrean\n");
    hapus(&antrean);
    printf("isi antrean: 109 110 111\n");
    // Insert pasien kelima //
    printf("masukan 112\n");
    insert(&antrean, 112);
    printf("isi antrean: 109 110 111 112\n");

// contoh
// printf("masukan xx\n");
// insert(&abcde, yy);
// printQueue(&12345);

return 0;
}


