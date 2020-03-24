/**
 * AUTHORS: <Matan Greenberg & Or Mendel>
 */
#include "PhoneticFinder.hpp"
#include "doctest.h"
#include <string>

using namespace std;
using namespace phonetic;

TEST_CASE("Tests swaping between 'i' and 'y'"){
    string text = "this is a good day";
    string str = "iiyy";
    CHECK(find(text, "THIS") == string("this"));
    CHECK(find(text, "thys") == string("this"));
    CHECK(find(text, "this") == string("this"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "is") == string("is"));
    CHECK(find(text, "a") == string("a"));
    CHECK(find(text, "good") == string("good"));
    CHECK(find(text, "day") == string("day"));
    CHECK(find(str, "yyyy") == string("iiyy"));
    CHECK(find(str, "yyyi") == string("iiyy"));
    CHECK(find(str, "yyii") == string("iiyy"));
    CHECK(find(str, "yiii") == string("iiyy"));
    CHECK(find(str, "iiii") == string("iiyy"));
    CHECK(find(str, "iiiy") == string("iiyy"));
    CHECK(find(str, "iiyy") == string("iiyy"));
    CHECK(find(str, "iyyy") == string("iiyy"));
}

TEST_CASE("Tests swaping between 'o' and 'u'"){
    string text = "do more of what makes you happy";
    string str = "oouu";
    CHECK(find(text, "DO") == string("do"));
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
    CHECK(find(text, "IT") == string("it"));
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
    CHECK(find(text, "get") == string("get"));
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
    CHECK(find(text, "SUCSESS") == string("sucsess"));
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
    CHECK(find(str, "ssss") == string("sszz"));
    CHECK(find(str, "sssz") == string("sszz"));
    CHECK(find(str, "sszz") == string("sszz"));
    CHECK(find(str, "szzz") == string("sszz"));
    CHECK(find(str, "zzzz") == string("sszz"));
    CHECK(find(str, "zzzs") == string("sszz"));
    CHECK(find(str, "zzss") == string("sszz"));
    CHECK(find(str, "zsss") == string("sszz"));
}

