#include <stdio.h>

struct st {
    int i;
    char j[10];
    char k[10];
};

int main(void) {

    struct st arr[3];
    int i;
    char j[10];

    FILE *fp;
    fp = fopen("data.txt", "r");
    fscanf(fp, "%d:%[^:]:%s", &arr[1].i, arr[1].j, arr[1].k);
    
    fscanf(fp, "%d:%[^:]:%s", &arr[2].i, arr[2].j, arr[2].k);
    
    fclose(fp);
    printf("/%d/, /%s/, /%s/\n", arr[1].i, arr[1].j, arr[1].k);
    printf("/%d/, /%s/, /%s/\n", arr[2].i, arr[2].j, arr[2].k);

    return 0;
}