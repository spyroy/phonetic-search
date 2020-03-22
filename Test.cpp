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

TEST_CASE("Tests swaping between 'c', 'k' and 'q'"){
    string text = "make things right not quick";
    CHECK(find(text, "mace") == string("make"));
    CHECK(find(text, "make") == string("make"));
    CHECK(find(text, "maqe") == string("make"));
    CHECK(find(text, "things") == string("things"));
    CHECK(find(text, "riht") == string("right"));
    CHECK(find(text, "not") == string("not"));
    CHECK(find(text, "cuicc") == string("quick"));
    CHECK(find(text, "cuick") == string("quick"));
    CHECK(find(text, "cuicq") == string("quick"));
    CHECK(find(text, "cuikc") == string("quick"));
    CHECK(find(text, "cuikk") == string("quick"));
    CHECK(find(text, "cuikq") == string("quick"));
    CHECK(find(text, "cuiqc") == string("quick"));
    CHECK(find(text, "cuiqk") == string("quick"));
    CHECK(find(text, "cuiqq") == string("quick"));
    CHECK(find(text, "kuicc") == string("quick"));
    CHECK(find(text, "kuick") == string("quick"));
    CHECK(find(text, "kuicq") == string("quick"));
    CHECK(find(text, "kuikc") == string("quick"));
    CHECK(find(text, "kuikk") == string("quick"));
    CHECK(find(text, "kuikq") == string("quick"));
    CHECK(find(text, "kuiqc") == string("quick"));
    CHECK(find(text, "kuiqk") == string("quick"));
    CHECK(find(text, "kuiqq") == string("quick"));
    CHECK(find(text, "quicc") == string("quick"));
    CHECK(find(text, "quick") == string("quick"));
    CHECK(find(text, "quicq") == string("quick"));
    CHECK(find(text, "quikc") == string("quick"));
    CHECK(find(text, "quikk") == string("quick"));
    CHECK(find(text, "quikq") == string("quick"));
    CHECK(find(text, "quiqc") == string("quick"));
    CHECK(find(text, "quiqk") == string("quick"));
    CHECK(find(text, "quiqq") == string("quick"));
}

TEST_CASE("Tests swaping between 'g' and 'j'"){
    string text = "judging while jumping is dangerous";
    string str = "ggjj";
    CHECK(find(text, "judjinj") == string("judging"));
    CHECK(find(text, "judjing") == string("judging"));
    CHECK(find(text, "judginj") == string("judging"));
    CHECK(find(text, "judging") == string("judging"));
    CHECK(find(text, "gudjinj") == string("judging"));
    CHECK(find(text, "gudjing") == string("judging"));
    CHECK(find(text, "gudginj") == string("judging"));
    CHECK(find(text, "gudging") == string("judging"));
    CHECK(find(text, "while") == string("while"));
    CHECK(find(text, "jumping") == string("jumping"));
    CHECK(find(text, "jumpinj") == string("jumping"));
    CHECK(find(text, "gumpinj") == string("jumping"));
    CHECK(find(text, "gumping") == string("jumping"));
    CHECK(find(text, "dangerous") == string("dangerous"));
    CHECK(find(text, "danjerous") == string("dangerous"));
    CHECK(find(str, "gggg") == string("ggjj"));
    CHECK(find(str, "gggj") == string("ggjj"));
    CHECK(find(str, "ggjj") == string("ggjj"));
    CHECK(find(str, "gjjj") == string("ggjj"));
    CHECK(find(str, "jjjj") == string("ggjj"));
    CHECK(find(str, "jjjg") == string("ggjj"));
    CHECK(find(str, "jjgg") == string("ggjj"));
    CHECK(find(str, "jggg") == string("ggjj"));
}

TEST_CASE("Tests swaping between 'b', 'f' and 'p'"){
    string text = "this glass is bulletproof";
    CHECK(find(text, "this") == string("this"));
    CHECK(find(text, "glass") == string("glass"));
    CHECK(find(text, "is") == string("is"));
    CHECK(find(text, "bulletbroob") == string("bulletproof"));
    CHECK(find(text, "bulletbroof") == string("bulletproof"));
    CHECK(find(text, "bulletbroop") == string("bulletproof"));
    CHECK(find(text, "bulletbroob") == string("bulletproof"));
    CHECK(find(text, "bulletfroob") == string("bulletproof"));
    CHECK(find(text, "bulletfroof") == string("bulletproof"));
    CHECK(find(text, "bulletfroop") == string("bulletproof"));
    CHECK(find(text, "bulletproob") == string("bulletproof"));
    CHECK(find(text, "bulletproof") == string("bulletproof"));
    CHECK(find(text, "bulletproop") == string("bulletproof"));
    CHECK(find(text, "fulletbroob") == string("bulletproof"));
    CHECK(find(text, "fulletbroof") == string("bulletproof"));
    CHECK(find(text, "fulletbroop") == string("bulletproof"));
    CHECK(find(text, "fulletfroob") == string("bulletproof"));
    CHECK(find(text, "fulletfroof") == string("bulletproof"));
    CHECK(find(text, "fulletfroop") == string("bulletproof"));
    CHECK(find(text, "fulletproob") == string("bulletproof"));
    CHECK(find(text, "fulletproof") == string("bulletproof"));
    CHECK(find(text, "fulletproop") == string("bulletproof"));
    CHECK(find(text, "pulletbroob") == string("bulletproof"));
    CHECK(find(text, "pulletbroof") == string("bulletproof"));
    CHECK(find(text, "pulletbroop") == string("bulletproof"));
    CHECK(find(text, "pulletfroob") == string("bulletproof"));
    CHECK(find(text, "pulletfroof") == string("bulletproof"));
    CHECK(find(text, "pulletfroop") == string("bulletproof"));
    CHECK(find(text, "pulletproob") == string("bulletproof"));
    CHECK(find(text, "pulletproof") == string("bulletproof"));
    CHECK(find(text, "pulletproop") == string("bulletproof"));
}

TEST_CASE("Tests swaping between 'v' and 'w'"){
    string text = "just smile and wave!";
    string str = "wwvv";
    CHECK(find(text, "just") == string("just"));
    CHECK(find(text, "smile") == string("smile"));
    CHECK(find(text, "and") == string("and"));
    CHECK(find(text, "wave") == string("wave"));
    CHECK(find(text, "wawe") == string("wave"));
    CHECK(find(text, "vawe") == string("wave"));
    CHECK(find(text, "vave") == string("wave"));
    CHECK(find(str, "wwww") == string("wwvv"));
    CHECK(find(str, "wwwv") == string("wwvv"));
    CHECK(find(str, "wwvv") == string("wwvv"));
    CHECK(find(str, "wvvv") == string("wwvv"));
    CHECK(find(str, "vvvv") == string("wwvv"));
    CHECK(find(str, "vvvw") == string("wwvv"));
    CHECK(find(str, "vvww") == string("wwvv"));
    CHECK(find(str, "vwww") == string("wwvv"));
}


/*
need to do more tests with wrong words
also with lower case and upper case and maybe some test with loop or
somthing a little bit more complicated.
*/

