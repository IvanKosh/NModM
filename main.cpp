/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:52
 */

#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
    int n, m;
    FILE * stream;

    stream = fopen (argv[1], "r");
    
    fscanf(stream, "%i,%i", &n, &m);
    while(!feof(stream)){
        while (n >= m) {
            n -= m;
        }
        printf("%i\n", n);
        fscanf(stream, "%i,%i", &n, &m);
    }
    return 0;
}