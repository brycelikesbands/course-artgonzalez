//add include statements
#include "func.h"
//add function code here
#include "func.h"

double get_gc_content(const std::string& dna) {
    int gc_count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            gc_count++;
        }
    }
    return static_cast<double>(gc_count) / dna.size();
}

std::string get_reverse_string(std::string dna) {
    for (int i = 0, j = dna.size() - 1; i < j; i++, j--) {
        std::swap(dna[i], dna[j]);
    }
    return dna;
}

std::string get_dna_complement(std::string dna) {
    get_reverse_string(dna); // Step a: Reverse the string
    for (char& nucleotide : dna) {
        switch (nucleotide) {
            case 'A':
                nucleotide = 'T';
                break;
            case 'T':
                nucleotide = 'A';
                break;
            case 'C':
                nucleotide = 'G';
                break;
            case 'G':
                nucleotide = 'C';
                break;
            default:
                break;
        }
    }
    return dna;
}