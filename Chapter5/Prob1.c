#include <stdio.h>
int avg(float x,float y,float z){
    printf("The average of three numbers are: %f",(x+y+z)/3);
    return (x+y+z)/3;

}
int main(){
    avg(10,12,13);
    return 0;
}