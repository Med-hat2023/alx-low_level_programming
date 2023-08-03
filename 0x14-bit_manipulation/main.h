#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * AUth: Medhat Mohamed Deif
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-bit_manipulation directory.
 *       Alx Projects 2023::: Hadeer
 */
int main(void);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int set_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
int clear_bit(unsigned long int *n, unsigned int index);


#endif /* MAIN_H */
