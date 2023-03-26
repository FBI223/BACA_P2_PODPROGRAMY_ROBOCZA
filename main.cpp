#include <iostream>
#include "cstdlib"
#include "string"
#include "cstdarg"

//#include "Sum.cpp"
//#include "Mult.cpp"
//#include "Operation.cpp"

#include "Sum.h"

using namespace std;


void ssss_tablice( char arrrr[] )
{

    arrrr[0] = 'A';
    arrrr[1] = 'B' ;
    arrrr[2] = 'C' ;

}

void ssss(string* sss)
{
    *(sss+1) = "fff" ;
    cout << *sss << endl;
}

int main() {


    int arr_len = 3 ;
    string arr0[] = {"0", "3333333"};

    char s11[] = "1" ;
    char s22[] = "-345" ;
    char s33[] = "123" ;
    cout << "wynik mnozeniaaaaaaaaaaaaaaAAAAAAAAAAAA : " << Mult(arr_len,&s11,&s22,&s33) << endl;


//    string zly_string = "00" ;
//    ewentualne_poprawienie_stringa(&zly_string);
//    cout << " dobry / zly string : " << zly_string << endl;



//    string s1 = "994324329" ;
//    string s2 = "3" ;
//
//    string s_wynik = "" ;
//
//    s_wynik = pomnoz_jedna_mala_druga_ogromna_liczbe(&s2 , &s1 ) ;
//    cout << s_wynik << endl;


//
//
//
//    int wynik = 78 ;
//    cout << (wynik/10) << endl;
//
//
//    string arr4[] = {"123", "345", "999", "1000000", "1"};
//    const string* txt4 = &arr4[0];
//
//    char a0[] = "123" ;
//    char a1[] = "345" ;
//    char a2[] = "999" ;
//    char a3[] = "1000000" ;
//    char a4[] = "1" ;
//
//    const int arr_size = 5 ;
//    //string arr1[] = { "-07847168", "000000000000000007204296" };
//    //string arr1[]= {  "+0000000000000000", "-00000000000000000", "+3333333333333333", "-234121212123", "-5298592312354352", "+99657452352300005403405349", "-1423900000000000000000000000000000000000000000000000000000000000000000"};
//    string wynik_ret = "";
//    string wynik_ptr = "";
//    string wynik_ref = "";
//
//    wynik_ret = Sum(arr_size,&a0 , &a1  , &a2 , &a3 , &a4 );
//    //Sum(&wynik_ptr,arr_size,arr4)  ;
//    //Sum(wynik_ref,arr_size,arr4)  ;
//
//    cout << "wynik return : " << wynik_ret << endl;
//    cout << "wynik pointer : " << wynik_ret << endl;
//    cout << "wynik referencja : " << wynik_ret << endl;






//
//
//    string* str_ptr_tab[3];
//
//    string s_arr[2];
//    s_arr[0] = "321312222"  ;
//    s_arr[1] = "-4234320000000" ;
//    //s_arr[2] = "-232" ;
//
//    str_ptr_tab[0] = &(s_arr[0]) ;
//    str_ptr_tab[1] = &(s_arr[0]) ;
//    str_ptr_tab[2] = &(s_arr[0]) ;
//
//
//    const string ss1 = "-2300";
//    const string ss2 = "2337" ;
//    const string ss3 = "2337" ;
//    const string ss4 = "+0" ;
//    const string ss5 = "+0" ;
//    const string ss6 = "-1" ;
//    const string ss7 = "-000009" ;
//    const string ss8 = "+000" ;
//
//    char sss1[] = "-2300\0";
//    char sss2[] = "2337\0" ;
//    char sss3[] = "2337\0" ;
//
//    char sss4[] = "+00" ;
//    char sss5[] = "+0" ;
//    char sss6[] = "-1" ;
//
//    char sss7[] = "-1" ;
//    char sss8[] = "-1" ;
//
//
//
//
//
//    string s_wynik = "" ;
//
//    Sum(&s_wynik,2,s_arr) ;
//    //Sum(s_wynik,3,s_arr) ;
//
//    cout << " AAAAAAAAAAAAAAAAA : " << s_wynik << endl;

//
//    string tab_const_str[3] ;
//    tab_const_str[0] = "12321312312" ;
//    tab_const_str[1] = "-31331" ;
//    tab_const_str[2] = "-87658678" ;
//
//    Sum(3,tab_const_str) ;

    //cout << (ss1 < ss2) << endl;
    //sumuj_w_liczby_const(&ss1 , &ss2) ;


//
//
//    char arrrr[5];
//    arrrr[0] = 'a';
//    arrrr[1] = 'b';
//    arrrr[2] = 'c';
//    arrrr[3] = '\0';
//    arrrr[4] = '\0';
//
//    cout << arrrr << endl;
//    ssss_tablice(arrrr) ;
//    cout << arrrr << endl;


//
//    string arr[] = {"10000", "-1"};
//
//    string s_1 = "abc" ;
//    string* s_1_adr = &s_1;
//
//    ssss(&s_1);
//
//    //ssss(arr) ;
//
//    //cout << arr[1] << endl;
//    cout << s_1_adr->at(1) << endl;
//
//    std::printf("\n");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
