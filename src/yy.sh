bison -l -d -o yysphinxexpr.c sphinxexpr.y
bison -l -d -o yysphinxjson.c sphinxjson.y
bison -l -d -o yysphinxselect.c sphinxselect.y
bison -l -d -o yysphinxquery.c sphinxquery.y
bison -l -d -o yysphinxql.c sphinxql.y
bison -l -d -o yysphinxjson.c sphinxjson.y
flex -i -ollsphinxql.c sphinxql.l
flex -i -ollsphinxjson.c -Pyy2 sphinxjson.l

perl -npe "s/  __attr/\/\/  __attr/" -i.bak yysphinxexpr.c
perl -npe "s/^yyerrlab1:/\/\/yyerrlab1:/m;s/  __attr/\/\/  __attr/" -i.bak yysphinxselect.c
perl -npe "s/^yyerrlab1:/\/\/yyerrlab1:/m;s/  __attr/\/\/  __attr/" -i.bak yysphinxquery.c
perl -npe "s/  __attr/\/\/  __attr/" -i.bak yysphinxjson.c
perl -npe "s/(#include <unistd.h>)/#if !USE_WINDOWS\n\1\n#endif/;s/\(size_t\) num_to_read/num_to_read/" -i.bak llsphinxql.c
perl -npe "s/\(size_t\) num_to_read/num_to_read/" -i.bak llsphinxjson.c
patch -s -p0 -i yysphinxql.patch

del /q *.bak 2>nul
del /q yysphinxql.c.orig 2>nul
