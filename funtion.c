#include<stdio.h>

void england(){
    printf("You are in england\n");
    return;
}
void australia(){
    printf("you are in aus\n");
    england();
    return;
}
void india(){
    printf("you are in india\n");
    australia();
    return;
}

int main(){
    india();
    return 0;
}