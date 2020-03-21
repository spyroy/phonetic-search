#include "PhoneticFinder.hpp"
#include "doctest.h"
#include <string>

using namespace std;
using namespace phonetic;

TEST_CASE("Tests swaping between 'i' and 'y'"){
    string text = "this is a good day";
    string str = "iiyy";
    CHECK(find(text, "thys") == string("this"));
    CHECK(find(text, "this") == string("this"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "is") == string("is"));
    CHECK(find(text, "a") == string("a"));
    CHECK(find(text, "good") == string("good"));
    CHECK(find(text, "day") == string("day"));
    CHECK(find(str, "yyyy") == string("iiiyyy"));
    CHECK(find(str, "yyyi") == string("iiiyyy"));
    CHECK(find(str, "yyii") == string("iiiyyy"));
    CHECK(find(str, "yiii") == string("iiiyyy"));
    CHECK(find(str, "iiii") == string("iiiyyy"));
    CHECK(find(str, "iiiy") == string("iiiyyy"));
    CHECK(find(str, "iiyy") == string("iiiyyy"));
    CHECK(find(str, "iyyy") == string("iiiyyy"));
}

TEST_CASE("Tests swaping between 'o' and 'u'"){
    string text = "do more of what makes you happy";
    string str = "oouu";
    CHECK(find(text, "du") == string("do"));
    CHECK(find(text, "do") == string("do"));
    CHECK(find(text, "mure") == string("more"));
    CHECK(find(text, "more") == string("more"));
    CHECK(find(text, "uf") == string("of"));
    CHECK(find(text, "of") == string("of"));
    CHECK(find(text, "what") == string("what"));
    CHECK(find(text, "makes") == string("makes"));
    CHECK(find(text, "yuu") == string("you"));
    CHECK(find(text, "yuo") == string("you"));
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "yoo") == string("you"));
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(str, "oooo") == string("oouu"));
    CHECK(find(str, "ooou") == string("oouu"));
    CHECK(find(str, "oouu") == string("oouu"));
    CHECK(find(str, "ouuu") == string("oouu"));
    CHECK(find(str, "uuuu") == string("oouu"));
    CHECK(find(str, "uuuo") == string("oouu"));
    CHECK(find(str, "uuoo") == string("oouu"));
    CHECK(find(str, "uooo") == string("oouu"));
}

TEST_CASE("Tests swaping between 'd' and 't'"){
    string text = "it never gets easier you just get better and better";
    string str = "ddtt";
    CHECK(find(text, "id") == string("it"));
    CHECK(find(text, "it") == string("it"));
    CHECK(find(text, "never") == string("never"));
    CHECK(find(text, "geds") == string("gets"));
    CHECK(find(text, "gets") == string("gets"));
    CHECK(find(text, "easier") == string("easier"));
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "jusd") == string("just"));
    CHECK(find(text, "just") == string("just"));
    CHECK(find(text, "ged") == string("get"));
    CHECK(find(text, "get") == string("ged"));
    CHECK(find(text, "better") == string("better"));
    CHECK(find(text, "bedder") == string("better"));
    CHECK(find(text, "bedter") == string("better"));
    CHECK(find(text, "betder") == string("better"));
    CHECK(find(text, "ant") == string("and"));
    CHECK(find(text, "and") == string("and"));
    CHECK(find(str, "dddd") == string("ddtt"));
    CHECK(find(str, "dddt") == string("ddtt"));
    CHECK(find(str, "ddtt") == string("ddtt"));
    CHECK(find(str, "dttt") == string("ddtt"));
    CHECK(find(str, "tttt") == string("ddtt"));
    CHECK(find(str, "tttd") == string("ddtt"));
    CHECK(find(str, "ttdd") == string("ddtt"));
    CHECK(find(str, "tddd") == string("ddtt"));
}

TEST_CASE("Tests swaping between 's' and 'z'"){
    string text = "sucsess makes you sneeze";
    string str = "sszz";
    CHECK(find(text, "sucsess") == string("sucsess"));
    CHECK(find(text, "sucsesz") == string("sucsess"));
    CHECK(find(text, "sucsezs") == string("sucsess"));
    CHECK(find(text, "sucsezz") == string("sucsess"));
    CHECK(find(text, "suczess") == string("sucsess"));
    CHECK(find(text, "suczesz") == string("sucsess"));
    CHECK(find(text, "suczezs") == string("sucsess"));
    CHECK(find(text, "suczezz") == string("sucsess"));
    CHECK(find(text, "zucsess") == string("sucsess"));
    CHECK(find(text, "zucsesz") == string("sucsess"));
    CHECK(find(text, "zucsezs") == string("sucsess"));
    CHECK(find(text, "zucsezz") == string("sucsess"));
    CHECK(find(text, "zuczess") == string("sucsess"));
    CHECK(find(text, "zuczesz") == string("sucsess"));
    CHECK(find(text, "zuczezs") == string("sucsess"));
    CHECK(find(text, "zuczezz") == string("sucsess"));
    CHECK(find(text, "makez") == string("makes"));
    CHECK(find(text, "makes") == string("makes"));
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "sneeze") == string("sneeze"));
    CHECK(find(text, "sneese") == string("sneeze"));
    CHECK(find(text, "zneeze") == string("sneeze"));
    CHECK(find(text, "zneese") == string("sneeze"));
    CHECK(find(text, "ssss") == string("sszz"));
    CHECK(find(text, "sssz") == string("sszz"));
    CHECK(find(text, "sszz") == string("sszz"));
    CHECK(find(text, "szzz") == string("sszz"));
    CHECK(find(text, "zzzz") == string("sszz"));
    CHECK(find(text, "zzzs") == string("sszz"));
    CHECK(find(text, "zzss") == string("sszz"));
    CHECK(find(text, "zsss") == string("sszz"));
}

/*
need to do more tests with c,k,q || g,j || b,f,p || v,w
also with lower case and upper case and maybe some test with loop or
somthing a little bit more complicated.
*/

