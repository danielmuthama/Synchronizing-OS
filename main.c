#include <stdio.h>

extern void func1(int, char **);
extern void func2(int, char **);
extern void func3(int, char **);
extern void func4(int, char **);
extern void func5(int, char **);
extern void func6(int, char **);


int main(int argc, char **argv){
    printf("main(): Called with the following arguments:\n");
    for(int i = 0; i<argc; i++)
    {
        printf("Arg. %d (index %d): ->%s<-\n", i+1, i, argv[i]);
    }

    printf("********* main(): Calling func6 *********\n");
    func6(argc, argv);

    printf("********* main(): Calling func5 *********\n");
    func5(argc, argv);

    printf("********* main(): Calling func1 *********\n");
    func1(argc, argv);

    printf("********* main(): Calling func4 *********\n");
    func4(argc, argv);

    printf("********* main(): Calling func3 *********\n");
    func3(argc, argv);

    printf("********* main(): Calling func2 *********\n");
    func2(argc, argv);
}