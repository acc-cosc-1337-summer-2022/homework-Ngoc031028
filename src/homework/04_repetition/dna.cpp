// add include statements
#include <string>
#include <iostream>

using namespace std;

// add function(s) code here
double get_gc_content(const string &dna)
{

     int CG_nums = 0;
     int l = dna.length();

     for (int i = 0; i <= l - 1; i++)
     {
          if (dna[i] == 'C' || dna[i] == 'G')
               CG_nums++;
     }

     return (double)CG_nums / (double)l;
}

string get_reverse_string(string dna)
{

     int l = dna.length();
     string reverse_str;

     for (int i = l - 1; i >= 0; i--)
          reverse_str.push_back(dna[i]);

     return reverse_str;
}

string get_dna_complement(string dna)
{

     int l = dna.length();
     string complement_str;
     string revStr = get_reverse_string(dna);

     for (int i = 0; i < l; i++)
     {
          if (revStr[i] == 'A')
               complement_str.push_back('T');
          else if (revStr[i] == 'T')
               complement_str.push_back('A');

          else if (revStr[i] == 'C')
               complement_str.push_back('G');

          else // revStr[i] == 'G')
               complement_str.push_back('C');
          
     }

     return complement_str;
}