TEST_CASE("Tests swaping between 'c', 'k' and 'q'"){
    string text = "make things right not quick";
    CHECK(find(text, "MAKE") == string("make"));
    CHECK(find(text, "mace") == string("make"));
    CHECK(find(text, "make") == string("make"));
    CHECK(find(text, "maqe") == string("make"));
    CHECK(find(text, "things") == string("things"));
    CHECK(find(text, "right") == string("right"));
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
    CHECK(find(text, "JUDGING") == string("judging"));
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
    CHECK(find(text, "THIS") == string("this"));
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
    string text = "just smile and wave";
    string str = "wwvv";
    CHECK(find(text, "JUST") == string("just"));
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


TEST_CASE("Tests wrong swaping - combined errors"){
    string text = "My kid is five yeArs old";
    string str = "You are loOking good maTe";
    CHECK_THROWS(find(text, "MTY")); //("My"))
    CHECK_THROWS(find(text, "yu")); //("You"))
    CHECK_THROWS(find(text, "kis")) ;//("kid"))
    CHECK_THROWS(find(text, "iss")); //("is"))
    CHECK_THROWS(find(text, "fibe")); //("five"))
    CHECK_THROWS(find(text, "yeers")); //("years"))
    CHECK_THROWS(find(text, "oldd")); //("old"))
    CHECK_THROWS(find(str, "Youi")); //("You"))
    CHECK_THROWS(find(str, "r")); //("are"))
    CHECK_THROWS(find(str, "loking")); //("looking"))
    CHECK_THROWS(find(str, "lookimg")); //("looking"))
    CHECK_THROWS(find(str, "gold")); //("good"))
    CHECK_THROWS(find(str, "goof")); //("good"))
    CHECK_THROWS(find(str, "mare")); //("mate"))
    CHECK_THROWS(find(str, "nate")); //("mate"))
    CHECK_THROWS(find(str, ""));
    CHECK_THROWS(find(str, "yu"));
    CHECK_THROWS(find(str, "ar"));
    CHECK_THROWS(find(str, "looting"));
    CHECK_THROWS(find(str, "dood"));
    CHECK_THROWS(find(str, "mAt"));
    CHECK_THROWS(find(text, ""));
    CHECK_THROWS(find(text, "m"));
    CHECK_THROWS(find(text, "myi"));
    CHECK_THROWS(find(text, "gid"));
    CHECK_THROWS(find(text, "si"));
    CHECK_THROWS(find(text, "fie"));
    CHECK_THROWS(find(text, "year"));
    CHECK_THROWS(find(text, "hold"));
}

TEST_CASE("Tests swapping upper-case and lower-case"){
    string text = "tHe caKE iS a LIE";
    string str = "cUp arm cAT away mEt turn hIt sEe hOt caLl Put blUe fIve noW gO wHere sAy Near Boy puRe baD diD Find giVe How Yes leG Man nO Sing peT Red Sun shE teA cheCk thinK thIs voiCe Wet Zoo pLeasure jUst (phonetic)";
    CHECK(find(text, "the") == string("tHe"));
    CHECK(find(text, "thE") == string("tHe"));
    CHECK(find(text, "The") == string("tHe"));
    CHECK(find(text, "THE") == string("tHe"));
    CHECK(find(text, "tHe") == string("tHe"));
    CHECK(find(text, "cake") == string("caKE"));
    CHECK(find(text, "cakE") == string("caKE"));
    CHECK(find(text, "caKE") == string("caKE"));
    CHECK(find(text, "cAKE") == string("caKE"));
    CHECK(find(text, "Cake") == string("caKE"));
    CHECK(find(text, "is") == string("iS"));
    CHECK(find(text, "IS") == string("iS"));
    CHECK(find(text, "iS") == string("iS"));
    CHECK(find(text, "Is") == string("iS"));
    CHECK(find(text, "a") == string("a"));
    CHECK(find(text, "A") == string("a"));
    CHECK(find(text, "lie") == string("LIE"));
    CHECK(find(text, "Lie") == string("LIE"));
    CHECK(find(text, "lIe") == string("LIE"));
    CHECK(find(text, "liE") == string("LIE"));
    CHECK(find(text, "LIE") == string("LIE"));
    CHECK(find(text, "lIE") == string("LIE"));
    CHECK(find(text,"lYe") == string("LIE")); 
    CHECK(find(text,"caCe") == string("caKE"));
    CHECK(find(str,"cub") == string("cUp"));
    CHECK(find(str,"arm") == string("arm"));
    CHECK(find(str,"cad") == string("cAT"));
    CHECK(find(str,"awai") == string("away"));
    CHECK(find(str,"met") == string("mEt"));
    CHECK(find(str,"durn") == string("turn"));
    CHECK(find(str,"hyt") == string("hIt"));
    CHECK(find(str,"zee") == string("sEe"));
    CHECK(find(str,"hod") == string("hOt"));
    CHECK(find(str,"kall") == string("caLl"));
    CHECK(find(str,"but") == string("Put"));
    CHECK(find(str,"bloe") == string("blUe"));
    CHECK(find(str,"fyve") == string("fIve"));
    CHECK(find(str,"now") == string("noW"));
    CHECK(find(str,"gu") == string("gO"));
    CHECK(find(str,"where") == string("wHere"));
    CHECK(find(str,"say") == string("sAy"));
    CHECK(find(str,"near") == string("Near"));
    CHECK(find(str,"foy") == string("Boy"));
    CHECK(find(str,"pure") == string("puRe"));
    CHECK(find(str,"bat") == string("baD"));
    CHECK(find(str,"dit") == string("diD"));
    CHECK(find(str,"pind") == string("Find"));
    CHECK(find(str,"giwe") == string("giVe"));
    CHECK(find(str,"how") == string("How"));
    CHECK(find(str,"ies") == string("Yes"));
    CHECK(find(str,"lej") == string("leG"));
    CHECK(find(str,"man") == string("Man"));
    CHECK(find(str,"nu") == string("nO"));
    CHECK(find(str,"zing") == string("Sing"));
    CHECK(find(str,"ped") == string("peT"));
    CHECK(find(str,"red") == string("Red"));
    CHECK(find(str,"zun") == string("Sun"));
    CHECK(find(str,"she") == string("shE"));
    CHECK(find(str,"tea") == string("teA"));
    CHECK(find(str,"chekk") == string("cheCk"));
    CHECK(find(str,"thinq") == string("thinK"));
    CHECK(find(str,"voiqe") == string("voiCe"));
    CHECK(find(str,"vet") == string("Wet"));
    CHECK(find(str,"soo") == string("Zoo"));
    CHECK(find(str,"pleasure") == string("pLeasure"));
    CHECK(find(str,"jost") == string("jUst"));
    CHECK(find(str,"(phonetic)") == string("(phonetic)"));
}


