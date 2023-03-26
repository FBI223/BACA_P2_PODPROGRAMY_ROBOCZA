#include <iostream>
#include "cstdlib"
#include "string"
#include "cstdarg"

using namespace std;


string dodaj_2_cyfry(string  , string  );

void rob_stringa_z_chara(int*   , char* , string* ) ;

void weryfikacja_zer_w_stringu( int*  , int  , string*  ) ;

int czy_poprawiac_string(  string*  ) ;

void ewentualne_poprawienie_stringa( string*  ) ;


int rozpoznaj_char( char  ) ;

char dodaj_do_sb(char  , char , char*  , char*  ) ;

char odejmij_od_sb(char  , char , char*  , char*  ) ;

void pseudo_petla_1( int*  , int* , int*  ,const string*  , const string*,  char[] , char*  ) ;

void pseudo_petla_2( int*  , int* , int*  ,const string*  , const string* , char[] , char*  ) ;

string sumuj_w_liczby_const(const string*  , const string*  ) ;

string sumuj_w_liczby_const_i_zwykle( string*  , const string*  ) ;

string sumuj_w_liczby_zwykle_i_zwykle( string* ,  string*  ) ;

void petelka_po_tab_str(int  , int* , string* , const string*   ) ;


void petelka_po_tab_str_tylko_zwykly_string(int  , int* , string* , const string*   ) ;

void petelka_po_tab_str_do_va_list(int  , int* , string* ,  string**   ) ;

string Sum(int , const string* ) ;

void petelka_po_va_list(int  , int* , string* ,  string* , std::va_list   ) ;


string Sum_pomocniczy(int integer, string* ) ;

string Suma_pomocnicza_do_va_list(int integer, string** ) ;


string Sum(int , ... ) ;

void petelka_po_va_list(int  , int* , string* ,  string* , std::va_list   ) ;

void rob_array_z_va_list(int* , int , ::va_list  , string*  ) ;

void Sum(string*  , int , const string*  ) ;

void Sum(string* string_wejscie , int integer_wejscie , ...  ) ;

void Sum(string&  , int , const string*  ) ;

void Sum(string&  , int  , ... ) ;






 //                 ////////////////////////////////

char rob_char_z_int(int ) ;

char mnozenie_dwoch_cyfr(char , char  , char*  ,char*   ) ;

void pseudo_petla_3(int* ,  string*  , string*  , string* , char*   ) ;

string pomnoz_jedna_mala_druga_ogromna_liczbe(string*  , string* ) ;

string Mult ( int , const string*  ) ;

void zrob_ilosc_zer_string(string*  , int , int* ) ;

void powtarzaj_mnozenia_krotsza_razy_dluzsza(int* ,int*  ,string*  , string* , string* ) ;

string pomnoz_jedna_liczbe_przez_druga(string* , string*  ) ;

void petelka_po_tab_mult_const(int*  , int  , string*  , const string*  ) ;

string Mult ( int integer, ... ) ;

void petelka_po_tab_mult_zwykle(int* count , int len , string* temp_wynik , string* array_zykle ) ;

void Mult ( string* , int , const string*  ) ;



