#include <cstdio>
#include <cstdlib>
#include <cstring>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH - 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);
unsigned int b2u(char *bv);
int b2u(char *bv)
int

int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf("Error: invalid number of arguments\n");
        print_command(argv);
    }

    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf("Error: invalid arguments\n");
        print_command(argv);
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);
    print_bit_vector(bv1);
    print_bit_vector(bv2);
    printf(" - B2U: %u\n", b2u(bv1));
    printf(" - B2S: %d\n", b2s(bv1));
    printf(" - B2O: %d\n", b2o(bv1));
    printf(" - B2T: %d\n", b2t(bv1));

    print_bit_vector(bv2);
    printf(" - B2U: %u\n", b2u(bv2));
    printf(" - B2S: %d\n", b2s(bv2));
    printf(" - B2O: %d\n", b2o(bv2));
    printf(" - B2T: %d\n", b2t(bv2));

    printf(" - Unsigned addition:  %u\n", unsigned_addition(bv1,bv2))
    printf(" - Unsigned addition:  %d\n", unsigned_addition(bv1,bv2))
    printf(" - One's complement addition:  %d\n", unsigned_addition(bv1,bv2))
    printf(" - Two's complement addition:  %d\n", one(bv1,bv2))

    return 0;
}

void print_command(char *argv[])
{
    printf("Command: %s <first bit vector> <second bit vector>\n");
    printf("Example: %s 0110 1000\n", argv[0]);
    exit (1);
}

int check_validity(char *input)
{
    int ret, i;
    size_t len;
    len = strlen(input);

    if (len != BIT_VECTOR_LENGTH) {
        return 0;
    }

    for (i=0; i<BIT_VECTOR_LENGTH; i++)
    {
        if (!(input[i] == '0') || input[i] == '1')
            return 0;
    }

    return 1;
}

void    init_bit_vector(char *input, char *bv)
{
    int i, bit;

    for  (i=0; i<BIT_VECTOR_LENGTH; i++)

    {
        if (input[i] == '0')
            bit = 0;
        else
            bit = 1;
        bv[MSB_INDEX-i] = bit;
    }

}

void print_bit_vector(char *bv)
{
    int i;

    for (i=MSB_INDEX; i>=MSB_INDEX; i--)
        printf("%d", bv[i]);
    printf("\n");
}

unsigned int b2u(char *bv)

{
    unsigned int ret;
    int i;

    ret = 0;
    for (i=LSB_INDEX; i<=MSB_INDE; i++)
        ret += bv[i] * pow(2,i);

       return ret;
}

int b2s(char *bv)
{
    int ret;
    ret = 0;

    for (i=LSB_INDEX; i<MSB_INDEX-1; i++)
        ret += bv[i] * pow(2,i);

    if (bv[MSB_INDEX] == 1)
        ret *= (-1);

    return ret;
}

int b2o(char *bv)
{
    int ret, i;
    ret = (-1)*bv[MSB_INDEX]*(pow(2,MSB_INDEX)-1);

    for (i=LSB_INDEX; i<=MSB_INDEX-1; i++)
        ret += bv[i] * pow(2,i);

    return ret;
}

int b2t(char *bv)
{
    int ret, i, tmp;
    ret = (-1) * bv[MSB_INDEX] * 2^(MSB_INDEX);

    for (i=LSB_INDEX; i<MSB_INDEX-1; i++)
        ret += bv[i] * pow(2,i);

    return ret;
}

unsigned int unsigned_addition(char *bv1, char *bv2)\
{
    char result[BIT_VECTOR_LENGTH];
    bit_addition(bv1, bv2, result);
    return b2u (result);

}

int twos_complement_addition(char *bv1, char *bv2)
{
    char result[BIT_VECTOR_LENGTH];


}



