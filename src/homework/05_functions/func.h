#include <string>

/// @brief The GC-content of a DNA string is given by the percentage of symbols in the string that are 'C' or 'G'. For example, the GC-content of "AGCTATAG" is 37.5%. Note that the reverse complement of any DNA string has the same GC-content.
/// @param dna 
/// @return the percentage of symbols in the string that are 'C' or 'G' 
double get_gc_content(const std::string &dna);


/// @brief In DNA strings, symbols 'A' and 'T' are complements of each other, as are 'C' and 'G'. The reverse complement of a DNA string is the string, then taking the complement of each symbol.
/// @param dna 
/// @return The reverse complement sc of s.
std::string get_dna_compliment(std::string dna);


/// @brief Reverses the order of characters of the input string
/// @param dna 
/// @return the input string in reverse
std::string get_reverse_string(std::string dna);


