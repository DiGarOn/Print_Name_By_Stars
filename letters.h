#ifndef LETTERS_H
#define LETTERS_H

#include <string>
#include <vector>

using namespace std;

//6x9
string A = "\
    *    \
   * *   \
  *   *  \
 * * * * \
*       *\
*       *";

string B = "\
* * * *  \
*      * \
* * * *  \
*      * \
*      * \
* * * *  ";

string C = "\
    * *  \
  *      \
*        \
*        \
  *      \
    * *  ";

string D = "\
* * * *  \
*      * \
*       *\
*       *\
*      * \
* * * *  ";

string E = "\
* * * * *\
*        \
* * * * *\
*        \
*        \
* * * * *";

string F = "\
* * * * *\
*        \
* * * * *\
*        \
*        \
*        ";

string G = "\
  * * * *\
*        \
* * * *  \
*       *\
*       *\
  * * *  ";

string H = "\
*       *\
*       *\
* * * * *\
*       *\
*       *\
*       *";

string I = "\
* * * * *\
    *    \
    *    \
    *    \
    *    \
* * * * *";

string J = "\
    * * *\
        *\
        *\
        *\
      *  \
* * *    ";

string K = "\
*      * \
*    *   \
* * *    \
* * * *  \
*      * \
*       *"; 

string L = "\
*        \
*        \
*        \
*        \
*        \
* * * * *";

string M = "\
*       *\
* *   * *\
*  * *  *\
*   *   *\
*       *\
*       *";

string N = "\
*       *\
* *     *\
*  *    *\
*    *  *\
*     * *\
*       *";

string O = "\
   * *   \
 *     * \
*       *\
*       *\
 *     * \
   * *   ";
   
string P = "\
* * * *  \
*       *\
*       *\
* * * *  \
*        \
*        ";

string Q = "\
   * *   \
 *     * \
*       *\
*       *\
 *     * \
   * *  *";
   

string R = "\
* * * *  \
*      * \
* * * *  \
* *      \
*   *    \
*     *  ";

string S = "\
  * * * *\
*        \
  * * *  \
        *\
        *\
* * * *   ";

string T = "\
* * * * *\
    *    \
    *    \
    *    \
    *    \
    *    ";
    
string U = "\
*       *\
*       *\
*       *\
*       *\
*       *\
  * * *  ";
   
string V = "\
*       *\
*       *\
 *     * \
  *   *  \
   * *   \
    *    ";

string W = "\
*       *\
*       *\
*   *   *\
 * * * * \
  *   *  \
  *   *  ";

string X = "\
*       *\
  *   *  \
    *    \
    *    \
  *   *  \
*       *";

string Y = "\
*       *\
 *     * \
  *   *  \
    *    \
    *    \
    *    ";
     
string Z = "\
* * * * *\
      *  \
    *    \
   *     \
  *      \
* * * * *";

vector<string> letters{A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};

string low_letters = "abcdefghijklmnopqrstuvwxyz";
string up_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

#endif